#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19111120)
#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19111160)
#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__REGISTEREVENTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x19111170)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex = 54871;

	class UIInLevelSkillButtonDroneRechargeChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42B50);
		}
		static ::MoleMole::UIInLevelSkillButtonDroneRechargeChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelSkillButtonDroneRechargeChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterEvents_b__16_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__REGISTEREVENTS_B__16_0_OFFSET))(this, args);
		}
	};
}
