#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Enum_3_C70BB0B7FF29E172.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1235F1FF1CD7EC0D;
class Class_1_377A9291800FE689;
class Class_1_435BCF281FA5267D;
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

#define CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x11EA3770)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0x11EA4230)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_10E4C6DF3EE7ADED_OFFSET UNITYSDK_OFFSET(0x11EA35C0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11EA4130)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET UNITYSDK_OFFSET(0x11EA3560)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x11EA34F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET UNITYSDK_OFFSET(0x11EA4DA0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x11EA2FE0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET UNITYSDK_OFFSET(0x11EA4690)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET UNITYSDK_OFFSET(0x11EA3650)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x11EA3380)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x11EA3160)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET UNITYSDK_OFFSET(0x11EA44F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11EA4080)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET UNITYSDK_OFFSET(0x11EA31B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11EA4600)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET UNITYSDK_OFFSET(0x11EA3920)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET UNITYSDK_OFFSET(0x11EA39B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET UNITYSDK_OFFSET(0x11EA4420)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11EA3460)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET UNITYSDK_OFFSET(0x11EA3820)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET UNITYSDK_OFFSET(0x11EA4E00)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11EA37D0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11EA44C0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET UNITYSDK_OFFSET(0x11EA4880)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x11EA4C10)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET UNITYSDK_OFFSET(0x11EA3A70)
#define CLASS_1_AE0C440AAD48398A__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA2DD0)

inline static constexpr unsigned int Class_1_AE0C440AAD48398A_TypeDefinitionIndex = 65417;

class Class_1_AE0C440AAD48398A : public ::System::Object
{
public:
	::MoleMole::MonoGamepadModule* Field_1_9; // 0x10
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ActivityWidgetContext*>* Field_1_14; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIWidgetController*>* Field_1_13; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_11; // 0x38
	::Class_1_435BCF281FA5267D* Field_1_15; // 0x40
	::UnityEngine::RectTransform* Field_1_10; // 0x48
	::System::Action* Field_1_19; // 0x50
	::MoleMole::UIActivityNormalContextBase* Field_1_17; // 0x58
	::System::Collections::Generic::List_1<::Class_1_377A9291800FE689*>* Field_1_6; // 0x60
	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* Field_1_2; // 0x68
	::MoleMole::MonoGamepadModule* Field_1_4; // 0x70
	::Class_1_1235F1FF1CD7EC0D* Field_1_0; // 0x78
	::MoleMole::UIActivityEnterBasePageController* Field_1_12; // 0x80
	::MoleMole::UIActivityNormalContextBase* Field_1_16; // 0x88
	::Class_1_BCB34C7DF4338509* Field_1_1; // 0x90
	::System::Collections::Generic::Dictionary_2<::Enum_3_C70BB0B7FF29E172, ::Class_1_377A9291800FE689*>* Field_1_5; // 0x98
	::Class_2_B4378B46E0020E85* Field_1_7; // 0xA0
	::System::String* Field_1_22; // 0xA8
	::System::Int32 Field_1_18; // 0xB0
	::Foundation::Coroutine::CoroutineHandle Field_1_20; // 0xB4
	::System::Boolean Field_1_21; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_A28B2E334B3DC91D(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::MoleMole::UIActivityCompWeekRewardBtnWidgetController* Method_1_1970D555A322B381(::System::Int32 a1)
	{
		return ((::MoleMole::UIActivityCompWeekRewardBtnWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* Method_1_10E4C6DF3EE7ADED()
	{
		return ((::MoleMole::UIGeneralConsoleExistGoBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_10E4C6DF3EE7ADED_OFFSET))(this);
	}

	::System::Int32 Method_1_49C474C148E9799A(::Class_1_377A9291800FE689* a1, ::Class_1_377A9291800FE689* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_377A9291800FE689*, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1235F1FF1CD7EC0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1235F1FF1CD7EC0D*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D66C6E1C67360280(::MoleMole::UIActivityCompRewardBtnGroupWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRewardBtnGroupWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET))(this, a1);
	}

	::Enum_3_C70BB0B7FF29E172 Method_1_BF78C820754A28B7(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::Enum_3_C70BB0B7FF29E172(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET))(this, a1);
	}

	::Class_1_377A9291800FE689* Method_1_C75C9C74F9D34F86(::Enum_3_C70BB0B7FF29E172 a1, ::System::Int32 a2)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::Enum_3_C70BB0B7FF29E172, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIWidgetController* Method_1_F758025BA18406B7(::Class_1_377A9291800FE689* a1)
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_0FFCA426B159D768(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0FFCA426B159D768_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_6ACED803F7335185(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_3FCCA5E84DA9AC7C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1144E17E3954CAF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::Class_1_377A9291800FE689* Method_1_C85DC39BF93C8913(::System::Int32 a1)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B7E34AFF29E114F(::MoleMole::UIActivityNormalContextBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIActivityNormalContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_DC9AC2A569AA7B37(::Class_1_D375C91CCE5D3999* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET))(this, a1, a2, a3);
	}
};
