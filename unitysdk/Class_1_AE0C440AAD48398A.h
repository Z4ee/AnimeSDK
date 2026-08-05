#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C70BB0B7FF29E172.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1235F1FF1CD7EC0D;
class Class_1_377A9291800FE689;
class Class_1_76D6343FCF0C151E;
class Class_1_BCB34C7DF4338509;
class Class_1_D375C91CCE5D3999;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityEnterBasePageController; }
namespace MoleMole { class UIActivityNormalContextBase; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralConsoleExistGoBtnWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x12538840)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_10E4C6DF3EE7ADED_OFFSET UNITYSDK_OFFSET(0x12539320)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12537850)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x125389F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET UNITYSDK_OFFSET(0x125393B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET UNITYSDK_OFFSET(0x125381B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET UNITYSDK_OFFSET(0x12538A90)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x12537950)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_55490FF7EDBABD78_OFFSET UNITYSDK_OFFSET(0x12537A40)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x125388A0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET UNITYSDK_OFFSET(0x12539080)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_707FBCDCB7E58989_OFFSET UNITYSDK_OFFSET(0x12538C00)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_7EE2D0B9A34F875C_OFFSET UNITYSDK_OFFSET(0x12538420)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x12538E80)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12538050)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_ADBBE59BC0AF039D_OFFSET UNITYSDK_OFFSET(0x12539410)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_B14DC1AFF2483A3F_OFFSET UNITYSDK_OFFSET(0x125380F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12538FF0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET UNITYSDK_OFFSET(0x12537700)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET UNITYSDK_OFFSET(0x12537790)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_CB0A20B899199383_OFFSET UNITYSDK_OFFSET(0x12537470)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x125373E0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET UNITYSDK_OFFSET(0x125388F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12538BB0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12538A60)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET UNITYSDK_OFFSET(0x125384B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x12539190)
#define CLASS_1_AE0C440AAD48398A__CTOR_OFFSET UNITYSDK_OFFSET(0x125371D0)

inline static constexpr unsigned int Class_1_AE0C440AAD48398A_TypeDefinitionIndex = 80824;

class Class_1_AE0C440AAD48398A : public ::System::Object
{
public:
	::MoleMole::MonoGamepadModule* Field_1_6; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_15; // 0x18
	::MoleMole::MonoGamepadModule* Field_1_9; // 0x20
	::System::String* Field_1_20; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ActivityWidgetContext*>* Field_1_12; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIWidgetController*>* Field_1_13; // 0x38
	::Class_2_B4378B46E0020E85* Field_1_11; // 0x40
	::System::Action* Field_1_23; // 0x48
	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* Field_1_0; // 0x50
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_1_7; // 0x58
	::Class_1_BCB34C7DF4338509* Field_1_1; // 0x60
	::Class_1_76D6343FCF0C151E* Field_1_19; // 0x68
	::Class_1_1235F1FF1CD7EC0D* Field_1_2; // 0x70
	::MoleMole::UIActivityNormalContextBase* Field_1_17; // 0x78
	::System::Collections::Generic::List_1<::Class_1_377A9291800FE689*>* Field_1_4; // 0x80
	::MoleMole::UIActivityNormalContextBase* Field_1_18; // 0x88
	::MoleMole::UIActivityEnterBasePageController* Field_1_14; // 0x90
	::System::Collections::Generic::Dictionary_2<::Enum_3_C70BB0B7FF29E172, ::Class_1_377A9291800FE689*>* Field_1_5; // 0x98
	::Class_2_FDFE69FE7B72463B* Field_1_10; // 0xA0
	::UnityEngine::RectTransform* Field_1_8; // 0xA8
	::System::Int32 Field_1_16; // 0xB0
	::System::Boolean Field_1_21; // 0xB4
	::Foundation::Coroutine::CoroutineHandle Field_1_22; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_CB0A20B899199383(::Class_1_D375C91CCE5D3999* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_CB0A20B899199383_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::MoleMole::UIWidgetController* Method_1_55490FF7EDBABD78(::Class_1_377A9291800FE689* a1)
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_55490FF7EDBABD78_OFFSET))(this, a1);
	}

	::MoleMole::UIActivityCompWeekRewardBtnWidgetController* Method_1_B14DC1AFF2483A3F(::System::Int32 a1)
	{
		return ((::MoleMole::UIActivityCompWeekRewardBtnWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_B14DC1AFF2483A3F_OFFSET))(this, a1);
	}

	::Class_1_377A9291800FE689* Method_1_C75C9C74F9D34F86(::Enum_3_C70BB0B7FF29E172 a1, ::System::Int32 a2)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::Enum_3_C70BB0B7FF29E172, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3FCCA5E84DA9AC7C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::Enum_3_C70BB0B7FF29E172 Method_1_BF78C820754A28B7(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::Enum_3_C70BB0B7FF29E172(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1144E17E3954CAF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D66C6E1C67360280(::MoleMole::UIActivityCompRewardBtnGroupWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRewardBtnGroupWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 Method_1_49C474C148E9799A(::Class_1_377A9291800FE689* a1, ::Class_1_377A9291800FE689* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_377A9291800FE689*, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1235F1FF1CD7EC0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1235F1FF1CD7EC0D*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_707FBCDCB7E58989(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_707FBCDCB7E58989_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_6ACED803F7335185(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* Method_1_10E4C6DF3EE7ADED()
	{
		return ((::MoleMole::UIGeneralConsoleExistGoBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_10E4C6DF3EE7ADED_OFFSET))(this);
	}

	::Class_1_377A9291800FE689* Method_1_7EE2D0B9A34F875C(::System::Int32 a1)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_7EE2D0B9A34F875C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B7E34AFF29E114F(::MoleMole::UIActivityNormalContextBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIActivityNormalContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADBBE59BC0AF039D(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_ADBBE59BC0AF039D_OFFSET))(this, a1, a2);
	}
};
