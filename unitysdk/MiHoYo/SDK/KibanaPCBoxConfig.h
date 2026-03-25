#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_KIBANAPCBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1D670)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaPCBoxConfig_TypeDefinitionIndex = 6913;

	class KibanaPCBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* modules; // 0x18
		::MiHoYo::SDK::KibanaLogLevel level; // 0x20

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAPCBOXCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
