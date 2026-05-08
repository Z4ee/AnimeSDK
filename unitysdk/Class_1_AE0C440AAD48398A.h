#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
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
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xFD47900)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0xFD471D0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xFD47720)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET UNITYSDK_OFFSET(0xFD47960)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xFD473C0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET UNITYSDK_OFFSET(0xFD47430)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0xFD47BC0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET UNITYSDK_OFFSET(0xFD46B60)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET UNITYSDK_OFFSET(0xFD47A50)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xFD47820)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0xFD47180)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET UNITYSDK_OFFSET(0xFD46160)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFD46830)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET UNITYSDK_OFFSET(0xFD47550)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFD479C0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET UNITYSDK_OFFSET(0xFD46010)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET UNITYSDK_OFFSET(0xFD460A0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET UNITYSDK_OFFSET(0xFD46D50)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xFD47490)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET UNITYSDK_OFFSET(0xFD46A60)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET UNITYSDK_OFFSET(0xFD45D80)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xFD47B70)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xFD47520)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET UNITYSDK_OFFSET(0xFD46DF0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0xFD468D0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET UNITYSDK_OFFSET(0xFD46270)
#define CLASS_1_AE0C440AAD48398A__CTOR_OFFSET UNITYSDK_OFFSET(0xFD45B80)

inline static constexpr unsigned int Class_1_AE0C440AAD48398A_TypeDefinitionIndex = 69095;

class Class_1_AE0C440AAD48398A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ActivityWidgetContext*>* Field_1_13; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIWidgetController*>* Field_1_12; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_C70BB0B7FF29E172, ::Class_1_377A9291800FE689*>* Field_1_4; // 0x20
	::MoleMole::UIActivityNormalContextBase* Field_1_15; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_10; // 0x30
	::MoleMole::UIActivityNormalContextBase* Field_1_16; // 0x38
	::Class_2_B4378B46E0020E85* Field_1_6; // 0x40
	::MoleMole::MonoGamepadModule* Field_1_3; // 0x48
	::System::Collections::Generic::List_1<::Class_1_377A9291800FE689*>* Field_1_5; // 0x50
	::System::Action* Field_1_18; // 0x58
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_1_2; // 0x60
	::Class_2_FDFE69FE7B72463B* Field_1_7; // 0x68
	::Class_1_BCB34C7DF4338509* Field_1_1; // 0x70
	::System::String* Field_1_21; // 0x78
	::UnityEngine::RectTransform* Field_1_9; // 0x80
	::Class_1_435BCF281FA5267D* Field_1_14; // 0x88
	::MoleMole::UIActivityEnterBasePageController* Field_1_11; // 0x90
	::MoleMole::MonoGamepadModule* Field_1_8; // 0x98
	::Class_1_1235F1FF1CD7EC0D* Field_1_0; // 0xA0
	::Foundation::Coroutine::CoroutineHandle Field_1_19; // 0xA8
	::System::Boolean Field_1_20; // 0xAC
	::System::Int32 Field_1_17; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC9AC2A569AA7B37(::Class_1_D375C91CCE5D3999* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6ACED803F7335185(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIWidgetController* Method_1_F758025BA18406B7(::Class_1_377A9291800FE689* a1)
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D66C6E1C67360280(::MoleMole::UIActivityCompRewardBtnGroupWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRewardBtnGroupWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D66C6E1C67360280_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FCCA5E84DA9AC7C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3FCCA5E84DA9AC7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_0FFCA426B159D768(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0FFCA426B159D768_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B7E34AFF29E114F(::MoleMole::UIActivityNormalContextBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIActivityNormalContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_A28B2E334B3DC91D(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET))(this, a1, a2);
	}

	::Class_1_377A9291800FE689* Method_1_C75C9C74F9D34F86(::Enum_3_C70BB0B7FF29E172 a1, ::System::Int32 a2)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::Enum_3_C70BB0B7FF29E172, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_F1144E17E3954CAF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F1144E17E3954CAF_OFFSET))(this, a1);
	}

	::MoleMole::UIActivityCompWeekRewardBtnWidgetController* Method_1_1970D555A322B381(::System::Int32 a1)
	{
		return ((::MoleMole::UIActivityCompWeekRewardBtnWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Int32 Method_1_49C474C148E9799A(::Class_1_377A9291800FE689* a1, ::Class_1_377A9291800FE689* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_377A9291800FE689*, ::Class_1_377A9291800FE689*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET))(this, a1, a2);
	}

	::Class_1_377A9291800FE689* Method_1_C85DC39BF93C8913(::System::Int32 a1)
	{
		return ((::Class_1_377A9291800FE689*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET))(this, a1);
	}

	::Enum_3_C70BB0B7FF29E172 Method_1_BF78C820754A28B7(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::Enum_3_C70BB0B7FF29E172(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1235F1FF1CD7EC0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1235F1FF1CD7EC0D*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}
};
