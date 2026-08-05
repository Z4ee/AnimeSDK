#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168E3D20)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168E3D60)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__REFRESHVIEWDATA_B__7_1_OFFSET UNITYSDK_OFFSET(0x168E3D70)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex = 87425;

	class UINewbieGuideMissionBaseRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A640);
		}
		static ::MoleMole::UINewbieGuideMissionBaseRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewbieGuideMissionBaseRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewData_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__REFRESHVIEWDATA_B__7_1_OFFSET))(this);
		}
	};
}
