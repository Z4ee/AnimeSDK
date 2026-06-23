#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD58E95ADFF8F5_18;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174223F0)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17422430)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET UNITYSDK_OFFSET(0x17422440)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_1_OFFSET UNITYSDK_OFFSET(0x17422450)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKPAYBTN_B__20_1_OFFSET UNITYSDK_OFFSET(0x17422460)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex = 82800;

	class UIAbyssS2TurntablePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C710);
		}
		static ::System::Action_1<::Class_3_32CD58E95ADFF8F5_18*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Class_3_32CD58E95ADFF8F5_18*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C718);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C720);
		}
		static ::MoleMole::UIAbyssS2TurntablePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TurntablePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCloseBtn_b__16_0(::Class_3_32CD58E95ADFF8F5_18* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET))(this, rsp);
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
