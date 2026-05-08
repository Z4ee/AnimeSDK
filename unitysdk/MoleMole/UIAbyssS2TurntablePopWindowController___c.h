#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD58E95ADFF8F5_75;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A88200)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A88240)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET UNITYSDK_OFFSET(0x15A88250)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_1_OFFSET UNITYSDK_OFFSET(0x15A88260)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKPAYBTN_B__20_1_OFFSET UNITYSDK_OFFSET(0x15A88270)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex = 59648;

	class UIAbyssS2TurntablePopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2TurntablePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TurntablePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B0);
		}
		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B8);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7C0);
		}
		static ::System::Action_1<::Class_3_32CD58E95ADFF8F5_75*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Class_3_32CD58E95ADFF8F5_75*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCloseBtn_b__16_0(::Class_3_32CD58E95ADFF8F5_75* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_75*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET))(this, rsp);
		}

		::System::Void _OnClickCloseBtn_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_1_OFFSET))(this);
		}

		::System::Void _OnClickPayBtn_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKPAYBTN_B__20_1_OFFSET))(this);
		}
	};
}
