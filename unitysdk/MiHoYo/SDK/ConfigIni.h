#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONFIGINI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B317710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigIni_TypeDefinitionIndex = 19737;

	class ConfigIni : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* keyVal; // 0x10
		::System::String* path; // 0x18

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINI__CTOR_OFFSET))(this, path);
		}
	};
}
