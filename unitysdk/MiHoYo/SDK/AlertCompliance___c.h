#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_ALERTCOMPLIANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA840)
#define MIHOYO_SDK_ALERTCOMPLIANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA880)
#define MIHOYO_SDK_ALERTCOMPLIANCE___C__SHOW_B__23_1_OFFSET UNITYSDK_OFFSET(0x1CCEA890)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertCompliance___c_TypeDefinitionIndex = 20104;

	class AlertCompliance___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AlertCompliance___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::AlertCompliance___c**)Il2CppClass::FromTypeDefinitionIndex(AlertCompliance___c_TypeDefinitionIndex)->GetStaticField(0x8FD0);
		}
		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AlertCompliance___c_TypeDefinitionIndex)->GetStaticField(0x8FD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__SHOW_B__23_1_OFFSET))(this);
		}
	};
}
