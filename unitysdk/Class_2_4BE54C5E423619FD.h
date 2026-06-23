#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_4BE54C5E423619FD_Enum_3_5C228B20DBF9BC9E.h"
#include "unitysdk/Class_2_4BE54C5E423619FD_Struct_2_B3931940C76432D7_3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NavigableLink.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"

class Class_1_3C828A0701B1FCCD;
class Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA;
class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadLinkModule; }
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNounDetailDialogPopWindowController_Context; }
namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace MoleMole { class UINounDetailWidgetController_Data; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_2_27110FADB294B5B7;

#define CLASS_2_4BE54C5E423619FD_METHOD_2_04792B7EBAE7A962_OFFSET UNITYSDK_OFFSET(0xB7DCE10)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xB7D9210)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB7DC3A0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xB7D9E00)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xB7D91C0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_13D88B2872F6ECE6_OFFSET UNITYSDK_OFFSET(0xB7DA890)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xB7DC5E0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB7DC010)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xB7DC4A0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xB7D9750)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB7D7D00)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_346851B820B19A13_OFFSET UNITYSDK_OFFSET(0xB7DC320)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_3A954658F7923B46_OFFSET UNITYSDK_OFFSET(0xB7D7ED0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_3BF76B2321331202_OFFSET UNITYSDK_OFFSET(0xB7DB890)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_3ED4E697B1502F41_OFFSET UNITYSDK_OFFSET(0xB7DADD0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_41D34F9B2D68B5E8_OFFSET UNITYSDK_OFFSET(0xB7DA2D0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB7DBEE0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB7DBE50)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_49F21B1CDFF6DDAF_OFFSET UNITYSDK_OFFSET(0xB7DC1F0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_4C46CFC9F4CA37C8_OFFSET UNITYSDK_OFFSET(0xB7DAAF0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_4EC9FA86A1490C1D_OFFSET UNITYSDK_OFFSET(0xB7D99C0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_53ED3D9AFECD4304_OFFSET UNITYSDK_OFFSET(0xB7DC080)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0xB7DC510)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_561A19BACCF25271_OFFSET UNITYSDK_OFFSET(0xB7DB3A0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_575C986BFC8AE3BE_OFFSET UNITYSDK_OFFSET(0xB7DB7D0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_577E8F7BA319A072_OFFSET UNITYSDK_OFFSET(0xB7DA500)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_5F08B426ADF31FF5_1_OFFSET UNITYSDK_OFFSET(0xB7DCA40)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xB7D8BB0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xB7D94B0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_6687DA509CE06F1C_OFFSET UNITYSDK_OFFSET(0xB7DCB00)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_754943406124140F_OFFSET UNITYSDK_OFFSET(0xB7D74E0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xB7D9F80)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xB7DCE20)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xB7DC120)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_93E413DE98E0203B_OFFSET UNITYSDK_OFFSET(0xB7DBF90)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_947C1FE4941F3BAA_OFFSET UNITYSDK_OFFSET(0xB7DB710)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB7D7BE0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_9A55A6E360A08C7C_OFFSET UNITYSDK_OFFSET(0xB7DC280)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_9C4A022CBC27C417_OFFSET UNITYSDK_OFFSET(0xB7DBF80)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_9DDFA5539E266874_OFFSET UNITYSDK_OFFSET(0xB7DAF90)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_9E101D23EBA2F516_OFFSET UNITYSDK_OFFSET(0xB7DBB20)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_A980F7DB009DEF96_OFFSET UNITYSDK_OFFSET(0xB7DBFA0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xB7DA040)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xB7D87F0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_B04BD9483ED2D17B_OFFSET UNITYSDK_OFFSET(0xB7DAA40)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0xB7DC090)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_B8C9B3E79684EC6E_OFFSET UNITYSDK_OFFSET(0xB7DA940)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_BA36E306C5651A9A_OFFSET UNITYSDK_OFFSET(0xB7D8CB0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0xB7DA3B0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_C2A621A4A51F0D47_OFFSET UNITYSDK_OFFSET(0xB7DC660)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_C94D9274B49DDE65_OFFSET UNITYSDK_OFFSET(0xB7DBA60)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB7DC410)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB7DC9B0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7DC290)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_CB2A217B0C29E40B_OFFSET UNITYSDK_OFFSET(0xB7D8C30)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xB7D84C0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_DF818A5346CD7187_OFFSET UNITYSDK_OFFSET(0xB7DA7A0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_E13BFAA27F0A9DF2_OFFSET UNITYSDK_OFFSET(0xB7DB2C0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB7D8120)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_E9340848FF04EDB8_OFFSET UNITYSDK_OFFSET(0xB7DA590)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB7DB0C0)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_F56D7BB8DD9BCF9F_OFFSET UNITYSDK_OFFSET(0xB7DC670)
#define CLASS_2_4BE54C5E423619FD_METHOD_2_F6C39EF824B77C2C_OFFSET UNITYSDK_OFFSET(0xB7DCD50)
#define CLASS_2_4BE54C5E423619FD__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D90C0)

inline static constexpr unsigned int Class_2_4BE54C5E423619FD_TypeDefinitionIndex = 84062;

class Class_2_4BE54C5E423619FD : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	::MoleMole::MonoGamepadLinkModule* Field_2_2; // 0x50
	::System::Threading::CancellationTokenSource* Field_2_9; // 0x58
	::Class_0_16E4307DCC419505_165<::UnityEngine::RectTransform*>* Field_2_16; // 0x60
	::Class_1_3C828A0701B1FCCD* Field_2_3; // 0x68
	::Class_0_16E4307DCC419505_165<::MoleMole::UIGeneralNounDetailDialogPopWindowController_Context*>* Field_2_15; // 0x70
	::UnityEngine::RectTransform* Field_2_13; // 0x78
	::Class_2_27110FADB294B5B7<::MoleMole::UINounDetailWidgetController_Data*>* Field_2_14; // 0x80
	::MoleMole::MonoGamepadScrollView* Field_2_1; // 0x88
	::MonoUITableScrollV2* Field_2_12; // 0x90
	::System::Collections::Generic::List_1<::Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA*>* Field_2_6; // 0x98
	::System::Collections::Generic::List_1<::MoleMole::UINounDetailPanelWidgetController_Data*>* Field_2_7; // 0xA0
	::MonoUITableScrollV2* Field_2_11; // 0xA8
	::Class_2_4BE54C5E423619FD_Struct_2_B3931940C76432D7_3 Field_2_4; // 0xB0
	::System::Boolean Field_2_8; // 0xB8
	::System::Boolean Field_2_17; // 0xB9
	::Class_2_4BE54C5E423619FD_Enum_3_5C228B20DBF9BC9E Field_2_5; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_754943406124140F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_754943406124140F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_3A954658F7923B46(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_3A954658F7923B46_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Boolean Method_2_CB2A217B0C29E40B(::UnityEngine::UI::Extension::LinkClickInfo a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::LinkClickInfo))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_CB2A217B0C29E40B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9340848FF04EDB8(::System::Int32 a1, ::UnityEngine::UI::Extension::TermData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_E9340848FF04EDB8_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::UINounDetailPanelWidgetController_Data* Method_2_13D88B2872F6ECE6(::Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA* a1, ::MoleMole::UINounDetailPanelWidgetController_HeightState a2)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController_Data*(*)(::Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA*, ::MoleMole::UINounDetailPanelWidgetController_HeightState))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_13D88B2872F6ECE6_OFFSET))(a1, a2);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	static ::System::Int32 Method_2_B8C9B3E79684EC6E(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_B8C9B3E79684EC6E_OFFSET))(a1, a2);
	}

	::System::Void Method_2_B04BD9483ED2D17B(::System::Int32 a1, ::UnityEngine::UI::Extension::TermData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_B04BD9483ED2D17B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3ED4E697B1502F41(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_3ED4E697B1502F41_OFFSET))(this, a1);
	}

	static ::Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA* Method_2_9DDFA5539E266874(::System::Int32 a1, ::UnityEngine::UI::Extension::TermData a2)
	{
		return ((::Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA*(*)(::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_9DDFA5539E266874_OFFSET))(a1, a2);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_DF818A5346CD7187(::System::Int32 a1, ::UnityEngine::UI::Extension::TermData a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_DF818A5346CD7187_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BA36E306C5651A9A(::System::String* a1, ::UnityEngine::UI::Extension::UILocalizationText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_BA36E306C5651A9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_575C986BFC8AE3BE(::Class_2_4BE54C5E423619FD_Enum_3_5C228B20DBF9BC9E a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4BE54C5E423619FD_Enum_3_5C228B20DBF9BC9E, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_575C986BFC8AE3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UINounDetailWidgetController_Data*>* Method_2_3BF76B2321331202()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UINounDetailWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_3BF76B2321331202_OFFSET))(this);
	}

	::System::Int32 Method_2_947C1FE4941F3BAA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_947C1FE4941F3BAA_OFFSET))(this, a1);
	}

	::System::Threading::CancellationToken Method_2_C94D9274B49DDE65()
	{
		return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_C94D9274B49DDE65_OFFSET))(this);
	}

	::System::Void Method_2_9E101D23EBA2F516(::UnityEngine::UI::Extension::NavigableLink a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::NavigableLink))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_9E101D23EBA2F516_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9C4A022CBC27C417(::Class_2_27110FADB294B5B7<::MoleMole::UINounDetailWidgetController_Data*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_27110FADB294B5B7<::MoleMole::UINounDetailWidgetController_Data*>*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_9C4A022CBC27C417_OFFSET))(this, a1);
	}

	::System::Void Method_2_93E413DE98E0203B(::Class_0_16E4307DCC419505_165<::UnityEngine::RectTransform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_93E413DE98E0203B_OFFSET))(this, a1);
	}

	static ::MoleMole::UINounDetailPanelWidgetController_HeightState Method_2_A980F7DB009DEF96(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController_HeightState(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_A980F7DB009DEF96_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_4EC9FA86A1490C1D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_4EC9FA86A1490C1D_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_165<::MoleMole::UIGeneralNounDetailDialogPopWindowController_Context*>* Method_2_53ED3D9AFECD4304()
	{
		return ((::Class_0_16E4307DCC419505_165<::MoleMole::UIGeneralNounDetailDialogPopWindowController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_53ED3D9AFECD4304_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_2_49F21B1CDFF6DDAF(::System::Int32 a1)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_49F21B1CDFF6DDAF_OFFSET))(this, a1);
	}

	::Class_2_27110FADB294B5B7<::MoleMole::UINounDetailWidgetController_Data*>* Method_2_9A55A6E360A08C7C()
	{
		return ((::Class_2_27110FADB294B5B7<::MoleMole::UINounDetailWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_9A55A6E360A08C7C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_346851B820B19A13(::MoleMole::UINounDetailPanelWidgetController_Data* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_Data*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_346851B820B19A13_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_577E8F7BA319A072(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_577E8F7BA319A072_OFFSET))(this, a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}

	::MoleMole::UINounDetailPanelWidgetController* Method_2_41D34F9B2D68B5E8()
	{
		return ((::MoleMole::UINounDetailPanelWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_41D34F9B2D68B5E8_OFFSET))(this);
	}

	static ::System::Int32 Method_2_E13BFAA27F0A9DF2(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_E13BFAA27F0A9DF2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_561A19BACCF25271(::UnityEngine::UI::Extension::UILocalizationText* a1, ::MonoUITableScrollV2* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_561A19BACCF25271_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_C2A621A4A51F0D47(::Class_0_16E4307DCC419505_165<::MoleMole::UIGeneralNounDetailDialogPopWindowController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::MoleMole::UIGeneralNounDetailDialogPopWindowController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_C2A621A4A51F0D47_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F56D7BB8DD9BCF9F(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_F56D7BB8DD9BCF9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_5F08B426ADF31FF5_1_OFFSET))(this);
	}

	static ::System::Void Method_2_6687DA509CE06F1C(::MoleMole::UINounDetailPanelWidgetController* a1, ::MoleMole::UINounDetailPanelWidgetController_Data* a2, ::MoleMole::UINounDetailPanelWidgetController_HeightState a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* a5)
	{
		return ((::System::Void(*)(::MoleMole::UINounDetailPanelWidgetController*, ::MoleMole::UINounDetailPanelWidgetController_Data*, ::MoleMole::UINounDetailPanelWidgetController_HeightState, ::System::Boolean, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_6687DA509CE06F1C_OFFSET))(a1, a2, a3, a4, a5);
	}

	::MoleMole::UINounDetailPanelWidgetController* Method_2_F6C39EF824B77C2C(::System::Int32 a1)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_F6C39EF824B77C2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C46CFC9F4CA37C8(::System::Int32 a1, ::UnityEngine::UI::Extension::TermData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_4C46CFC9F4CA37C8_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_165<::UnityEngine::RectTransform*>* Method_2_04792B7EBAE7A962()
	{
		return ((::Class_0_16E4307DCC419505_165<::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_04792B7EBAE7A962_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_METHOD_2_77577333B4681208_OFFSET))(this);
	}
};
