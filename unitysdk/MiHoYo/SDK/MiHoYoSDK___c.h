#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BA330)
#define MIHOYO_SDK_MIHOYOSDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BA370)
#define MIHOYO_SDK_MIHOYOSDK___C__INIT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1E5BA380)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK___c_TypeDefinitionIndex = 37308;

	class MiHoYoSDK___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDK___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDK___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK___c_TypeDefinitionIndex)->GetStaticField(0x29B90);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK___c_TypeDefinitionIndex)->GetStaticField(0x29B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__INIT_B__20_0_OFFSET))(this);
		}
	};
}
