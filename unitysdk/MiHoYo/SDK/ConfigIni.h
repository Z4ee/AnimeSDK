#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONFIGINI__CTOR_OFFSET UNITYSDK_OFFSET(0x173FAE90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigIni_TypeDefinitionIndex = 7019;

	class ConfigIni : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* keyVal; // 0x18

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINI__CTOR_OFFSET))(this, path);
		}
	};
}
