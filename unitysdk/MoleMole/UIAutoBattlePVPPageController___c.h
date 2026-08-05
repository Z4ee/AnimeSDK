#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_087138E271AD05E0;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192F4970)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192F49B0)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET UNITYSDK_OFFSET(0x192F4AE0)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET UNITYSDK_OFFSET(0x192F4AF0)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYSHOWRANKCHANGEDIALOG_B__31_0_OFFSET UNITYSDK_OFFSET(0x192F49C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c_TypeDefinitionIndex = 66541;

	class UIAutoBattlePVPPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_087138E271AD05E0*>** StaticGet___9__78_0()
		{
			return (::System::Action_1<::Class_3_087138E271AD05E0*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A230);
		}
		static ::MoleMole::UIAutoBattlePVPPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A238);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__78_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A240);
		}
		static ::System::Action** StaticGet___9__31_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowRankChangeDialog_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYSHOWRANKCHANGEDIALOG_B__31_0_OFFSET))(this);
		}

		::System::Void _TryJoinABPVP_b__78_0(::Class_3_087138E271AD05E0* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_087138E271AD05E0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinABPVP_b__78_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET))(this, _);
		}
	};
}
