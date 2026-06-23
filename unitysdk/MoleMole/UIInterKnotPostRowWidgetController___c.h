#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B1EC0)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169B1F00)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__30_0_OFFSET UNITYSDK_OFFSET(0x169B1F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex = 58608;

	class UIInterKnotPostRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotPostRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotPostRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46C60);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInterKnot_b__30_0(::System::Int32 newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__30_0_OFFSET))(this, newState);
		}
	};
}
