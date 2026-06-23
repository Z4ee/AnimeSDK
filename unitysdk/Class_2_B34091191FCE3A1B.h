#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_123875B2534320A6.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_982AD205B3D54E46.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"
#include "unitysdk/Struct_2_A9A03775CD77F6D6.h"
#include "unitysdk/Struct_2_D33D0AE8392D3507.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6A3AD2BFCE6BBF2E;
class Class_2_0244180E10798511;
class Class_2_208CC9941471731A_624;
class Class_2_E87F1D15F1D4AC72;
class Class_3_270194760B058114;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapHUDSingleImageWidgetController_Context; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapTipsWidgetContext; }
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace MoleMole { class UIUrbanMapTrackLineWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
template <typename T1, typename T2> class Class_1_6BC0A76BA49068FE;
template <typename T> class Class_1_4BC87A1432B12C4C;
template <typename T> class Class_1_FA000C9EFE98E3A4;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_27110FADB294B5B7;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_B34091191FCE3A1B_METHOD_2_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0x165D85C0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_066E39B876E3FB2E_OFFSET UNITYSDK_OFFSET(0x165DB9C0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x165D3FB0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_0D8EF7C31302174E_OFFSET UNITYSDK_OFFSET(0x165D8E80)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_0ED1A81DDD0D4CD7_OFFSET UNITYSDK_OFFSET(0x165DB960)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x165DE050)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_16B488170D32AF97_OFFSET UNITYSDK_OFFSET(0x165DE360)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_179F92E8219D5460_OFFSET UNITYSDK_OFFSET(0x165D70D0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_211C6A1943E4B478_OFFSET UNITYSDK_OFFSET(0x165DEB20)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x165DA0E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0x165D0FD0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x165D1D00)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_1_OFFSET UNITYSDK_OFFSET(0x165D7310)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_2_OFFSET UNITYSDK_OFFSET(0x165D9160)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_3_OFFSET UNITYSDK_OFFSET(0x165DAB60)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x165D3C30)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_2E9EFD1763526B05_OFFSET UNITYSDK_OFFSET(0x165DABD0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x165D7B00)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x165DB830)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x165D7030)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_30F2D98841BA51DA_OFFSET UNITYSDK_OFFSET(0x165D67F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x165D3B90)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_359A6F5C494EC4E5_OFFSET UNITYSDK_OFFSET(0x165D2DA0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_3FA063706A9B5149_OFFSET UNITYSDK_OFFSET(0x165D7760)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x165D3A70)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_46E464B1FA51D940_OFFSET UNITYSDK_OFFSET(0x165D8B50)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_4A25F3C29ABFBE02_OFFSET UNITYSDK_OFFSET(0x165DC6B0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_4CC5BAAA778833CF_OFFSET UNITYSDK_OFFSET(0x165DB760)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_55C17B07CC59CC76_OFFSET UNITYSDK_OFFSET(0x165DE2F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_5757EF1785F1CEA2_OFFSET UNITYSDK_OFFSET(0x165D4530)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x165D8F90)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_598C6DD2D3DB23F2_OFFSET UNITYSDK_OFFSET(0x165D9780)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_5D2378E790C672DE_OFFSET UNITYSDK_OFFSET(0x165DD670)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_5FBC2977DD78869F_OFFSET UNITYSDK_OFFSET(0x165D7880)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_64654DA464A14E1D_OFFSET UNITYSDK_OFFSET(0x165D3600)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_67F0DFAB2013372E_OFFSET UNITYSDK_OFFSET(0x165D4800)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_744ECC7658DC18CB_OFFSET UNITYSDK_OFFSET(0x165D85E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_755965B27CDB8C90_OFFSET UNITYSDK_OFFSET(0x165DD7B0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_77EAEB3D581FD7E6_1_OFFSET UNITYSDK_OFFSET(0x165DB330)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_77EAEB3D581FD7E6_OFFSET UNITYSDK_OFFSET(0x165D65E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_794235F36E60E935_OFFSET UNITYSDK_OFFSET(0x165DEBE0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0x165D42F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_848968C7EDC2324E_OFFSET UNITYSDK_OFFSET(0x165DBF40)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_88C238E87D085339_OFFSET UNITYSDK_OFFSET(0x165DAE20)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x165D7420)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_929DC6D8504DF87F_OFFSET UNITYSDK_OFFSET(0x165D82D0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x165DB1B0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x165D7380)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_A6E019C1E6DFEB68_OFFSET UNITYSDK_OFFSET(0x165D7950)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_AE3F1C5F5E610F17_OFFSET UNITYSDK_OFFSET(0x165CF0A0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_B075614327954D85_OFFSET UNITYSDK_OFFSET(0x165D7B70)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x165D16F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_B29205EE7F7B640C_1_OFFSET UNITYSDK_OFFSET(0x165D9A40)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x165D56A0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_BA937D14413CE9EE_OFFSET UNITYSDK_OFFSET(0x165D4730)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x165D44F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_C3E26052CEADC154_OFFSET UNITYSDK_OFFSET(0x165D27E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_C52C27B306BCFF2C_OFFSET UNITYSDK_OFFSET(0x165D3D20)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x165D7D70)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x165DE0D0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x165DB3B0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165D91C0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_1_OFFSET UNITYSDK_OFFSET(0x165DB2A0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_2_OFFSET UNITYSDK_OFFSET(0x165DB8D0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x165D3C90)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x165D1850)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D4AEDB417940881D_OFFSET UNITYSDK_OFFSET(0x165DD950)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x165D6760)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_E800CA804B13CF7E_1_OFFSET UNITYSDK_OFFSET(0x165DD0F0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_E800CA804B13CF7E_OFFSET UNITYSDK_OFFSET(0x165DB510)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x165D1630)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_E9961291CA83FEE1_OFFSET UNITYSDK_OFFSET(0x165D9250)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x165D5310)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x165DCAA0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_F5C91A8E4DAB1C29_OFFSET UNITYSDK_OFFSET(0x165DD2E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_F6B1607B20F9A625_OFFSET UNITYSDK_OFFSET(0x165D6660)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FCE335EF021BB35D_OFFSET UNITYSDK_OFFSET(0x165DE2E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x165D77E0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET UNITYSDK_OFFSET(0x165D8DE0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET UNITYSDK_OFFSET(0x165D8F00)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET UNITYSDK_OFFSET(0x165DB0D0)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x165D6530)
#define CLASS_2_B34091191FCE3A1B_METHOD_2_FEB8C90A1F685D6F_OFFSET UNITYSDK_OFFSET(0x165DE420)
#define CLASS_2_B34091191FCE3A1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x165D2770)
#define CLASS_2_B34091191FCE3A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x165D2360)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_TypeDefinitionIndex = 86399;

class Class_2_B34091191FCE3A1B : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::String** StaticGet_Field_2_25()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B_TypeDefinitionIndex)->GetStaticField(0x34A20);
	}
	static ::System::String** StaticGet_Field_2_28()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B_TypeDefinitionIndex)->GetStaticField(0x34A28);
	}
	static ::System::String** StaticGet_Field_2_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B_TypeDefinitionIndex)->GetStaticField(0x34A30);
	}
	static ::System::String** StaticGet_Field_2_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B_TypeDefinitionIndex)->GetStaticField(0x34A38);
	}
	// static const ::System::Single Field_2_39; // 0x0
	::System::Collections::Generic::List_1<::Enum_3_86D58C2A2996E647>* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_7; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_37; // 0x60
	::Class_2_F16D73323D71766B<::Struct_2_A3F7BC7FD0AC1E07>* Field_2_13; // 0x68
	::Class_2_27110FADB294B5B7<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_21; // 0x70
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_32; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_5; // 0x80
	::Struct_2_49ABC235CB23B56F Field_2_42; // 0x88
	::System::Collections::Generic::List_1<::Struct_2_A9A03775CD77F6D6>* Field_2_36; // 0x98
	::Class_2_F16D73323D71766B<::Struct_2_982AD205B3D54E46>* Field_2_12; // 0xA0
	::Class_2_F16D73323D71766B<::UnityEngine::Rect>* Field_2_15; // 0xA8
	::Class_2_27110FADB294B5B7<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_18; // 0xB0
	::Class_2_27110FADB294B5B7<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_19; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetController*>* Field_2_4; // 0xC0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_35; // 0xC8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapTipsWidgetContext*>* Field_2_9; // 0xD0
	::Class_2_F16D73323D71766B<::UnityEngine::Vector2>* Field_2_14; // 0xD8
	::Class_2_F16D73323D71766B<::Struct_2_123875B2534320A6>* Field_2_11; // 0xE0
	::System::Comparison_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_31; // 0xE8
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_33; // 0xF0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_38; // 0xF8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_16; // 0x100
	::System::Threading::CancellationTokenSource* Field_2_6; // 0x108
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>* Field_2_8; // 0x110
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_2; // 0x118
	::Class_1_FA000C9EFE98E3A4<::UnityEngine::Texture2D*>* Field_2_23; // 0x120
	::Class_2_27110FADB294B5B7<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>* Field_2_40; // 0x128
	::Class_1_4BC87A1432B12C4C<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_20; // 0x130
	::Class_1_6BC0A76BA49068FE<::System::UInt64, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>* Field_2_24; // 0x138
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x140
	::Class_2_F16D73323D71766B<::Foundation::AssetPath>* Field_2_10; // 0x148
	::Class_1_6A3AD2BFCE6BBF2E* Field_2_22; // 0x150
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_34; // 0x158
	::UnityEngine::Vector2 Field_2_30; // 0x160
	::System::Single Field_2_41; // 0x168
	::System::Boolean Field_2_17; // 0x16C
	::System::Boolean Field_2_3; // 0x16D
	::UnityEngine::Vector2 Field_2_29; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B__CCTOR_OFFSET))();
	}

	::System::Void Method_2_AE3F1C5F5E610F17(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_AE3F1C5F5E610F17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::Struct_2_123875B2534320A6 Method_2_C3E26052CEADC154()
	{
		return ((::Struct_2_123875B2534320A6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_C3E26052CEADC154_OFFSET))(this);
	}

	static ::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_41EC8E0AD6EE8093_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_31B71B6D307F7F0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_31B71B6D307F7F0C_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_OFFSET))(this);
	}

	::System::Void Method_2_C52C27B306BCFF2C(::MoleMole::UIUrbanMapTipsWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapTipsWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_C52C27B306BCFF2C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_624* Method_2_5757EF1785F1CEA2(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_624*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_5757EF1785F1CEA2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_BA937D14413CE9EE(::Class_3_270194760B058114* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_270194760B058114*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_BA937D14413CE9EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_67F0DFAB2013372E(::Class_3_270194760B058114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_270194760B058114*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_67F0DFAB2013372E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB4352D10DA7234E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_EB4352D10DA7234E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_2_77EAEB3D581FD7E6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_77EAEB3D581FD7E6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>* Method_2_F6B1607B20F9A625()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_F6B1607B20F9A625_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_30F2D98841BA51DA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_30F2D98841BA51DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_179F92E8219D5460()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_179F92E8219D5460_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_8BA81D51FB5D5B30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_8BA81D51FB5D5B30_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_3FA063706A9B5149()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_3FA063706A9B5149_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Method_2_5FBC2977DD78869F()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_5FBC2977DD78869F_OFFSET))(this);
	}

	::System::Void Method_2_A6E019C1E6DFEB68(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_A6E019C1E6DFEB68_OFFSET))(this, a1);
	}

	::System::Void Method_2_29388402F1C16287_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_2_B075614327954D85()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_B075614327954D85_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Boolean Method_2_0552BEF80A6A3BAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_0552BEF80A6A3BAA_OFFSET))(this);
	}

	::Struct_2_A3F7BC7FD0AC1E07 Method_2_744ECC7658DC18CB()
	{
		return ((::Struct_2_A3F7BC7FD0AC1E07(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_744ECC7658DC18CB_OFFSET))(this);
	}

	static ::System::Int32 Method_2_46E464B1FA51D940(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::MoleMole::UIUrbanMapPointWidgetContext* a2)
	{
		return ((::System::Int32(*)(::MoleMole::UIUrbanMapPointWidgetContext*, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_46E464B1FA51D940_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_64654DA464A14E1D(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_64654DA464A14E1D_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_0D8EF7C31302174E()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_0D8EF7C31302174E_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_3()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET))(this);
	}

	::Class_2_0244180E10798511* Method_2_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_0244180E10798511*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_359A6F5C494EC4E5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_359A6F5C494EC4E5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>* Method_2_E9961291CA83FEE1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapHUDSingleImageWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_E9961291CA83FEE1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_598C6DD2D3DB23F2()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_598C6DD2D3DB23F2_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_29388402F1C16287_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2E9EFD1763526B05(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_2E9EFD1763526B05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_88C238E87D085339()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_88C238E87D085339_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_4()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_1_OFFSET))(this);
	}

	::System::Void Method_2_77EAEB3D581FD7E6_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_77EAEB3D581FD7E6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_E800CA804B13CF7E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_E800CA804B13CF7E_OFFSET))(this);
	}

	::System::Void Method_2_4CC5BAAA778833CF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_4CC5BAAA778833CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF_2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D2DA768232E640DF_2_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_0ED1A81DDD0D4CD7()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_0ED1A81DDD0D4CD7_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_066E39B876E3FB2E()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_066E39B876E3FB2E_OFFSET))(this);
	}

	::System::Void Method_2_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_B29205EE7F7B640C_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_4A25F3C29ABFBE02()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_4A25F3C29ABFBE02_OFFSET))(this);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_E800CA804B13CF7E_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_E800CA804B13CF7E_1_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::UnityEngine::Rect Method_2_F5C91A8E4DAB1C29()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_F5C91A8E4DAB1C29_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_5D2378E790C672DE()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_5D2378E790C672DE_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_218124418542E081_1_OFFSET))(this);
	}

	::System::Void Method_2_755965B27CDB8C90(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_755965B27CDB8C90_OFFSET))(this, a1);
	}

	::Struct_2_982AD205B3D54E46 Method_2_D4AEDB417940881D()
	{
		return ((::Struct_2_982AD205B3D54E46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_D4AEDB417940881D_OFFSET))(this);
	}

	::System::Boolean Method_2_848968C7EDC2324E(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_848968C7EDC2324E_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_624* Method_2_929DC6D8504DF87F(::Struct_2_D33D0AE8392D3507 a1)
	{
		return ((::Class_2_208CC9941471731A_624*(*)(::PVOID, ::Struct_2_D33D0AE8392D3507))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_929DC6D8504DF87F_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_FCE335EF021BB35D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FCE335EF021BB35D_OFFSET))(this);
	}

	::System::Void Method_2_55C17B07CC59CC76(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_55C17B07CC59CC76_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_16B488170D32AF97()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_16B488170D32AF97_OFFSET))(this);
	}

	::System::Boolean Method_2_FEB8C90A1F685D6F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_FEB8C90A1F685D6F_OFFSET))(this);
	}

	::UnityEngine::Rect Method_2_211C6A1943E4B478()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_211C6A1943E4B478_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_794235F36E60E935()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_794235F36E60E935_OFFSET))(this);
	}

	::System::Void Method_2_B29205EE7F7B640C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_METHOD_2_B29205EE7F7B640C_1_OFFSET))(this);
	}
};
