#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_270;
class Class_0_16E4307DCC419505_744;
class Class_1_546C6222FBEA4460;
class Class_1_917BAA24A53AF106;
class Class_1_A93187421020321F;
class Class_2_7185096C026A7F53;
class Class_2_A19A9F2D9E1D1B1E;
class Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B;
class Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3;
class Class_2_D0D7DE2B8886CDAF_3;
class Class_2_E87F1D15F1D4AC72;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class Mono2dMapData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralSortWidgetController; }
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
namespace MoleMole { class UIUrbanMapRightZenkovContext; }
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
template <typename T> class Class_0_16E4307DCC41950C_17;
template <typename T> class Class_1_0663552609274C64;
template <typename T> class Class_1_6CC1C6D9C300847E;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_9B614D02A0AA9182;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0234A20B96AA1DD8_OFFSET UNITYSDK_OFFSET(0x14A611F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x14A6F340)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0x14A80190)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_09714A5F05ED0D62_OFFSET UNITYSDK_OFFSET(0x14A6EBB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0B722CC6DB32B63B_OFFSET UNITYSDK_OFFSET(0x14A6E810)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_1_OFFSET UNITYSDK_OFFSET(0x14A72C90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_OFFSET UNITYSDK_OFFSET(0x14A6EDD0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_0DCB6C51FF28DD4F_OFFSET UNITYSDK_OFFSET(0x14A6BC10)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_125469CB20BFA75C_OFFSET UNITYSDK_OFFSET(0x14A81DA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_12631DB14D2D9FF0_OFFSET UNITYSDK_OFFSET(0x14A79F40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_1_OFFSET UNITYSDK_OFFSET(0x14A7ABB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_OFFSET UNITYSDK_OFFSET(0x14A74FF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1BD85B0990A2AB3E_OFFSET UNITYSDK_OFFSET(0x14A80C40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1D0E50C6A77E2463_OFFSET UNITYSDK_OFFSET(0x14A7B1B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x14A676F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_21BE981577390373_OFFSET UNITYSDK_OFFSET(0x14A7A730)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x14A7B490)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_253EDD7E26305E78_OFFSET UNITYSDK_OFFSET(0x14A75070)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_26C7E41CBC1357AD_OFFSET UNITYSDK_OFFSET(0x14A768B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_1_OFFSET UNITYSDK_OFFSET(0x14A73200)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_2_OFFSET UNITYSDK_OFFSET(0x14A75D30)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_OFFSET UNITYSDK_OFFSET(0x14A60350)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14A7AAB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_34C0DD5A89B19ED2_OFFSET UNITYSDK_OFFSET(0x14A70A50)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_3C538C351D0A471D_OFFSET UNITYSDK_OFFSET(0x14A60EF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x14A6BA90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_4647E7E49A6F3114_OFFSET UNITYSDK_OFFSET(0x14A6CD20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_47F595B663305164_OFFSET UNITYSDK_OFFSET(0x14A73F50)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_49C57EA4FD3E5C80_OFFSET UNITYSDK_OFFSET(0x14A82330)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x14A73680)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5031DF8B64C50B8D_OFFSET UNITYSDK_OFFSET(0x14A829B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_52B17F09986ED821_OFFSET UNITYSDK_OFFSET(0x14A5E790)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_560CCC57D9CF6AF9_OFFSET UNITYSDK_OFFSET(0x14A64E90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_58856F4BF55A379D_OFFSET UNITYSDK_OFFSET(0x14A7C230)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5A54B5970A9424F3_OFFSET UNITYSDK_OFFSET(0x14A5D7F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5B5B4414189C2C60_OFFSET UNITYSDK_OFFSET(0x14A7FED0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_5B9C1B0B08A8AB73_OFFSET UNITYSDK_OFFSET(0x14A7FD00)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_60DB0BBBECCC8F80_OFFSET UNITYSDK_OFFSET(0x14A7C980)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_6660BCFDD595E68E_OFFSET UNITYSDK_OFFSET(0x14A82870)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_671258AB0A792E0E_OFFSET UNITYSDK_OFFSET(0x14A7BB90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x14A5E2F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_697EC0E5EFC47B0F_OFFSET UNITYSDK_OFFSET(0x14A69070)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x14A7E0E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_6F0C9FB622E1EBAC_OFFSET UNITYSDK_OFFSET(0x14A713D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_719CD0EA408B6E28_OFFSET UNITYSDK_OFFSET(0x14A6A160)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7696135D95A34F47_OFFSET UNITYSDK_OFFSET(0x14A6EC80)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7CBCA2B23DEB1E8C_OFFSET UNITYSDK_OFFSET(0x14A5B210)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x14A80490)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_832C512DCFADA29E_OFFSET UNITYSDK_OFFSET(0x14A74130)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8486004611C8162F_OFFSET UNITYSDK_OFFSET(0x14A627D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_852A36CBE5D70842_OFFSET UNITYSDK_OFFSET(0x14A80140)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x14A6DAA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8978CF2C53628744_OFFSET UNITYSDK_OFFSET(0x14A614F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x14A68F20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x14A73EE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8B995E6B01D52061_OFFSET UNITYSDK_OFFSET(0x14A7B850)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8BFD279DDC6419D1_OFFSET UNITYSDK_OFFSET(0x14A7EF40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_8EC1139B7FDB0367_OFFSET UNITYSDK_OFFSET(0x14A7B5F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_938478775DA402B3_OFFSET UNITYSDK_OFFSET(0x14A73B90)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_94EE22257429FF24_OFFSET UNITYSDK_OFFSET(0x14A60560)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x14A71BE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x14A61CF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_9F5C004BF085E7CC_OFFSET UNITYSDK_OFFSET(0x14A5C720)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A1044CE25FE799FF_1_OFFSET UNITYSDK_OFFSET(0x14A81090)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A1044CE25FE799FF_OFFSET UNITYSDK_OFFSET(0x14A758A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x14A5D3D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_A9FC98269D75D48A_OFFSET UNITYSDK_OFFSET(0x14A6C380)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_AB3838F8F669727A_OFFSET UNITYSDK_OFFSET(0x14A76350)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_AD4450B4D63B7708_OFFSET UNITYSDK_OFFSET(0x14A7C510)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_AE98DECAB6CCE767_OFFSET UNITYSDK_OFFSET(0x14A80B10)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x14A75F40)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_B10FDF392EA4FF1C_OFFSET UNITYSDK_OFFSET(0x14A816E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_1_OFFSET UNITYSDK_OFFSET(0x14A68560)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_OFFSET UNITYSDK_OFFSET(0x14A61F20)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_BD8FE187CF1ADAA5_OFFSET UNITYSDK_OFFSET(0x14A6C250)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_BEF684C9363FC83B_OFFSET UNITYSDK_OFFSET(0x14A82290)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C0B24C9178B6453E_OFFSET UNITYSDK_OFFSET(0x14A77E60)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C25CED519329FA44_OFFSET UNITYSDK_OFFSET(0x14A77BB0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C3C679AAAF364914_OFFSET UNITYSDK_OFFSET(0x14A811F0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C76BF5BAC5D300F5_OFFSET UNITYSDK_OFFSET(0x14A6A960)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x14A5DCC0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_1_OFFSET UNITYSDK_OFFSET(0x14A80320)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_OFFSET UNITYSDK_OFFSET(0x14A6AFA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x14A75610)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A82490)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x14A5DB10)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CDEB43C46B84F51C_OFFSET UNITYSDK_OFFSET(0x14A66BA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CE5CD4ECC0462083_OFFSET UNITYSDK_OFFSET(0x14A6DEC0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x14A746E0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CFB3B8B24755FF63_1_OFFSET UNITYSDK_OFFSET(0x14A7A7B0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_CFB3B8B24755FF63_OFFSET UNITYSDK_OFFSET(0x14A794A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x14A73860)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x14A82680)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D2ABA85B8CAB900E_OFFSET UNITYSDK_OFFSET(0x14A79970)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x14A7F380)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D37BE2292A363AC1_OFFSET UNITYSDK_OFFSET(0x14A79190)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D431984BE78C0639_OFFSET UNITYSDK_OFFSET(0x14A7CBE0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_D55E22B028E08338_OFFSET UNITYSDK_OFFSET(0x14A73410)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_1_OFFSET UNITYSDK_OFFSET(0x14A7EDA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x14A7C090)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_DFA385E3784A8639_OFFSET UNITYSDK_OFFSET(0x14A7AC30)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E0F0D75A18CF781F_OFFSET UNITYSDK_OFFSET(0x14A82520)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E1164141CEFF319B_OFFSET UNITYSDK_OFFSET(0x14A77610)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E42BE6F59486195A_OFFSET UNITYSDK_OFFSET(0x14A6C510)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E45167D04223959D_OFFSET UNITYSDK_OFFSET(0x14A80010)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x14A7F210)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E6B0CE01C9A727B9_OFFSET UNITYSDK_OFFSET(0x14A694C0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E73957A113BD2CB0_OFFSET UNITYSDK_OFFSET(0x14A6BCA0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_E85DAE0209907FB5_OFFSET UNITYSDK_OFFSET(0x14A827D0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14A797A0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F292E61ADC6D36AF_OFFSET UNITYSDK_OFFSET(0x14A6AFF0)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F52E1DEE62621307_OFFSET UNITYSDK_OFFSET(0x14A75A00)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x14A6D420)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_F814A219696FD5E1_OFFSET UNITYSDK_OFFSET(0x14A80370)
#define CLASS_2_C9A08F2A8603B39E_METHOD_2_FC8EF60562F10D52_OFFSET UNITYSDK_OFFSET(0x14A6C6A0)
#define CLASS_2_C9A08F2A8603B39E_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14A5E710)
#define CLASS_2_C9A08F2A8603B39E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A60200)
#define CLASS_2_C9A08F2A8603B39E__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5EEC0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_TypeDefinitionIndex = 74866;

class Class_2_C9A08F2A8603B39E : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::String** StaticGet_Field_2_44()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C70);
	}
	static ::System::String** StaticGet_Field_2_31()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C78);
	}
	static ::System::String** StaticGet_Field_2_56()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C80);
	}
	static ::System::String** StaticGet_Field_2_52()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C88);
	}
	static ::System::String** StaticGet_Field_2_49()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C90);
	}
	static ::System::String** StaticGet_Field_2_51()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34C98);
	}
	static ::System::String** StaticGet_Field_2_48()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CA0);
	}
	static ::System::String** StaticGet_Field_2_58()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CA8);
	}
	static ::System::String** StaticGet_Field_2_45()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CB0);
	}
	static ::System::String** StaticGet_Field_2_54()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CB8);
	}
	static ::System::String** StaticGet_Field_2_55()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CC0);
	}
	static ::System::String** StaticGet_Field_2_50()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CC8);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CD0);
	}
	static ::System::String** StaticGet_Field_2_53()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CD8);
	}
	static ::System::String** StaticGet_Field_2_46()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CE0);
	}
	static ::System::String** StaticGet_Field_2_59()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CE8);
	}
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CF0);
	}
	static ::System::String** StaticGet_Field_2_57()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0x34CF8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_26()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xC410);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_27()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xC418);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_25()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9A08F2A8603B39E_TypeDefinitionIndex)->GetStaticField(0xC420);
	}
	::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_Data*>* Field_2_42; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8>*>* Field_2_72; // 0x58
	::Class_1_546C6222FBEA4460* Field_2_65; // 0x60
	::MoleMole::UIGeneralSortWidgetController* Field_2_76; // 0x68
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_43; // 0x70
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPageContext*>* Field_2_0; // 0x78
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_15; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_2_19; // 0x88
	::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* Field_2_5; // 0x90
	::Class_2_F16D73323D71766B<::System::Single>* Field_2_36; // 0x98
	::Class_2_9B614D02A0AA9182<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_69; // 0xA0
	::Class_1_0663552609274C64<::UnityEngine::GameObject*>* Field_2_33; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8>* Field_2_73; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_41; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* Field_2_77; // 0xC0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_13; // 0xC8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightBangkovContext*>* Field_2_67; // 0xD0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_8; // 0xD8
	::UnityEngine::RectTransform* Field_2_11; // 0xE0
	::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3* Field_2_4; // 0xE8
	::MoleMole::UIUrbanMapPlayerMoveChildWindowController* Field_2_60; // 0xF0
	::System::Threading::CancellationTokenSource* Field_2_66; // 0xF8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_37; // 0x100
	::Class_2_F16D73323D71766B<::Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A>* Field_2_68; // 0x108
	::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8>* Field_2_79; // 0x110
	::DG::Tweening::Sequence* Field_2_35; // 0x118
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelController*>* Field_2_6; // 0x120
	::Il2CppArray<::Class_0_16E4307DCC41950C_17<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_2_70; // 0x128
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>* Field_2_47; // 0x130
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_24; // 0x138
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8>*>* Field_2_78; // 0x140
	::Class_1_546C6222FBEA4460* Field_2_64; // 0x148
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_38; // 0x150
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_12; // 0x158
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_75; // 0x160
	::Class_1_917BAA24A53AF106* Field_2_71; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_40; // 0x170
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget01Context*>* Field_2_14; // 0x178
	::Class_2_000597E145D7A42A<::UnityEngine::Events::UnityAction*>* Field_2_7; // 0x180
	::UnityEngine::GameObject* Field_2_32; // 0x188
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightZenkovContext*>* Field_2_83; // 0x190
	::Foundation::Coroutine::CoroutineHandle Field_2_23; // 0x198
	::Foundation::Coroutine::CoroutineHandle Field_2_17; // 0x19C
	::UnityEngine::Vector2 Field_2_39; // 0x1A0
	::UnityEngine::Vector2 Field_2_29; // 0x1A8
	::System::Single Field_2_28; // 0x1B0
	::System::Single Field_2_63; // 0x1B4
	::System::Boolean Field_2_10; // 0x1B8
	::System::Boolean Field_2_20; // 0x1B9
	::System::Boolean Field_2_9; // 0x1BA
	::System::Boolean Field_2_22; // 0x1BB
	::System::Single Field_2_61; // 0x1BC
	::System::Boolean Field_2_18; // 0x1C0
	::System::Boolean Field_2_21; // 0x1C1
	::System::Boolean Field_2_16; // 0x1C2
	::System::Boolean Field_2_34; // 0x1C3
	::System::Boolean Field_2_74; // 0x1C4
	::System::Int32 Field_2_62; // 0x1C8
	::UnityEngine::Vector2 Field_2_30; // 0x1CC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7CBCA2B23DEB1E8C(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7CBCA2B23DEB1E8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_ONDRAG_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F7ABFC6CDB78093(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_OFFSET))(this, a1);
	}

	::System::Void Method_2_94EE22257429FF24(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_94EE22257429FF24_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_9809C99861C91775_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_B1E6BB5A897D2AFC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_560CCC57D9CF6AF9(::MoleMole::UIUrbanMapPageContext* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*, ::UnityEngine::Events::UnityAction*, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_560CCC57D9CF6AF9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_697EC0E5EFC47B0F(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_697EC0E5EFC47B0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_E6B0CE01C9A727B9(::MoleMole::Mono2dMapData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Mono2dMapData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E6B0CE01C9A727B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A54B5970A9424F3(::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5A54B5970A9424F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_719CD0EA408B6E28(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_719CD0EA408B6E28_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8C47A356EEBDCE0(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F292E61ADC6D36AF(::MoleMole::UITwoDMapElement_Data* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F292E61ADC6D36AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DCB6C51FF28DD4F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0DCB6C51FF28DD4F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E73957A113BD2CB0(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E73957A113BD2CB0_OFFSET))(this, a1);
	}

	::Class_2_D0D7DE2B8886CDAF_3* Method_2_BD8FE187CF1ADAA5(::System::Int32 a1)
	{
		return ((::Class_2_D0D7DE2B8886CDAF_3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_BD8FE187CF1ADAA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9FC98269D75D48A(::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A9FC98269D75D48A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C538C351D0A471D(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_3C538C351D0A471D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E42BE6F59486195A(::Class_2_A19A9F2D9E1D1B1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A19A9F2D9E1D1B1E*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E42BE6F59486195A_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC8EF60562F10D52(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_FC8EF60562F10D52_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_4647E7E49A6F3114()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_4647E7E49A6F3114_OFFSET))(this);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_8978CF2C53628744(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8978CF2C53628744_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE5CD4ECC0462083(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CE5CD4ECC0462083_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::Class_1_6CC1C6D9C300847E<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> Method_2_09714A5F05ED0D62()
	{
		return ((::System::ValueTuple_2<::Class_1_6CC1C6D9C300847E<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_09714A5F05ED0D62_OFFSET))(this);
	}

	::System::Void Method_2_7696135D95A34F47(::MoleMole::UITwoDMapElement_Data* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7696135D95A34F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D245CDF1FC4C415(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_OFFSET))(this, a1);
	}

	::System::Void Method_2_052FAABF5BB8BE83(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_052FAABF5BB8BE83_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D245CDF1FC4C415_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0D245CDF1FC4C415_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F7ABFC6CDB78093_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_1_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_D55E22B028E08338()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D55E22B028E08338_OFFSET))(this);
	}

	::System::Boolean Method_2_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_501509B4B58077AF_OFFSET))(this);
	}

	::System::Void Method_2_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_938478775DA402B3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_938478775DA402B3_OFFSET))(this);
	}

	::System::Boolean Method_2_47F595B663305164(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_47F595B663305164_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_2_832C512DCFADA29E()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_832C512DCFADA29E_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_13016C9261D97AA7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_A1044CE25FE799FF(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A1044CE25FE799FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_F52E1DEE62621307(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F52E1DEE62621307_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2F7ABFC6CDB78093_2(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2F7ABFC6CDB78093_2_OFFSET))(this, a1);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_CDEB43C46B84F51C()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CDEB43C46B84F51C_OFFSET))(this);
	}

	::System::Int32 Method_2_E1164141CEFF319B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E1164141CEFF319B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C25CED519329FA44(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C25CED519329FA44_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0B24C9178B6453E(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C0B24C9178B6453E_OFFSET))(this, a1);
	}

	::System::String* Method_2_D37BE2292A363AC1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D37BE2292A363AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB3B8B24755FF63(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CFB3B8B24755FF63_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_D2ABA85B8CAB900E(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D2ABA85B8CAB900E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B722CC6DB32B63B(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0B722CC6DB32B63B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_21BE981577390373()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_21BE981577390373_OFFSET))(this);
	}

	::System::Void Method_2_CFB3B8B24755FF63_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CFB3B8B24755FF63_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::MoleMole::UIUrbanMapLeftTastListRow03Context* Method_2_AB3838F8F669727A()
	{
		return ((::MoleMole::UIUrbanMapLeftTastListRow03Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_AB3838F8F669727A_OFFSET))(this);
	}

	::System::Void Method_2_13016C9261D97AA7_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_13016C9261D97AA7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Int32 Method_2_DFA385E3784A8639(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DFA385E3784A8639_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D0E50C6A77E2463(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1D0E50C6A77E2463_OFFSET))(this, a1);
	}

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_A19A9F2D9E1D1B1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A19A9F2D9E1D1B1E*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8EC1139B7FDB0367(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8EC1139B7FDB0367_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B995E6B01D52061(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8B995E6B01D52061_OFFSET))(this, a1);
	}

	::System::Void Method_2_26C7E41CBC1357AD(::System::Boolean a1, ::System::Boolean a2, ::System::Action_2<::System::Boolean, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_26C7E41CBC1357AD_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_2_671258AB0A792E0E(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_671258AB0A792E0E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_52B17F09986ED821(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_52B17F09986ED821_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_58856F4BF55A379D(::Class_0_16E4307DCC419505_270* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_270*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_58856F4BF55A379D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AD4450B4D63B7708(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_AD4450B4D63B7708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D431984BE78C0639(::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D431984BE78C0639_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_DD1EE3A48E307831_1_OFFSET))(this);
	}

	::System::Void Method_2_8BFD279DDC6419D1(::Class_2_A19A9F2D9E1D1B1E* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A19A9F2D9E1D1B1E*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8BFD279DDC6419D1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F5C004BF085E7CC(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_9F5C004BF085E7CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::System::Single Method_2_12631DB14D2D9FF0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_12631DB14D2D9FF0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_5B9C1B0B08A8AB73(::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5B9C1B0B08A8AB73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Boolean Method_2_C76BF5BAC5D300F5(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C76BF5BAC5D300F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B5B4414189C2C60(::MoleMole::UIUrbanMapLeftTastListRow01Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01Context*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5B5B4414189C2C60_OFFSET))(this, a1);
	}

	::Class_2_7185096C026A7F53* Method_2_E45167D04223959D(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Class_2_7185096C026A7F53*(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E45167D04223959D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_2_852A36CBE5D70842(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_852A36CBE5D70842_OFFSET))(this, a1);
	}

	::System::Void Method_2_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_2_C8C47A356EEBDCE0_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C8C47A356EEBDCE0_1_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_F814A219696FD5E1()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_F814A219696FD5E1_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_744* Method_2_AE98DECAB6CCE767(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_744*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_AE98DECAB6CCE767_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_1BD85B0990A2AB3E(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1BD85B0990A2AB3E_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_2_A1044CE25FE799FF_1(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_A1044CE25FE799FF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3C679AAAF364914(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_C3C679AAAF364914_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1E6BB5A897D2AFC_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_B1E6BB5A897D2AFC_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_253EDD7E26305E78(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_253EDD7E26305E78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B10FDF392EA4FF1C(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_B10FDF392EA4FF1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Method_2_8486004611C8162F(::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* a1)
	{
		return ((::Il2CppArray<::Struct_2_037D21AC29ED1130>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_8486004611C8162F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_125469CB20BFA75C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_125469CB20BFA75C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_34C0DD5A89B19ED2(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_34C0DD5A89B19ED2_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BEF684C9363FC83B(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_BEF684C9363FC83B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_60DB0BBBECCC8F80(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_60DB0BBBECCC8F80_OFFSET))(this, a1);
	}

	::System::Void Method_2_49C57EA4FD3E5C80(::Class_2_A19A9F2D9E1D1B1E* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A19A9F2D9E1D1B1E*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_49C57EA4FD3E5C80_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0234A20B96AA1DD8(::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_0234A20B96AA1DD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0F0D75A18CF781F(::MoleMole::UIUrbanMapPointGroupWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E0F0D75A18CF781F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_2_E85DAE0209907FB5(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_E85DAE0209907FB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_6660BCFDD595E68E(::MoleMole::UIUrbanMapLeftTastListRow03Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_6660BCFDD595E68E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5031DF8B64C50B8D(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_5031DF8B64C50B8D_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F0C9FB622E1EBAC(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_METHOD_2_6F0C9FB622E1EBAC_OFFSET))(this, a1);
	}
};
