#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_79F6D62CE30E3F8E_29;
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace MoleMole { class UIGeneralMobileLoginPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BA74719461BD8C5_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x1170C550)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1170AF90)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_1E95CDA06968C298_OFFSET UNITYSDK_OFFSET(0x1170CC40)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_22ADA7CAD91610A7_OFFSET UNITYSDK_OFFSET(0x1170C7E0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1170B800)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_1_OFFSET UNITYSDK_OFFSET(0x1170C500)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_2_OFFSET UNITYSDK_OFFSET(0x1170C940)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_OFFSET UNITYSDK_OFFSET(0x1170C4B0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_76CA994BCF8AC78A_OFFSET UNITYSDK_OFFSET(0x1170C320)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_7F6E38FAC0C5E8E3_OFFSET UNITYSDK_OFFSET(0x1170B550)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_8E6975515D3044FF_OFFSET UNITYSDK_OFFSET(0x1170BD10)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_9A237B836649C92D_OFFSET UNITYSDK_OFFSET(0x1170BCA0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0x1170B8A0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_A0F5FCFC67EE96C1_OFFSET UNITYSDK_OFFSET(0x1170BDD0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_BEF2D00B46C3636D_OFFSET UNITYSDK_OFFSET(0x1170C770)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1170C9F0)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1170CB10)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_EA80642E2908C486_OFFSET UNITYSDK_OFFSET(0x1170C990)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_1_OFFSET UNITYSDK_OFFSET(0x1170C930)
#define CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x1170BDC0)
#define CLASS_2_3BA74719461BD8C5_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1170B3A0)
#define CLASS_2_3BA74719461BD8C5_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x1170B710)
#define CLASS_2_3BA74719461BD8C5_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x1170B4F0)
#define CLASS_2_3BA74719461BD8C5_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1170A9F0)
#define CLASS_2_3BA74719461BD8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1170B770)

inline static constexpr unsigned int Class_2_3BA74719461BD8C5_TypeDefinitionIndex = 43143;

class Class_2_3BA74719461BD8C5 : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	::System::String* Field_2_15; // 0x18
	::System::String* Field_2_9; // 0x20
	::System::String* Field_2_8; // 0x28
	::System::String* Field_2_11; // 0x30
	::System::String* Field_2_14; // 0x38
	::Class_2_79F6D62CE30E3F8E_29* Field_2_1; // 0x40
	::System::String* Field_2_16; // 0x48
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_2_6; // 0x50
	::MoleMole::UIGeneralMobileLoginPopWindowController* Field_2_0; // 0x58
	::System::String* Field_2_12; // 0x60
	::System::String* Field_2_20; // 0x68
	::System::String* Field_2_7; // 0x70
	::System::String* Field_2_21; // 0x78
	::System::String* Field_2_17; // 0x80
	::System::String* Field_2_18; // 0x88
	::System::Collections::Generic::List_1<::Struct_2_037D21AC29ED1130>* Field_2_5; // 0x90
	::System::String* Field_2_19; // 0x98
	::System::String* Field_2_10; // 0xA0
	::System::String* Field_2_13; // 0xA8
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

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A433A8074D7736F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_9A433A8074D7736F_OFFSET))(this);
	}

	::System::Void Method_2_9A237B836649C92D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_9A237B836649C92D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E6975515D3044FF(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_8E6975515D3044FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0F5FCFC67EE96C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_A0F5FCFC67EE96C1_OFFSET))(this);
	}

	::System::Void Method_2_596D9113D22B8335()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_OFFSET))(this);
	}

	::System::Void Method_2_596D9113D22B8335_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_1_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_F5CD8BFA444150BD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CA994BCF8AC78A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_76CA994BCF8AC78A_OFFSET))(this);
	}

	::System::Void Method_2_BEF2D00B46C3636D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_BEF2D00B46C3636D_OFFSET))(this, a1);
	}

	::System::Void Method_2_596D9113D22B8335_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_596D9113D22B8335_2_OFFSET))(this);
	}

	::System::Void Method_2_22ADA7CAD91610A7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_22ADA7CAD91610A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA80642E2908C486()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_EA80642E2908C486_OFFSET))(this);
	}

	::System::Void Method_2_7F6E38FAC0C5E8E3(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_7F6E38FAC0C5E8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_1E95CDA06968C298(::System::String* a1, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_1E95CDA06968C298_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA74719461BD8C5_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}
};
