#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_79F6D62CE30E3F8E_17;
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace MoleMole { class UIGeneralMobileLoginPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BA74719461BD8C5_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x1665C280)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1665B800)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_1E95CDA06968C298_OFFSET UNITYSDK_OFFSET(0x1665CA40)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_22ADA7CAD91610A7_OFFSET UNITYSDK_OFFSET(0x1665CC80)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1665D5D0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_4671B118AA0620B7_OFFSET UNITYSDK_OFFSET(0x1665C9B0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_1_OFFSET UNITYSDK_OFFSET(0x1665D520)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_2_OFFSET UNITYSDK_OFFSET(0x1665D670)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_OFFSET UNITYSDK_OFFSET(0x1665CDD0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_76CA994BCF8AC78A_OFFSET UNITYSDK_OFFSET(0x1665D320)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_7F6E38FAC0C5E8E3_OFFSET UNITYSDK_OFFSET(0x1665BDE0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_8E6975515D3044FF_OFFSET UNITYSDK_OFFSET(0x1665C090)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0x1665C4B0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_A0F5FCFC67EE96C1_OFFSET UNITYSDK_OFFSET(0x1665CE20)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x1665C140)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_BEF2D00B46C3636D_OFFSET UNITYSDK_OFFSET(0x1665D4B0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1665C8A0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_EA80642E2908C486_OFFSET UNITYSDK_OFFSET(0x1665D570)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_1_OFFSET UNITYSDK_OFFSET(0x1665D6C0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x1665CA30)
#define CLASS_2_3BA74719461BD8C5_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1665BC30)
#define CLASS_2_3BA74719461BD8C5_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x1665BFA0)
#define CLASS_2_3BA74719461BD8C5_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x1665BD80)
#define CLASS_2_3BA74719461BD8C5_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1665B250)
#define CLASS_2_3BA74719461BD8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1665C000)

inline static constexpr unsigned int Class_2_3BA74719461BD8C5_TypeDefinitionIndex = 79624;

class Class_2_3BA74719461BD8C5 : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	::System::String* Field_2_11; // 0x18
	::System::String* Field_2_10; // 0x20
	::System::String* Field_2_17; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_037D21AC29ED1130>* Field_2_5; // 0x30
	::System::String* Field_2_14; // 0x38
	::System::String* Field_2_9; // 0x40
	::System::String* Field_2_15; // 0x48
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_2_6; // 0x50
	::System::String* Field_2_18; // 0x58
	::System::String* Field_2_7; // 0x60
	::System::String* Field_2_13; // 0x68
	::System::String* Field_2_16; // 0x70
	::System::String* Field_2_12; // 0x78
	::System::String* Field_2_21; // 0x80
	::System::String* Field_2_8; // 0x88
	::Class_2_79F6D62CE30E3F8E_17* Field_2_1; // 0x90
	::System::String* Field_2_20; // 0x98
	::MoleMole::UIGeneralMobileLoginPopWindowController* Field_2_0; // 0xA0
	::System::String* Field_2_19; // 0xA8
	::System::Boolean Field_2_4; // 0xB0
	::System::Boolean Field_2_3; // 0xB1
	::System::Boolean Field_2_2; // 0xB2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_ONSHOWELEMENT_OFFSET))(this, a1);
	}

	::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_ONHIDEELEMENT_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E6975515D3044FF(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_8E6975515D3044FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_4671B118AA0620B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_4671B118AA0620B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E95CDA06968C298(::System::String* a1, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_1E95CDA06968C298_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_22ADA7CAD91610A7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_22ADA7CAD91610A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_596D9113D22B8335()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_OFFSET))(this);
	}

	::System::Void Method_2_A0F5FCFC67EE96C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_A0F5FCFC67EE96C1_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_7F6E38FAC0C5E8E3(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_7F6E38FAC0C5E8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_596D9113D22B8335_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_1_OFFSET))(this);
	}

	::System::Void Method_2_BEF2D00B46C3636D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_BEF2D00B46C3636D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA80642E2908C486()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_EA80642E2908C486_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A433A8074D7736F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_9A433A8074D7736F_OFFSET))(this);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_596D9113D22B8335_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_2_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CA994BCF8AC78A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_76CA994BCF8AC78A_OFFSET))(this);
	}
};
