#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F.h"
#include "unitysdk/Class_2_17E903BDA51D43F0_Struct_2_F217B044B82B2397_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/Struct_2_D9F43A238F81E067.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_448;
class Class_1_2858EC444CCF662F;
class Class_1_6A3AD2BFCE6BBF2E;
class Class_1_A93187421020321F;
class Class_1_FCCAFAFEDD17B2C1;
class Class_2_17E903BDA51D43F0_Class_3_90EEADDEAE6DE849_1;
class Class_2_E87F1D15F1D4AC72;
class Map3DFogItem;
class MonoSceneMap3DConfig;
namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class ConfigUIUrbanMap; }
namespace MoleMole { class MapGroupMemberStateConfig; }
namespace MoleMole { class SphereCameraConfig; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }
template <typename T> class Class_1_4BC87A1432B12C4C;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_17E903BDA51D43F0_METHOD_2_06958CE60C1441F7_OFFSET UNITYSDK_OFFSET(0x171869D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_1_OFFSET UNITYSDK_OFFSET(0x1717FAC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_OFFSET UNITYSDK_OFFSET(0x1086DBD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0DB463DE2487D7F5_OFFSET UNITYSDK_OFFSET(0x108728F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x17185930)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0FDB0E69F1536C8F_OFFSET UNITYSDK_OFFSET(0x1717FA40)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x17181100)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x108667C0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_26866BD401080475_OFFSET UNITYSDK_OFFSET(0x108726A0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_2C2639B227511C01_OFFSET UNITYSDK_OFFSET(0x1086AC70)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_2F201626DB9321F5_OFFSET UNITYSDK_OFFSET(0x10870510)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10873310)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10872810)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0x1086C1F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1086A700)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3D20D7AE71286204_OFFSET UNITYSDK_OFFSET(0x17186DF0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x17180C20)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10871B60)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_40179FDB3262EF41_OFFSET UNITYSDK_OFFSET(0x17185480)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x1718BB00)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_43A32A24744EFF38_OFFSET UNITYSDK_OFFSET(0x1086FAD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0x1086E040)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4D8104A69A540D47_OFFSET UNITYSDK_OFFSET(0x108708C0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x108733A0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17185B50)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_51EA3F78A0573857_OFFSET UNITYSDK_OFFSET(0x1086AE50)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x17184740)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x1086BA90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5CF2BCCDC6DD1575_OFFSET UNITYSDK_OFFSET(0x10867DA0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5E8F039BF8BF7D8F_OFFSET UNITYSDK_OFFSET(0x1086B540)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5FBF6E7648E7DF88_OFFSET UNITYSDK_OFFSET(0x17180BC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5FEDCA697B9361F1_OFFSET UNITYSDK_OFFSET(0x10874180)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x10865F30)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6639F817E8CD951C_OFFSET UNITYSDK_OFFSET(0x10870170)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_69F204868B44B9AA_OFFSET UNITYSDK_OFFSET(0x10871ED0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6BCD5A3244F82B46_OFFSET UNITYSDK_OFFSET(0x1085FC60)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6F6E80CB32DFC9AD_OFFSET UNITYSDK_OFFSET(0x108676D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_73A69D1A88D5819C_OFFSET UNITYSDK_OFFSET(0x1718BDD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1086EAF0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x1086B390)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7E529A1C6FF4894B_OFFSET UNITYSDK_OFFSET(0x10873710)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7E7D69606AD477D5_OFFSET UNITYSDK_OFFSET(0x1085E300)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x10873CD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_80EFDA03CC2E46E8_OFFSET UNITYSDK_OFFSET(0x171879A0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x10869210)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x17184810)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x17185A40)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8537F9D1E4093369_OFFSET UNITYSDK_OFFSET(0x108672F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_858B5CAFD04F4420_OFFSET UNITYSDK_OFFSET(0x10866280)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_89DD45DBE5CED3C0_OFFSET UNITYSDK_OFFSET(0x1085EDE0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1718BD80)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8E8555BF9D034CE6_OFFSET UNITYSDK_OFFSET(0x17183E60)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x1086DA00)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x17189890)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x108682F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x171860D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x108696D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x10873580)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9DD93B5650D84A57_OFFSET UNITYSDK_OFFSET(0x10861900)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A310C5B6FD45B738_OFFSET UNITYSDK_OFFSET(0x1086A7A0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A31E3BF5EEADEB52_OFFSET UNITYSDK_OFFSET(0x1717F830)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_1_OFFSET UNITYSDK_OFFSET(0x17189010)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_OFFSET UNITYSDK_OFFSET(0x1086AF90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A970B20EE075836F_OFFSET UNITYSDK_OFFSET(0x10872150)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A9C9C26E8E56ECB7_OFFSET UNITYSDK_OFFSET(0x10871BB0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AEE46E2B9342276F_OFFSET UNITYSDK_OFFSET(0x17189160)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AF45256CCB1C2DB1_OFFSET UNITYSDK_OFFSET(0x1086B470)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AF85E6FF2B91E341_OFFSET UNITYSDK_OFFSET(0x10872F90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B08717D358A9905D_OFFSET UNITYSDK_OFFSET(0x1085E7B0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B1E6BB5A897D2AFC_OFFSET UNITYSDK_OFFSET(0x171817D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B636E03EDDD07C9D_OFFSET UNITYSDK_OFFSET(0x1085ED90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B85DC5C2D600E03B_OFFSET UNITYSDK_OFFSET(0x17187F10)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_BBE95C8110A8AFBB_OFFSET UNITYSDK_OFFSET(0x108663D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_BC57AC7782B8F238_OFFSET UNITYSDK_OFFSET(0x171860E0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_1_OFFSET UNITYSDK_OFFSET(0x17184630)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x10865100)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C6AEBA4A6AB8E153_OFFSET UNITYSDK_OFFSET(0x1086DDC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10871AD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_CF68613ECBAF4F39_OFFSET UNITYSDK_OFFSET(0x1086EB90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D10500E903D99418_OFFSET UNITYSDK_OFFSET(0x10865200)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D1544CB496D3A79C_OFFSET UNITYSDK_OFFSET(0x10867AB0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D24E6FE37AA4C5A3_OFFSET UNITYSDK_OFFSET(0x10872400)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x1086F6F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D98C144B1A58F253_OFFSET UNITYSDK_OFFSET(0x1717FCB0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x1086C160)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DBAD97D008F5B376_OFFSET UNITYSDK_OFFSET(0x10860C70)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DE8F70CD9F0EFA17_OFFSET UNITYSDK_OFFSET(0x17185CA0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x17188E80)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_E427D05902552B74_OFFSET UNITYSDK_OFFSET(0x1086E050)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_E4AAF2D01919140A_OFFSET UNITYSDK_OFFSET(0x1717F710)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1717F2F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x108684B0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F1BE2B3245CBB744_OFFSET UNITYSDK_OFFSET(0x10868EF0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F30B868D748FA16B_OFFSET UNITYSDK_OFFSET(0x10866050)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F4D59994912E9CCF_OFFSET UNITYSDK_OFFSET(0x10873630)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F68BA5110A64A2BA_OFFSET UNITYSDK_OFFSET(0x1086B0E0)
#define CLASS_2_17E903BDA51D43F0_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1085FA70)
#define CLASS_2_17E903BDA51D43F0_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10860640)
#define CLASS_2_17E903BDA51D43F0_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x10860500)
#define CLASS_2_17E903BDA51D43F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x10860C30)
#define CLASS_2_17E903BDA51D43F0__CTOR_OFFSET UNITYSDK_OFFSET(0x10860790)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_TypeDefinitionIndex = 58697;

class Class_2_17E903BDA51D43F0 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Unity::Collections::NativeArray_1<::System::IntPtr>* StaticGet_Field_2_5()
	{
		return (::Unity::Collections::NativeArray_1<::System::IntPtr>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC640);
	}
	static ::Unity::Collections::NativeArray_1<::System::Single>* StaticGet_Field_2_11()
	{
		return (::Unity::Collections::NativeArray_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC650);
	}
	static ::System::Single* StaticGet_Field_2_21()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC660);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_Field_2_14()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC664);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC668);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC669);
	}
	static ::System::Boolean* StaticGet_Field_2_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC66A);
	}
	static ::System::Single* StaticGet_Field_2_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC66C);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_6()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC670);
	}
	static ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate* StaticGet_Field_2_4()
	{
		return (::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC680);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_10()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6A0);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6B0);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6B4);
	}
	static ::System::Int32* StaticGet_Field_2_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6B8);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet_Field_2_13()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6C0);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_12()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6D0);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_9()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xC6E0);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_8()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_2_17 = 0x8; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_448*>* Field_2_29; // 0x50
	::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* Field_2_26; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* Field_2_28; // 0x60
	::UnityEngine::RectTransform* Field_2_58; // 0x68
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelContext*>* Field_2_24; // 0x70
	::MoleMole::ConfigUIUrbanMap* Field_2_63; // 0x78
	::Class_1_4BC87A1432B12C4C<::Class_1_4BC87A1432B12C4C<::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F>*>* Field_2_27; // 0x80
	::MonoSceneMap3DConfig* Field_2_61; // 0x88
	::UnityEngine::Transform* Field_2_60; // 0x90
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_72; // 0x98
	::DG::Tweening::Tweener* Field_2_35; // 0xA0
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect* Field_2_50; // 0xA8
	::Class_2_17E903BDA51D43F0_Class_3_90EEADDEAE6DE849_1* Field_2_18; // 0xB0
	::UnityEngine::RectTransform* Field_2_55; // 0xB8
	::MoleMole::Cameras::CameraTrackBlending* Field_2_69; // 0xC0
	::System::Collections::Generic::List_1<::Class_2_17E903BDA51D43F0_Struct_2_F217B044B82B2397_1>* Field_2_0; // 0xC8
	::UnityEngine::Rendering::Volume* Field_2_38; // 0xD0
	::System::Collections::Generic::List_1<::MoleMole::SphereCameraConfig*>* Field_2_62; // 0xD8
	::UnityEngine::RectTransform* Field_2_57; // 0xE0
	::Class_1_6A3AD2BFCE6BBF2E* Field_2_31; // 0xE8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::DG::Tweening::Tween*>* Field_2_51; // 0xF0
	::Class_2_000597E145D7A42A<::UnityEngine::NAPRenderPipeline0::RTHandle*>* Field_2_25; // 0xF8
	::Il2CppArray<::MoleMole::MapGroupMemberStateConfig*>* Field_2_42; // 0x100
	::MoleMole::UIBaseController* Field_2_54; // 0x108
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_448*>* Field_2_71; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_448*>*>* Field_2_53; // 0x118
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_44; // 0x120
	::Class_1_FCCAFAFEDD17B2C1* Field_2_49; // 0x128
	::DG::Tweening::Tweener* Field_2_34; // 0x130
	::UnityEngine::RectTransform* Field_2_59; // 0x138
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_73; // 0x140
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_448*>* Field_2_52; // 0x148
	::Class_1_2858EC444CCF662F* Field_2_43; // 0x150
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x158
	::UnityEngine::RectTransform* Field_2_56; // 0x160
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_36; // 0x168
	::UnityEngine::Vector2 Field_2_46; // 0x170
	::System::Single Field_2_70; // 0x178
	::UnityEngine::Vector2 Field_2_45; // 0x17C
	::System::Single Field_2_64; // 0x184
	::System::Single Field_2_65; // 0x188
	::UnityEngine::Vector2 Field_2_47; // 0x18C
	::System::Boolean Field_2_48; // 0x194
	::System::Boolean Field_2_66; // 0x195
	::System::Boolean Field_2_37; // 0x196
	::System::Boolean Field_2_32; // 0x197
	::System::Boolean Field_2_40; // 0x198
	::System::Boolean Field_2_30; // 0x199
	::System::Boolean Field_2_33; // 0x19A
	::System::Boolean Field_2_39; // 0x19B
	::System::Boolean Field_2_41; // 0x19C
	::System::Nullable_1<::System::Single> Field_2_68; // 0x1A0
	::System::Single Field_2_67; // 0x1A8
	::System::Single Field_2_16; // 0x1AC
	::System::UInt64 Field_2_3; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B08717D358A9905D(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_B08717D358A9905D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B636E03EDDD07C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_B636E03EDDD07C9D_OFFSET))(this);
	}

	::System::Void OnClick(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_ONCLICK_OFFSET))(this, a1, a2);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_ONSCROLL_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_ONDRAG_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DBAD97D008F5B376(::Class_0_16E4307DCC419505_448* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DBAD97D008F5B376_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D10500E903D99418(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D10500E903D99418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_2_858B5CAFD04F4420(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_858B5CAFD04F4420_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBE95C8110A8AFBB(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_BBE95C8110A8AFBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_8537F9D1E4093369(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8537F9D1E4093369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F6E80CB32DFC9AD(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6F6E80CB32DFC9AD_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_7E7D69606AD477D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7E7D69606AD477D5_OFFSET))(a1);
	}

	::System::Int32 Method_2_D1544CB496D3A79C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D1544CB496D3A79C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5CF2BCCDC6DD1575(::System::Int32 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3, ::MoleMole::UIBaseController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::RectTransform* a6, ::UnityEngine::RectTransform* a7, ::UnityEngine::RectTransform* a8, ::UnityEngine::RectTransform* a9, ::System::Action* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5CF2BCCDC6DD1575_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_89DD45DBE5CED3C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_89DD45DBE5CED3C0_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_2C2639B227511C01(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_2C2639B227511C01_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo Method_2_51EA3F78A0573857()
	{
		return ((::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_51EA3F78A0573857_OFFSET))(this);
	}

	::System::Void Method_2_A583FE17DF4EE01C(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A310C5B6FD45B738(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A310C5B6FD45B738_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F68BA5110A64A2BA(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F68BA5110A64A2BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_793067EE61114591_OFFSET))(this, a1);
	}

	::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>* Method_2_AF45256CCB1C2DB1(::Class_0_16E4307DCC419505_448* a1)
	{
		return ((::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>*(*)(::PVOID, ::Class_0_16E4307DCC419505_448*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AF45256CCB1C2DB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E8F039BF8BF7D8F(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5E8F039BF8BF7D8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3416FD11DD9200F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3416FD11DD9200F8_OFFSET))(this);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9DD93B5650D84A57(::Class_0_16E4307DCC419505_448* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9DD93B5650D84A57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06E6B259B76AEE36(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C6AEBA4A6AB8E153(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C6AEBA4A6AB8E153_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_E427D05902552B74(::System::Nullable_1<::UnityEngine::Vector3> a1, ::MoleMole::SphereCameraConfig* a2, ::Class_1_A93187421020321F* a3)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::MoleMole::SphereCameraConfig*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_E427D05902552B74_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Boolean Method_2_CF68613ECBAF4F39(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_CF68613ECBAF4F39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::Map3DFogItem* Method_2_43A32A24744EFF38(::System::String* a1)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_43A32A24744EFF38_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6639F817E8CD951C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6639F817E8CD951C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F201626DB9321F5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_2F201626DB9321F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D8104A69A540D47(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4D8104A69A540D47_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A9C9C26E8E56ECB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A9C9C26E8E56ECB7_OFFSET))(this);
	}

	::System::Void Method_2_69F204868B44B9AA(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_69F204868B44B9AA_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A970B20EE075836F(::UnityEngine::Bounds a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A970B20EE075836F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D24E6FE37AA4C5A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D24E6FE37AA4C5A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_26866BD401080475(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_26866BD401080475_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_0DB463DE2487D7F5(::Class_1_A93187421020321F* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SphereCameraConfig* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Bounds a7, ::System::Single a8, ::System::Single a9, ::UnityEngine::Rect a10, ::UnityEngine::Vector2 a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A93187421020321F*, ::UnityEngine::Vector3, ::MoleMole::SphereCameraConfig*, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0DB463DE2487D7F5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_AF85E6FF2B91E341(::Class_0_16E4307DCC419505_448* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AF85E6FF2B91E341_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F30B868D748FA16B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F30B868D748FA16B_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F4D59994912E9CCF(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F4D59994912E9CCF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_F1BE2B3245CBB744(::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F1BE2B3245CBB744_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_7E529A1C6FF4894B(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7E529A1C6FF4894B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_448* Method_2_6BCD5A3244F82B46(::UnityEngine::Vector2 a1)
	{
		return ((::Class_0_16E4307DCC419505_448*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6BCD5A3244F82B46_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5FEDCA697B9361F1(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5FEDCA697B9361F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Single Method_2_E4AAF2D01919140A(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_E4AAF2D01919140A_OFFSET))(this, a1);
	}

	::Class_2_17E903BDA51D43F0_Struct_2_F217B044B82B2397_1 Method_2_A31E3BF5EEADEB52(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_2_17E903BDA51D43F0_Struct_2_F217B044B82B2397_1(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A31E3BF5EEADEB52_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0FDB0E69F1536C8F(::Class_1_A93187421020321F* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A93187421020321F*, ::System::Boolean, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0FDB0E69F1536C8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_06E6B259B76AEE36_1(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D98C144B1A58F253(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D98C144B1A58F253_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FBF6E7648E7DF88(::Map3DFogItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5FBF6E7648E7DF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_B1E6BB5A897D2AFC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_B1E6BB5A897D2AFC_OFFSET))(this, a1);
	}

	::System::Single Method_2_5304726C363652C1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5304726C363652C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_8E8555BF9D034CE6(::MoleMole::MapGroupMemberStateConfig*& a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::MapGroupMemberStateConfig*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8E8555BF9D034CE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Single Method_2_40179FDB3262EF41(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_40179FDB3262EF41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0EC9AEC5DC94C3DD(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_DE8F70CD9F0EFA17(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DE8F70CD9F0EFA17_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_448*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_448*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}

	::System::Int32 Method_2_BC57AC7782B8F238(::Class_0_16E4307DCC419505_448* a1, ::Class_0_16E4307DCC419505_448* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::Class_0_16E4307DCC419505_448*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_BC57AC7782B8F238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06958CE60C1441F7(::MoleMole::UIUrbanMap3DModelContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_06958CE60C1441F7_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_2_3D20D7AE71286204(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3D20D7AE71286204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80EFDA03CC2E46E8(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_80EFDA03CC2E46E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B85DC5C2D600E03B(::Class_0_16E4307DCC419505_448* a1, ::Struct_2_032E3093F309FC91 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::Struct_2_032E3093F309FC91))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_B85DC5C2D600E03B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_A583FE17DF4EE01C_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEE46E2B9342276F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AEE46E2B9342276F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_4155E433CDAD6311(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4155E433CDAD6311_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_73A69D1A88D5819C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_73A69D1A88D5819C_OFFSET))(this, a1);
	}
};
