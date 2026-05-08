#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F.h"
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

class Class_0_16E4307DCC419505_11;
class Class_0_16E4307DCC419505_371;
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
template <typename T> class Class_1_3DF236F531F5694C;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_1_OFFSET UNITYSDK_OFFSET(0x12063F20)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_OFFSET UNITYSDK_OFFSET(0x12058AD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0DB463DE2487D7F5_OFFSET UNITYSDK_OFFSET(0x1205C180)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x12060EC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_0FDB0E69F1536C8F_OFFSET UNITYSDK_OFFSET(0x1204E770)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x1204CCA0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_1FD0CB27CDBE771F_OFFSET UNITYSDK_OFFSET(0x1205A760)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_26866BD401080475_OFFSET UNITYSDK_OFFSET(0x1205E680)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_2C2639B227511C01_OFFSET UNITYSDK_OFFSET(0x1205F080)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1205A6D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0x12054980)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1204E7F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1205F030)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_40179FDB3262EF41_OFFSET UNITYSDK_OFFSET(0x1205D860)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x12049850)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_43A32A24744EFF38_OFFSET UNITYSDK_OFFSET(0x12062070)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0x12063900)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4D8104A69A540D47_OFFSET UNITYSDK_OFFSET(0x12052300)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x120635F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5079926AF5084948_OFFSET UNITYSDK_OFFSET(0x1205F740)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1205F5F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_51EA3F78A0573857_OFFSET UNITYSDK_OFFSET(0x12050C50)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x12050FF0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5E8F039BF8BF7D8F_OFFSET UNITYSDK_OFFSET(0x12064110)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5FBF6E7648E7DF88_OFFSET UNITYSDK_OFFSET(0x1204DCE0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_5FEDCA697B9361F1_OFFSET UNITYSDK_OFFSET(0x12062C90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x1204D700)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_65713DE309DC75D0_OFFSET UNITYSDK_OFFSET(0x12043710)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6639F817E8CD951C_OFFSET UNITYSDK_OFFSET(0x12063AF0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_69F204868B44B9AA_OFFSET UNITYSDK_OFFSET(0x1205E7F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6BCD5A3244F82B46_OFFSET UNITYSDK_OFFSET(0x12044CE0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_6F6E80CB32DFC9AD_OFFSET UNITYSDK_OFFSET(0x1205A2F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_73A69D1A88D5819C_OFFSET UNITYSDK_OFFSET(0x1205DD10)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7522C54D2C4BEF5D_OFFSET UNITYSDK_OFFSET(0x1205FE00)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x12050120)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x1205F260)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7E529A1C6FF4894B_OFFSET UNITYSDK_OFFSET(0x1205EA70)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_7E7D69606AD477D5_OFFSET UNITYSDK_OFFSET(0x12043260)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_80EFDA03CC2E46E8_OFFSET UNITYSDK_OFFSET(0x1205B310)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x1204D820)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x12060250)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x12064660)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8537F9D1E4093369_OFFSET UNITYSDK_OFFSET(0x12054580)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_858B5CAFD04F4420_OFFSET UNITYSDK_OFFSET(0x12050D90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_89DD45DBE5CED3C0_OFFSET UNITYSDK_OFFSET(0x12043E50)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1205BDB0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x12063910)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x12056190)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x12049AD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x120510C0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x120626F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_97AC7E8AAD04E3B8_OFFSET UNITYSDK_OFFSET(0x12053510)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x12062700)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x12064E80)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_9DD93B5650D84A57_OFFSET UNITYSDK_OFFSET(0x12045C40)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A310C5B6FD45B738_OFFSET UNITYSDK_OFFSET(0x1204E890)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_1_OFFSET UNITYSDK_OFFSET(0x12064D30)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_OFFSET UNITYSDK_OFFSET(0x120584B0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A970B20EE075836F_OFFSET UNITYSDK_OFFSET(0x1205F340)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_A9C9C26E8E56ECB7_OFFSET UNITYSDK_OFFSET(0x12051FE0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AA49E21F6AC70AEF_OFFSET UNITYSDK_OFFSET(0x1205B890)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AEE46E2B9342276F_OFFSET UNITYSDK_OFFSET(0x1204F9F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AF3BCF8D6EC1CA1E_OFFSET UNITYSDK_OFFSET(0x12058600)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_AF85E6FF2B91E341_OFFSET UNITYSDK_OFFSET(0x1204D380)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B636E03EDDD07C9D_OFFSET UNITYSDK_OFFSET(0x12043E00)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_B85DC5C2D600E03B_OFFSET UNITYSDK_OFFSET(0x12053600)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_BBE95C8110A8AFBB_OFFSET UNITYSDK_OFFSET(0x12049450)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_BC57AC7782B8F238_OFFSET UNITYSDK_OFFSET(0x120599F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x12050EE0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C6AEBA4A6AB8E153_OFFSET UNITYSDK_OFFSET(0x12064AB0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_C7121136545C2E23_OFFSET UNITYSDK_OFFSET(0x1204C5D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12063E90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_CF68613ECBAF4F39_OFFSET UNITYSDK_OFFSET(0x1205CD20)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D10500E903D99418_OFFSET UNITYSDK_OFFSET(0x12058CC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1204BC40)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D1544CB496D3A79C_OFFSET UNITYSDK_OFFSET(0x1205BE90)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x1204E380)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_D98C144B1A58F253_OFFSET UNITYSDK_OFFSET(0x12061160)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x1205BE00)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DBAD97D008F5B376_OFFSET UNITYSDK_OFFSET(0x1204ED60)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DE8F70CD9F0EFA17_OFFSET UNITYSDK_OFFSET(0x1205C8F0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x12060FD0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_E427D05902552B74_OFFSET UNITYSDK_OFFSET(0x120501C0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_E46DDF7FC80BC770_OFFSET UNITYSDK_OFFSET(0x12064770)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_E4AAF2D01919140A_OFFSET UNITYSDK_OFFSET(0x120637D0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1204DF60)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x12051280)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F1BE2B3245CBB744_OFFSET UNITYSDK_OFFSET(0x12051CC0)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F4D59994912E9CCF_OFFSET UNITYSDK_OFFSET(0x1205C810)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_F68BA5110A64A2BA_OFFSET UNITYSDK_OFFSET(0x12058820)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x1204DD40)
#define CLASS_2_17E903BDA51D43F0_METHOD_2_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x1204C0D0)
#define CLASS_2_17E903BDA51D43F0_ONCLICK_OFFSET UNITYSDK_OFFSET(0x12044AF0)
#define CLASS_2_17E903BDA51D43F0_ONDRAG_OFFSET UNITYSDK_OFFSET(0x120456D0)
#define CLASS_2_17E903BDA51D43F0_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x12045580)
#define CLASS_2_17E903BDA51D43F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x12045C00)
#define CLASS_2_17E903BDA51D43F0__CTOR_OFFSET UNITYSDK_OFFSET(0x12045820)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_TypeDefinitionIndex = 46689;

class Class_2_17E903BDA51D43F0 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE3E0);
	}
	static ::System::Single* StaticGet_Field_2_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE3E4);
	}
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE3E8);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_Field_2_12()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE3EC);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_8()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE3F0);
	}
	static ::System::Single* StaticGet_Field_2_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE400);
	}
	static ::Unity::Collections::NativeArray_1<::System::Single>* StaticGet_Field_2_9()
	{
		return (::Unity::Collections::NativeArray_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE408);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_7()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE418);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE428);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE429);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE42A);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE42C);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_10()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE430);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet_Field_2_11()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0xE440);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_2_15 = 0x8; // 0x0
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_70; // 0x50
	::UnityEngine::Transform* Field_2_57; // 0x58
	::Class_1_3DF236F531F5694C<::Class_1_3DF236F531F5694C<::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F>*>* Field_2_25; // 0x60
	::UnityEngine::RectTransform* Field_2_55; // 0x68
	::MoleMole::UIBaseController* Field_2_52; // 0x70
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_42; // 0x78
	::MoleMole::Cameras::CameraTrackBlending* Field_2_66; // 0x80
	::Class_2_000597E145D7A42A<::UnityEngine::NAPRenderPipeline0::RTHandle*>* Field_2_23; // 0x88
	::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* Field_2_24; // 0x90
	::Class_1_2858EC444CCF662F* Field_2_41; // 0x98
	::MoleMole::ConfigUIUrbanMap* Field_2_60; // 0xA0
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_69; // 0xA8
	::UnityEngine::RectTransform* Field_2_56; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_371*>*>* Field_2_51; // 0xB8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_371*>* Field_2_68; // 0xC0
	::Il2CppArray<::MoleMole::MapGroupMemberStateConfig*>* Field_2_40; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* Field_2_26; // 0xD0
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_34; // 0xD8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_371*>* Field_2_50; // 0xE0
	::Class_1_FCCAFAFEDD17B2C1* Field_2_47; // 0xE8
	::DG::Tweening::Tweener* Field_2_32; // 0xF0
	::Class_1_6A3AD2BFCE6BBF2E* Field_2_29; // 0xF8
	::MonoSceneMap3DConfig* Field_2_58; // 0x100
	::DG::Tweening::Tweener* Field_2_33; // 0x108
	::Class_2_17E903BDA51D43F0_Class_3_90EEADDEAE6DE849_1* Field_2_16; // 0x110
	::UnityEngine::RectTransform* Field_2_53; // 0x118
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelContext*>* Field_2_22; // 0x120
	::System::Collections::Generic::List_1<::MoleMole::SphereCameraConfig*>* Field_2_59; // 0x128
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::DG::Tweening::Tween*>* Field_2_49; // 0x130
	::UnityEngine::Rendering::Volume* Field_2_36; // 0x138
	::UnityEngine::RectTransform* Field_2_54; // 0x140
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect* Field_2_48; // 0x148
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_371*>* Field_2_27; // 0x150
	::UnityEngine::Vector2 Field_2_44; // 0x158
	::System::Single Field_2_67; // 0x160
	::Unity::Collections::NativeArray_1<::System::IntPtr> Field_2_3; // 0x168
	::System::Boolean Field_2_37; // 0x178
	::System::Boolean Field_2_46; // 0x179
	::System::Boolean Field_2_31; // 0x17A
	::System::Boolean Field_2_35; // 0x17B
	::System::Boolean Field_2_38; // 0x17C
	::System::Boolean Field_2_63; // 0x17D
	::System::Boolean Field_2_28; // 0x17E
	::UnityEngine::Vector2 Field_2_45; // 0x180
	::System::Single Field_2_61; // 0x188
	::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate Field_2_2; // 0x190
	::System::Single Field_2_64; // 0x1B0
	::System::Single Field_2_62; // 0x1B4
	::System::Boolean Field_2_30; // 0x1B8
	::System::Boolean Field_2_39; // 0x1B9
	::System::Single Field_2_14; // 0x1BC
	::System::UInt64 Field_2_1; // 0x1C0
	::System::Nullable_1<::System::Single> Field_2_65; // 0x1C8
	::UnityEngine::Vector2 Field_2_43; // 0x1D0
	::Unity::Collections::NativeArray_1<::System::Int32> Field_2_4; // 0x1D8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_65713DE309DC75D0(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_65713DE309DC75D0_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_2_9DD93B5650D84A57(::Class_0_16E4307DCC419505_371* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9DD93B5650D84A57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBE95C8110A8AFBB(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_BBE95C8110A8AFBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4155E433CDAD6311(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4155E433CDAD6311_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_5FBF6E7648E7DF88(::Map3DFogItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5FBF6E7648E7DF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Boolean Method_2_0FDB0E69F1536C8F(::Class_1_A93187421020321F* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A93187421020321F*, ::System::Boolean, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0FDB0E69F1536C8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Boolean Method_2_DBAD97D008F5B376(::Class_0_16E4307DCC419505_371* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DBAD97D008F5B376_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AEE46E2B9342276F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AEE46E2B9342276F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_E427D05902552B74(::System::Nullable_1<::UnityEngine::Vector3> a1, ::MoleMole::SphereCameraConfig* a2, ::Class_1_A93187421020321F* a3)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::MoleMole::SphereCameraConfig*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_E427D05902552B74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_858B5CAFD04F4420(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_858B5CAFD04F4420_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::Single Method_2_5304726C363652C1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5304726C363652C1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Boolean Method_2_A9C9C26E8E56ECB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A9C9C26E8E56ECB7_OFFSET))(this);
	}

	::System::Void Method_2_4D8104A69A540D47(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4D8104A69A540D47_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_371* Method_2_6BCD5A3244F82B46(::UnityEngine::Vector2 a1)
	{
		return ((::Class_0_16E4307DCC419505_371*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6BCD5A3244F82B46_OFFSET))(this, a1);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_8537F9D1E4093369(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8537F9D1E4093369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3416FD11DD9200F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3416FD11DD9200F8_OFFSET))(this);
	}

	::System::Void Method_2_A583FE17DF4EE01C(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_OFFSET))(this, a1);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Void Method_2_AF3BCF8D6EC1CA1E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AF3BCF8D6EC1CA1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F68BA5110A64A2BA(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F68BA5110A64A2BA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_06E6B259B76AEE36(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D10500E903D99418(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D10500E903D99418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Int32 Method_2_BC57AC7782B8F238(::Class_0_16E4307DCC419505_371* a1, ::Class_0_16E4307DCC419505_371* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::Class_0_16E4307DCC419505_371*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_BC57AC7782B8F238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F6E80CB32DFC9AD(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6F6E80CB32DFC9AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_1FD0CB27CDBE771F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_1FD0CB27CDBE771F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80EFDA03CC2E46E8(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_80EFDA03CC2E46E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA49E21F6AC70AEF(::System::Int32 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3, ::MoleMole::UIBaseController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::RectTransform* a6, ::UnityEngine::RectTransform* a7, ::UnityEngine::RectTransform* a8, ::System::Action* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AA49E21F6AC70AEF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D1544CB496D3A79C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D1544CB496D3A79C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DB463DE2487D7F5(::Class_1_A93187421020321F* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SphereCameraConfig* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Bounds a7, ::System::Single a8, ::System::Single a9, ::UnityEngine::Rect a10, ::UnityEngine::Vector2 a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A93187421020321F*, ::UnityEngine::Vector3, ::MoleMole::SphereCameraConfig*, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0DB463DE2487D7F5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_AF85E6FF2B91E341(::Class_0_16E4307DCC419505_371* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_AF85E6FF2B91E341_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F4D59994912E9CCF(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F4D59994912E9CCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE8F70CD9F0EFA17(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DE8F70CD9F0EFA17_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_C7121136545C2E23(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C7121136545C2E23_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_73A69D1A88D5819C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_73A69D1A88D5819C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_26866BD401080475(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_26866BD401080475_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_2_69F204868B44B9AA(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_69F204868B44B9AA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_7E529A1C6FF4894B(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7E529A1C6FF4894B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C2639B227511C01(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_2C2639B227511C01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	static ::System::Void Method_2_7E7D69606AD477D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7E7D69606AD477D5_OFFSET))(a1);
	}

	::System::Void Method_2_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_793067EE61114591_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F1BE2B3245CBB744(::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_F1BE2B3245CBB744_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5079926AF5084948(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5079926AF5084948_OFFSET))(this, a1);
	}

	::System::Void Method_2_7522C54D2C4BEF5D(::MoleMole::UIUrbanMap3DModelContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_7522C54D2C4BEF5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EC9AEC5DC94C3DD(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A970B20EE075836F(::UnityEngine::Bounds a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A970B20EE075836F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CF68613ECBAF4F39(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_CF68613ECBAF4F39_OFFSET))(this, a1, a2);
	}

	::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>* Method_2_97AC7E8AAD04E3B8(::Class_0_16E4307DCC419505_371* a1)
	{
		return ((::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>*(*)(::PVOID, ::Class_0_16E4307DCC419505_371*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_97AC7E8AAD04E3B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_D98C144B1A58F253(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_D98C144B1A58F253_OFFSET))(this, a1, a2);
	}

	::Map3DFogItem* Method_2_43A32A24744EFF38(::System::String* a1)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_43A32A24744EFF38_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_371*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_371*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Boolean Method_2_5FEDCA697B9361F1(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5FEDCA697B9361F1_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo Method_2_51EA3F78A0573857()
	{
		return ((::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_51EA3F78A0573857_OFFSET))(this);
	}

	::System::Single Method_2_40179FDB3262EF41(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_40179FDB3262EF41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_B85DC5C2D600E03B(::Class_0_16E4307DCC419505_371* a1, ::Struct_2_032E3093F309FC91 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::Struct_2_032E3093F309FC91))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_B85DC5C2D600E03B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A310C5B6FD45B738(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A310C5B6FD45B738_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Single Method_2_E4AAF2D01919140A(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_E4AAF2D01919140A_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6639F817E8CD951C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_6639F817E8CD951C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_06E6B259B76AEE36_1(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_06E6B259B76AEE36_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E8F039BF8BF7D8F(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_5E8F039BF8BF7D8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_E46DDF7FC80BC770(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_E46DDF7FC80BC770_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C6AEBA4A6AB8E153(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_C6AEBA4A6AB8E153_OFFSET))(this, a1);
	}

	::System::Void Method_2_A583FE17DF4EE01C_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_A583FE17DF4EE01C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_89DD45DBE5CED3C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_89DD45DBE5CED3C0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}
};
