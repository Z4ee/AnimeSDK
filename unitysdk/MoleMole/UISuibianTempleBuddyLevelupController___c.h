#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
namespace MoleMole { class UISuibianTempleDeployTipsPopWindowController_AttrItem; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C0D5F0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C0D630)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__29_2_OFFSET UNITYSDK_OFFSET(0x14C0D640)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__32_0_OFFSET UNITYSDK_OFFSET(0x14C0D780)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex = 66369;

	class UISuibianTempleBuddyLevelupController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*>** StaticGet___9__29_2()
		{
			return (::System::Comparison_1<::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x32B00);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_131*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x32B08);
		}
		static ::MoleMole::UISuibianTempleBuddyLevelupController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleBuddyLevelupController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x32B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnClickBtn2_b__29_2(::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* l, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__29_2_OFFSET))(this, l, r);
		}

		::System::Int32 _SetConsume_b__32_0(::Class_2_208CC9941471731A_131* lhs, ::Class_2_208CC9941471731A_131* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_131*, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__32_0_OFFSET))(this, lhs, rhs);
		}
	};
}
