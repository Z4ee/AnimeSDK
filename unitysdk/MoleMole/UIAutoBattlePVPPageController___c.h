#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6D0592AEE1AF8169;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B32200)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B32240)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET UNITYSDK_OFFSET(0x15B32370)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET UNITYSDK_OFFSET(0x15B32380)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYSHOWRANKCHANGEDIALOG_B__31_0_OFFSET UNITYSDK_OFFSET(0x15B32250)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c_TypeDefinitionIndex = 51729;

	class UIAutoBattlePVPPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_6D0592AEE1AF8169*>** StaticGet___9__78_0()
		{
			return (::System::Action_1<::Class_3_6D0592AEE1AF8169*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x37870);
		}
		static ::System::Action** StaticGet___9__31_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x37878);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__78_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x37880);
		}
		static ::MoleMole::UIAutoBattlePVPPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x37888);
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

		::System::Void _TryJoinABPVP_b__78_0(::Class_3_6D0592AEE1AF8169* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6D0592AEE1AF8169*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinABPVP_b__78_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET))(this, _);
		}
	};
}
