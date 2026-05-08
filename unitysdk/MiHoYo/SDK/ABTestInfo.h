#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ABTESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBD270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ABTestInfo_TypeDefinitionIndex = 18766;

	class ABTestInfo : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::System::Int32 scene_id_pay_plat_type; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ABTESTINFO__CTOR_OFFSET))(this);
		}
	};
}
