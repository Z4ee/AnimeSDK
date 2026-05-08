#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_4E1DB51D0780DCEB;
class Class_1_546C6222FBEA4460;
class Class_1_A93187421020321F;
class Class_2_9F4F3B1678689337;
class Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384;
class Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8;
class Class_2_E87F1D15F1D4AC72;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class Mono2dMapData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITwoDMapElement_Data; }
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMap3DModelController; }
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace MoleMole { class UIUrbanMapLeftTastListRow01Context; }
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPlayerMoveChildWindowController; }
namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightBangkovContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget01Context; }
namespace MoleMole { class UIUrbanMapRightTastListWidget01WidgetController; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace MoleMole { class UIUrbanMapRightWidgetController; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
template <typename T> class Class_0_16E4307DCC419505_138;
template <typename T> class Class_1_0663552609274C64;
template <typename T> class Class_1_A71D2AA0025EF256;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_A67757DE8DF470D1;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0234A20B96AA1DD8_OFFSET UNITYSDK_OFFSET(0x16C04BF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x16C16B10)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0B5B5B7B41B69CC2_OFFSET UNITYSDK_OFFSET(0x16C103A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_1_OFFSET UNITYSDK_OFFSET(0x16C11320)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_OFFSET UNITYSDK_OFFSET(0x16C03360)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0DCB6C51FF28DD4F_OFFSET UNITYSDK_OFFSET(0x16C15930)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0F4542D668380E17_OFFSET UNITYSDK_OFFSET(0x16C016C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_125469CB20BFA75C_OFFSET UNITYSDK_OFFSET(0x16C0FEB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_1_OFFSET UNITYSDK_OFFSET(0x16C0D880)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_OFFSET UNITYSDK_OFFSET(0x16BFF900)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_15DA87D7D1A47270_OFFSET UNITYSDK_OFFSET(0x16C0AD00)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x16C0C7E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1A7D2A85490EB360_OFFSET UNITYSDK_OFFSET(0x16C05C60)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1BD85B0990A2AB3E_OFFSET UNITYSDK_OFFSET(0x16C16420)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1D0E50C6A77E2463_OFFSET UNITYSDK_OFFSET(0x16C09910)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x16BF7240)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x16C01AF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2123AF0B0753BD3F_OFFSET UNITYSDK_OFFSET(0x16C03E70)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x16C01990)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_253EDD7E26305E78_OFFSET UNITYSDK_OFFSET(0x16C038D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2637078BB9657211_OFFSET UNITYSDK_OFFSET(0x16C0C1D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2C9E3ABC10C0C2DE_OFFSET UNITYSDK_OFFSET(0x16C17D90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_31BF63B36E7DB8E2_1_OFFSET UNITYSDK_OFFSET(0x16C02BD0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_31BF63B36E7DB8E2_OFFSET UNITYSDK_OFFSET(0x16BF9570)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16C16A00)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_3C538C351D0A471D_OFFSET UNITYSDK_OFFSET(0x16C048F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_3FF2D6E634D66944_OFFSET UNITYSDK_OFFSET(0x16BFD2F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_4490F54379A9F17E_OFFSET UNITYSDK_OFFSET(0x16BFEDE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_44D8069865A4CD22_1_OFFSET UNITYSDK_OFFSET(0x16C157C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_44D8069865A4CD22_OFFSET UNITYSDK_OFFSET(0x16C02A60)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_47F595B663305164_OFFSET UNITYSDK_OFFSET(0x16C09730)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_49C57EA4FD3E5C80_OFFSET UNITYSDK_OFFSET(0x16C150A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5031DF8B64C50B8D_OFFSET UNITYSDK_OFFSET(0x16C183C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16BF9C30)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_52B17F09986ED821_OFFSET UNITYSDK_OFFSET(0x16BF76F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_58C2EFBCAA3C9FFD_OFFSET UNITYSDK_OFFSET(0x16C0F680)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5B192DA69AC0ACDA_OFFSET UNITYSDK_OFFSET(0x16BF54B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5B9C1B0B08A8AB73_OFFSET UNITYSDK_OFFSET(0x16BFE1F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5E7D2F1AFAC0CFB5_OFFSET UNITYSDK_OFFSET(0x16BF3C40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_606979EFE769AAF9_OFFSET UNITYSDK_OFFSET(0x16C0B5C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_60DB0BBBECCC8F80_OFFSET UNITYSDK_OFFSET(0x16C0FAE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_671258AB0A792E0E_OFFSET UNITYSDK_OFFSET(0x16BFFB90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_697EC0E5EFC47B0F_OFFSET UNITYSDK_OFFSET(0x16C15D10)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_719CD0EA408B6E28_OFFSET UNITYSDK_OFFSET(0x16C118E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7561CD3621C1BF7E_OFFSET UNITYSDK_OFFSET(0x16C0C6D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7696135D95A34F47_OFFSET UNITYSDK_OFFSET(0x16C03200)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7B68B0A41127F724_OFFSET UNITYSDK_OFFSET(0x16C0CB50)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_832C512DCFADA29E_OFFSET UNITYSDK_OFFSET(0x16C15200)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_84869383ABA70C29_OFFSET UNITYSDK_OFFSET(0x16C09BF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_852A36CBE5D70842_OFFSET UNITYSDK_OFFSET(0x16C11890)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x16BF6C00)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16C12360)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x16BF9350)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8BF266E7CFD5BC19_OFFSET UNITYSDK_OFFSET(0x16BFF100)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8EC1139B7FDB0367_OFFSET UNITYSDK_OFFSET(0x16C17400)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x16BFBA60)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_924B9D97BBF9F0A8_OFFSET UNITYSDK_OFFSET(0x16C16160)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_938478775DA402B3_OFFSET UNITYSDK_OFFSET(0x16C159C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_94EE22257429FF24_OFFSET UNITYSDK_OFFSET(0x16BF66B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x16C09D20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x16C0BCF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x16BF62A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A9FC98269D75D48A_OFFSET UNITYSDK_OFFSET(0x16C17660)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_OFFSET UNITYSDK_OFFSET(0x16C08250)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_BB796128B44CEE44_OFFSET UNITYSDK_OFFSET(0x16C0DC20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_BEF684C9363FC83B_OFFSET UNITYSDK_OFFSET(0x16C09680)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C0136C4C11B9B58E_OFFSET UNITYSDK_OFFSET(0x16BFD840)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C25CED519329FA44_OFFSET UNITYSDK_OFFSET(0x16C0BF20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C3C679AAAF364914_OFFSET UNITYSDK_OFFSET(0x16C09180)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_1_OFFSET UNITYSDK_OFFSET(0x16C09CD0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_OFFSET UNITYSDK_OFFSET(0x16BFF0B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C0C750)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x16BF6A40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CDEB43C46B84F51C_OFFSET UNITYSDK_OFFSET(0x16C078C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_1_OFFSET UNITYSDK_OFFSET(0x16BFF980)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_2_OFFSET UNITYSDK_OFFSET(0x16BFE3C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_OFFSET UNITYSDK_OFFSET(0x16BF9870)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x16C02920)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D2ABA85B8CAB900E_OFFSET UNITYSDK_OFFSET(0x16C10D70)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x16BF89D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D37BE2292A363AC1_OFFSET UNITYSDK_OFFSET(0x16C0D900)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D55E22B028E08338_OFFSET UNITYSDK_OFFSET(0x16C120E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D8C4EEED906A8AE5_OFFSET UNITYSDK_OFFSET(0x16C00090)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D998CA994D0EDAF7_OFFSET UNITYSDK_OFFSET(0x16BFA440)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_1_OFFSET UNITYSDK_OFFSET(0x16BF9A80)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_2_OFFSET UNITYSDK_OFFSET(0x16BFD690)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x16BF93C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16C0EFE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DFA385E3784A8639_OFFSET UNITYSDK_OFFSET(0x16C177F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0x16C16870)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E0F0D75A18CF781F_OFFSET UNITYSDK_OFFSET(0x16C01840)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E42BE6F59486195A_OFFSET UNITYSDK_OFFSET(0x16BFEC60)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x16C0FD40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E64D384674EFC892_OFFSET UNITYSDK_OFFSET(0x16C08BE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E6B0CE01C9A727B9_OFFSET UNITYSDK_OFFSET(0x16BFC6A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E6E0E86A3E0935A0_OFFSET UNITYSDK_OFFSET(0x16C0ECA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E73957A113BD2CB0_OFFSET UNITYSDK_OFFSET(0x16C055C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E85DAE0209907FB5_OFFSET UNITYSDK_OFFSET(0x16C017A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E89B5E85E1E3F103_OFFSET UNITYSDK_OFFSET(0x16C12860)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_ECDF4B97F4AC3819_OFFSET UNITYSDK_OFFSET(0x16C12FF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16BFB890)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_EF5442CFEC07AAB7_OFFSET UNITYSDK_OFFSET(0x16C04EF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F52E1DEE62621307_OFFSET UNITYSDK_OFFSET(0x16C02ED0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x16BFE5D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F583E68637F2EF00_OFFSET UNITYSDK_OFFSET(0x16BFAA90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F814A219696FD5E1_OFFSET UNITYSDK_OFFSET(0x16C05B40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_FC8EF60562F10D52_OFFSET UNITYSDK_OFFSET(0x16BF9DB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_FEE0398D7196F4AC_OFFSET UNITYSDK_OFFSET(0x16C12790)
#define CLASS_2_C9A08F2A8603B39E_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16BF7670)
#define CLASS_2_C9A08F2A8603B39E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BF88A0)
#define CLASS_2_C9A08F2A8603B39E__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF7E20)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_TypeDefinitionIndex = 51635;

class Class_2_C9A08F2A8603B39E : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::String** StaticGet_Field_2_52()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F920);
	}
	static ::System::String** StaticGet_Field_2_50()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F928);
	}
	static ::System::String** StaticGet_Field_2_53()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F930);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F938);
	}
	static ::System::String** StaticGet_Field_2_48()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F940);
	}
	static ::System::String** StaticGet_Field_2_51()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F948);
	}
	static ::System::String** StaticGet_Field_2_45()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F950);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F958);
	}
	static ::System::String** StaticGet_Field_2_56()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F960);
	}
	static ::System::String** StaticGet_Field_2_49()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F968);
	}
	static ::System::String** StaticGet_Field_2_55()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F970);
	}
	static ::System::String** StaticGet_Field_2_44()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F978);
	}
	static ::System::String** StaticGet_Field_2_47()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F980);
	}
	static ::System::String** StaticGet_Field_2_54()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F988);
	}
	static ::System::String** StaticGet_Field_2_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F990);
	}
	static ::System::String** StaticGet_Field_2_46()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x2F998);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_25()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xB8F0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_24()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xB8F8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_23()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xB900);
	}
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_13; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_11; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_2_15; // 0x68
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightBangkovContext*>* Field_2_61; // 0x70
	::MoleMole::UIUrbanMapPlayerMoveChildWindowController* Field_2_60; // 0x78
	::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384* Field_2_6; // 0x80
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_10; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_42; // 0x90
	::Class_2_F16D73323D71766B<::Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654>* Field_2_68; // 0x98
	::Class_1_546C6222FBEA4460* Field_2_64; // 0xA0
	::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* Field_2_5; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_Data*>* Field_2_40; // 0xB0
	::Class_2_F16D73323D71766B<::System::Single>* Field_2_38; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40>*>* Field_2_72; // 0xC0
	::Class_1_546C6222FBEA4460* Field_2_63; // 0xC8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_37; // 0xD0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelController*>* Field_2_4; // 0xD8
	::Class_2_000597E145D7A42A<::UnityEngine::Events::UnityAction*>* Field_2_3; // 0xE0
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_26; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_41; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>* Field_2_43; // 0xF8
	::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40>* Field_2_71; // 0x100
	::Il2CppArray<::Class_0_16E4307DCC419505_138<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_2_66; // 0x108
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_14; // 0x110
	::System::Threading::CancellationTokenSource* Field_2_62; // 0x118
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget01Context*>* Field_2_12; // 0x120
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_36; // 0x128
	::Class_1_4E1DB51D0780DCEB* Field_2_65; // 0x130
	::Class_2_A67757DE8DF470D1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_67; // 0x138
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPageContext*>* Field_2_2; // 0x140
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_39; // 0x148
	::Class_1_0663552609274C64<::UnityEngine::GameObject*>* Field_2_33; // 0x150
	::DG::Tweening::Sequence* Field_2_31; // 0x158
	::UnityEngine::GameObject* Field_2_34; // 0x160
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_69; // 0x168
	::System::Single Field_2_59; // 0x170
	::System::Boolean Field_2_32; // 0x174
	::System::Boolean Field_2_18; // 0x175
	::System::Int32 Field_2_58; // 0x178
	::System::Single Field_2_57; // 0x17C
	::System::Boolean Field_2_16; // 0x180
	::System::Boolean Field_2_8; // 0x181
	::System::Boolean Field_2_20; // 0x182
	::System::Boolean Field_2_9; // 0x183
	::Foundation::Coroutine::CoroutineHandle Field_2_17; // 0x184
	::UnityEngine::Vector2 Field_2_35; // 0x188
	::UnityEngine::Vector2 Field_2_28; // 0x190
	::UnityEngine::Vector2 Field_2_29; // 0x198
	::Foundation::Coroutine::CoroutineHandle Field_2_19; // 0x1A0
	::System::Single Field_2_30; // 0x1A4
	::System::Boolean Field_2_22; // 0x1A8
	::System::Boolean Field_2_70; // 0x1A9
	::System::Boolean Field_2_21; // 0x1AA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_5E7D2F1AFAC0CFB5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5E7D2F1AFAC0CFB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_ONDRAG_OFFSET))(this, a1);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_31BF63B36E7DB8E2(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_31BF63B36E7DB8E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0DCAC7E0A7B655E(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_1_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_FC8EF60562F10D52(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_FC8EF60562F10D52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B192DA69AC0ACDA(::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5B192DA69AC0ACDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Boolean Method_2_DD1EE3A48E307831_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_2_OFFSET))(this);
	}

	::System::Void Method_2_C0136C4C11B9B58E(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C0136C4C11B9B58E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_5B9C1B0B08A8AB73(::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5B9C1B0B08A8AB73_OFFSET))(this, a1);
	}

	::System::Void Method_2_52B17F09986ED821(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_52B17F09986ED821_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}

	::System::Void Method_2_E42BE6F59486195A(::Class_2_9F4F3B1678689337* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E42BE6F59486195A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4490F54379A9F17E(::Class_0_16E4307DCC419505_401* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_4490F54379A9F17E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8C47A356EEBDCE0(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_OFFSET))(this, a1);
	}

	::System::Single Method_2_8BF266E7CFD5BC19(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8BF266E7CFD5BC19_OFFSET))(this, a1);
	}

	::System::Void Method_2_94EE22257429FF24(::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_94EE22257429FF24_OFFSET))(this, a1);
	}

	::System::Void Method_2_13016C9261D97AA7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0DCAC7E0A7B655E_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_671258AB0A792E0E(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_671258AB0A792E0E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_D8C4EEED906A8AE5(::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D8C4EEED906A8AE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F4542D668380E17(::MoleMole::UIUrbanMapLeftTastListRow03Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0F4542D668380E17_OFFSET))(this, a1);
	}

	::System::Void Method_2_E85DAE0209907FB5(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E85DAE0209907FB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0F0D75A18CF781F(::MoleMole::UIUrbanMapPointGroupWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E0F0D75A18CF781F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_9F4F3B1678689337* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_44D8069865A4CD22(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_44D8069865A4CD22_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_31BF63B36E7DB8E2_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_31BF63B36E7DB8E2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F52E1DEE62621307(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F52E1DEE62621307_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7696135D95A34F47(::MoleMole::UITwoDMapElement_Data* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7696135D95A34F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D245CDF1FC4C415(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6B0CE01C9A727B9(::MoleMole::Mono2dMapData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Mono2dMapData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E6B0CE01C9A727B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_253EDD7E26305E78(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_253EDD7E26305E78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2123AF0B0753BD3F(::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2123AF0B0753BD3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF5442CFEC07AAB7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_EF5442CFEC07AAB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E73957A113BD2CB0(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E73957A113BD2CB0_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_F814A219696FD5E1()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F814A219696FD5E1_OFFSET))(this);
	}

	::System::Void Method_2_1A7D2A85490EB360(::MoleMole::UIUrbanMapPageContext* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*, ::UnityEngine::Events::UnityAction*, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1A7D2A85490EB360_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_E64D384674EFC892(::UnityEngine::Vector3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E64D384674EFC892_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3C679AAAF364914(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C3C679AAAF364914_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_BEF684C9363FC83B(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_BEF684C9363FC83B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D0E50C6A77E2463(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1D0E50C6A77E2463_OFFSET))(this, a1);
	}

	::System::Void Method_2_84869383ABA70C29(::MoleMole::UIUrbanMapLeftTastListRow01Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01Context*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_84869383ABA70C29_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8C47A356EEBDCE0_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_2_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_9809C99861C91775_OFFSET))(this);
	}

	::System::Void Method_2_C25CED519329FA44(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C25CED519329FA44_OFFSET))(this, a1);
	}

	::MoleMole::UIUrbanMapLeftTastListRow03Context* Method_2_2637078BB9657211()
	{
		return ((::MoleMole::UIUrbanMapLeftTastListRow03Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2637078BB9657211_OFFSET))(this);
	}

	::System::Single Method_2_7561CD3621C1BF7E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7561CD3621C1BF7E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_2_13016C9261D97AA7_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_D37BE2292A363AC1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D37BE2292A363AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB796128B44CEE44(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_BB796128B44CEE44_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1E6BB5A897D2AFC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6E0E86A3E0935A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E6E0E86A3E0935A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Int32 Method_2_58C2EFBCAA3C9FFD(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_58C2EFBCAA3C9FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_3C538C351D0A471D(::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_3C538C351D0A471D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_125469CB20BFA75C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_125469CB20BFA75C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0B5B5B7B41B69CC2(::MoleMole::UITwoDMapElement_Data* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0B5B5B7B41B69CC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2ABA85B8CAB900E(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D2ABA85B8CAB900E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D245CDF1FC4C415_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_1_OFFSET))(this, a1);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_CDEB43C46B84F51C()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CDEB43C46B84F51C_OFFSET))(this);
	}

	::System::Void Method_2_0234A20B96AA1DD8(::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0234A20B96AA1DD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_852A36CBE5D70842(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_852A36CBE5D70842_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0DCAC7E0A7B655E_2(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D0DCAC7E0A7B655E_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_719CD0EA408B6E28(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_719CD0EA408B6E28_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_D55E22B028E08338()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D55E22B028E08338_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_3FF2D6E634D66944(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_3FF2D6E634D66944_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F583E68637F2EF00(::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F583E68637F2EF00_OFFSET))(this, a1);
	}

	::System::Void Method_2_E89B5E85E1E3F103(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E89B5E85E1E3F103_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_47F595B663305164(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_47F595B663305164_OFFSET))(this, a1);
	}

	::System::Void Method_2_49C57EA4FD3E5C80(::Class_2_9F4F3B1678689337* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_49C57EA4FD3E5C80_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::AssetPath Method_2_832C512DCFADA29E()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_832C512DCFADA29E_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_44D8069865A4CD22_1(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_44D8069865A4CD22_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DCB6C51FF28DD4F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0DCB6C51FF28DD4F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_938478775DA402B3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_938478775DA402B3_OFFSET))(this);
	}

	::System::Void Method_2_697EC0E5EFC47B0F(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_697EC0E5EFC47B0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_924B9D97BBF9F0A8(::Class_2_9F4F3B1678689337* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_924B9D97BBF9F0A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1BD85B0990A2AB3E(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1BD85B0990A2AB3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E041300CFBBD9160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E041300CFBBD9160_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Boolean Method_2_15DA87D7D1A47270(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_15DA87D7D1A47270_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_60DB0BBBECCC8F80(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_60DB0BBBECCC8F80_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B68B0A41127F724(::System::Boolean a1, ::System::Boolean a2, ::System::Action_2<::System::Boolean, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7B68B0A41127F724_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Boolean Method_2_8EC1139B7FDB0367(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8EC1139B7FDB0367_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9FC98269D75D48A(::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A9FC98269D75D48A_OFFSET))(this, a1);
	}

	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Method_2_ECDF4B97F4AC3819(::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* a1)
	{
		return ((::Il2CppArray<::Struct_2_037D21AC29ED1130>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_ECDF4B97F4AC3819_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::Class_1_A71D2AA0025EF256<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> Method_2_FEE0398D7196F4AC()
	{
		return ((::System::ValueTuple_2<::Class_1_A71D2AA0025EF256<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_FEE0398D7196F4AC_OFFSET))(this);
	}

	::System::Single Method_2_606979EFE769AAF9(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_606979EFE769AAF9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D998CA994D0EDAF7(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D998CA994D0EDAF7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_DFA385E3784A8639(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DFA385E3784A8639_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_2C9E3ABC10C0C2DE()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2C9E3ABC10C0C2DE_OFFSET))(this);
	}

	::System::Void Method_2_5031DF8B64C50B8D(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5031DF8B64C50B8D_OFFSET))(this, a1);
	}
};
