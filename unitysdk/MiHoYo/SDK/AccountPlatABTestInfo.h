#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTPLATABTESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173D4830)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatABTestInfo_TypeDefinitionIndex = 6948;

	class AccountPlatABTestInfo : public ::System::Object
	{
	public:
		::System::Int32 app_id; // 0x10
		::System::String* app_key; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* scene_ids; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATABTESTINFO__CTOR_OFFSET))(this);
		}
	};
}
