#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5.h"
#include "unitysdk/Class_2_2B69BCB161EF3587_Struct_2_F217B044B82B2397_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
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

class Class_0_16E4307DCC419505_482;
class Class_0_16E4307DCC419505_744;
class Class_1_2858EC444CCF662F;
class Class_1_836296700F62AFC2;
class Class_1_A93187421020321F;
class Class_1_FCCAFAFEDD17B2C1;
class Class_2_2B69BCB161EF3587_Class_3_90EEADDEAE6DE849_3;
class Class_2_7185096C026A7F53;
class Class_2_D0D7DE2B8886CDAF_3;
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
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_2B69BCB161EF3587_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x12F952D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x12F82B30)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_06958CE60C1441F7_OFFSET UNITYSDK_OFFSET(0x12F77C30)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_0B64C6981CBC50B2_OFFSET UNITYSDK_OFFSET(0x12F94D40)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x12F9A290)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_0FDB0E69F1536C8F_OFFSET UNITYSDK_OFFSET(0x12F81910)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x12F9E190)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x12F7F200)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_207F1D644B20B27B_OFFSET UNITYSDK_OFFSET(0x12F8C140)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_2098A4D598FA1906_OFFSET UNITYSDK_OFFSET(0x12F930E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_231271F13D143870_OFFSET UNITYSDK_OFFSET(0x12F79450)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_232F78575C2841BE_OFFSET UNITYSDK_OFFSET(0x12F8FB90)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x12F9ACE0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_2C2639B227511C01_OFFSET UNITYSDK_OFFSET(0x12F98B90)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x12F8D5E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_2F201626DB9321F5_OFFSET UNITYSDK_OFFSET(0x12F7DE20)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12F9E100)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_317B33FD1B8EFC86_OFFSET UNITYSDK_OFFSET(0x12F90D50)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12F82FD0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x12F99B50)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3AD5A95F7C7771D7_OFFSET UNITYSDK_OFFSET(0x12F9A3A0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3C8CD703D4E0E773_OFFSET UNITYSDK_OFFSET(0x12F99BF0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3D20D7AE71286204_OFFSET UNITYSDK_OFFSET(0x12F80D60)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x12F98D70)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x12F9A4F0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12F830B0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_40179FDB3262EF41_OFFSET UNITYSDK_OFFSET(0x12F7AA40)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_40E1B9478F0A19C7_OFFSET UNITYSDK_OFFSET(0x12F7B620)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_43A32A24744EFF38_OFFSET UNITYSDK_OFFSET(0x12F994D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_4532939AC4B361DF_OFFSET UNITYSDK_OFFSET(0x12F7B3E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x12F7E650)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0x12F81BC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x12F8F870)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_51EA3F78A0573857_OFFSET UNITYSDK_OFFSET(0x12F80790)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x12F8D3F0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_55433284CF9E810A_OFFSET UNITYSDK_OFFSET(0x12F99F20)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_582FDB9B055E6AEB_1_OFFSET UNITYSDK_OFFSET(0x12F808D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_582FDB9B055E6AEB_OFFSET UNITYSDK_OFFSET(0x12F7D730)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_58ACD39245A7664D_OFFSET UNITYSDK_OFFSET(0x12F8DB00)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_5CA6FB1DDB1A4DAC_OFFSET UNITYSDK_OFFSET(0x12F775F0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_5E8F039BF8BF7D8F_OFFSET UNITYSDK_OFFSET(0x12F7D1E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_5FBF6E7648E7DF88_OFFSET UNITYSDK_OFFSET(0x12F8CA60)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_5FEDCA697B9361F1_OFFSET UNITYSDK_OFFSET(0x12F926E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x12F963C0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x12F8D4C0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_6639F817E8CD951C_OFFSET UNITYSDK_OFFSET(0x12F8C6B0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_692AB558B21F751F_OFFSET UNITYSDK_OFFSET(0x12F7D920)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_69F204868B44B9AA_OFFSET UNITYSDK_OFFSET(0x12F94AC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x12F750D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_6BCD5A3244F82B46_OFFSET UNITYSDK_OFFSET(0x12F76050)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x12F75120)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_73A69D1A88D5819C_OFFSET UNITYSDK_OFFSET(0x12F8CAC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x12F91A50)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x12F81BD0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x12F7B300)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_7E529A1C6FF4894B_OFFSET UNITYSDK_OFFSET(0x12F8BBF0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_7E7D69606AD477D5_OFFSET UNITYSDK_OFFSET(0x12F74660)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_80EFDA03CC2E46E8_OFFSET UNITYSDK_OFFSET(0x12F87470)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x12F78060)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x12F99E10)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_858B5CAFD04F4420_OFFSET UNITYSDK_OFFSET(0x12F9AB90)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x12F7FD20)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_8E8555BF9D034CE6_OFFSET UNITYSDK_OFFSET(0x12F8A310)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x12F8F9C0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_904977AB3E2EFF74_OFFSET UNITYSDK_OFFSET(0x12F80AC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x12F96640)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12F87A00)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x12F963B0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_9B31E88F0B2AA0D6_OFFSET UNITYSDK_OFFSET(0x12F8B530)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x12F8F7D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_9DA03C89CF4026EC_OFFSET UNITYSDK_OFFSET(0x12F831E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_9DD93B5650D84A57_OFFSET UNITYSDK_OFFSET(0x12F83D40)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x12F7E920)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A31E3BF5EEADEB52_OFFSET UNITYSDK_OFFSET(0x12F7EFE0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A583FE17DF4EE01C_1_OFFSET UNITYSDK_OFFSET(0x12F8C560)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A583FE17DF4EE01C_OFFSET UNITYSDK_OFFSET(0x12F771E0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A970B20EE075836F_OFFSET UNITYSDK_OFFSET(0x12F77330)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_A9C9C26E8E56ECB7_OFFSET UNITYSDK_OFFSET(0x12F80470)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_AD53FC7E8902534C_OFFSET UNITYSDK_OFFSET(0x12F9E870)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_AF45256CCB1C2DB1_OFFSET UNITYSDK_OFFSET(0x12F93010)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_B08717D358A9905D_OFFSET UNITYSDK_OFFSET(0x12F74AE0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_B1E6BB5A897D2AFC_OFFSET UNITYSDK_OFFSET(0x12F87BC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_B377E13CE893E193_OFFSET UNITYSDK_OFFSET(0x12F92440)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_B85DC5C2D600E03B_OFFSET UNITYSDK_OFFSET(0x12F8E870)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_BBE95C8110A8AFBB_OFFSET UNITYSDK_OFFSET(0x12F7FD70)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_C1B25D3B3F94E126_1_OFFSET UNITYSDK_OFFSET(0x12F8E770)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x12F7D0D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_C685C7CAEED0D07C_OFFSET UNITYSDK_OFFSET(0x12F7AEF0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_C6AEBA4A6AB8E153_OFFSET UNITYSDK_OFFSET(0x12F99250)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F919C0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x12F91C30)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_D10500E903D99418_OFFSET UNITYSDK_OFFSET(0x12F9D110)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_D1544CB496D3A79C_OFFSET UNITYSDK_OFFSET(0x12F7E360)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_D24E6FE37AA4C5A3_OFFSET UNITYSDK_OFFSET(0x12F91710)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x12F78C30)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_D98C144B1A58F253_OFFSET UNITYSDK_OFFSET(0x12F81C70)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x12F96310)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_DC30D4F01CF5D68A_OFFSET UNITYSDK_OFFSET(0x12F91460)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_DDDEE766A0E3D16C_OFFSET UNITYSDK_OFFSET(0x12F9DE50)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_DE8F70CD9F0EFA17_OFFSET UNITYSDK_OFFSET(0x12F79020)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x12F7E1D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_E427D05902552B74_OFFSET UNITYSDK_OFFSET(0x12F8ABD0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_E4AAF2D01919140A_OFFSET UNITYSDK_OFFSET(0x12F8D9D0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x12F79FC0)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_F1BE2B3245CBB744_OFFSET UNITYSDK_OFFSET(0x12F80150)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_F30B868D748FA16B_OFFSET UNITYSDK_OFFSET(0x12F81990)
#define CLASS_2_2B69BCB161EF3587_METHOD_2_F4D59994912E9CCF_OFFSET UNITYSDK_OFFSET(0x12F83100)
#define CLASS_2_2B69BCB161EF3587_ONCLICK_OFFSET UNITYSDK_OFFSET(0x12F75E60)
#define CLASS_2_2B69BCB161EF3587_ONDRAG_OFFSET UNITYSDK_OFFSET(0x12F76AD0)
#define CLASS_2_2B69BCB161EF3587_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x12F76990)
#define CLASS_2_2B69BCB161EF3587__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F771A0)
#define CLASS_2_2B69BCB161EF3587__CTOR_OFFSET UNITYSDK_OFFSET(0x12F76C20)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_TypeDefinitionIndex = 75479;

class Class_2_2B69BCB161EF3587 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::Single* StaticGet_Field_2_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC670);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_10()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC678);
	}
	static ::System::Single* StaticGet_Field_2_26()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC688);
	}
	static ::System::Int32* StaticGet_Field_2_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC68C);
	}
	static ::Unity::Collections::NativeArray_1<::System::IntPtr>* StaticGet_Field_2_11()
	{
		return (::Unity::Collections::NativeArray_1<::System::IntPtr>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC690);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_12()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6A0);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6B0);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6B1);
	}
	static ::System::Boolean* StaticGet_Field_2_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6B2);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_Field_2_18()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6B4);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet_Field_2_19()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6B8);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_15()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6C8);
	}
	static ::Unity::Collections::NativeArray_1<::System::Single>* StaticGet_Field_2_13()
	{
		return (::Unity::Collections::NativeArray_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6D8);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_14()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6E8);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6F8);
	}
	static ::System::Int32* StaticGet_Field_2_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC6FC);
	}
	static ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate* StaticGet_Field_2_4()
	{
		return (::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0xC700);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_8()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_2_23 = 0x8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea>* Field_2_78; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::DG::Tweening::Tween*>* Field_2_58; // 0x58
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelContext*>* Field_2_30; // 0x60
	::UnityEngine::RectTransform* Field_2_61; // 0x68
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_82; // 0x70
	::MonoSceneMap3DConfig* Field_2_64; // 0x78
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_42; // 0x80
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect* Field_2_59; // 0x88
	::DG::Tweening::Tweener* Field_2_36; // 0x90
	::Class_1_BBE667D4A3124D9B<::Class_1_BBE667D4A3124D9B<::Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5>*>* Field_2_35; // 0x98
	::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* Field_2_28; // 0xA0
	::MoleMole::Cameras::CameraTrackBlending* Field_2_72; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_482*>*>* Field_2_56; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* Field_2_34; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea>* Field_2_79; // 0xC0
	::UnityEngine::RectTransform* Field_2_67; // 0xC8
	::System::Collections::Generic::List_1<::MoleMole::SphereCameraConfig*>* Field_2_71; // 0xD0
	::Class_1_836296700F62AFC2* Field_2_39; // 0xD8
	::Class_2_2B69BCB161EF3587_Class_3_90EEADDEAE6DE849_3* Field_2_22; // 0xE0
	::UnityEngine::RectTransform* Field_2_66; // 0xE8
	::UnityEngine::RectTransform* Field_2_62; // 0xF0
	::MoleMole::UIBaseController* Field_2_63; // 0xF8
	::UnityEngine::Transform* Field_2_65; // 0x100
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* Field_2_76; // 0x108
	::Il2CppArray<::MoleMole::MapGroupMemberStateConfig*>* Field_2_51; // 0x110
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* Field_2_57; // 0x118
	::Class_1_FCCAFAFEDD17B2C1* Field_2_52; // 0x120
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_83; // 0x128
	::Class_1_2858EC444CCF662F* Field_2_50; // 0x130
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_49; // 0x138
	::Class_2_000597E145D7A42A<::UnityEngine::NAPRenderPipeline0::RTHandle*>* Field_2_29; // 0x140
	::MoleMole::ConfigUIUrbanMap* Field_2_70; // 0x148
	::DG::Tweening::Tweener* Field_2_43; // 0x150
	::UnityEngine::RectTransform* Field_2_60; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_7; // 0x160
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_482*>* Field_2_33; // 0x168
	::System::Collections::Generic::List_1<::Class_2_2B69BCB161EF3587_Struct_2_F217B044B82B2397_1>* Field_2_0; // 0x170
	::UnityEngine::Rendering::Volume* Field_2_47; // 0x178
	::System::Single Field_2_16; // 0x180
	::System::Boolean Field_2_40; // 0x184
	::System::Boolean Field_2_75; // 0x185
	::System::Boolean Field_2_38; // 0x186
	::System::Boolean Field_2_41; // 0x187
	::System::UInt64 Field_2_5; // 0x188
	::System::Single Field_2_77; // 0x190
	::System::Single Field_2_69; // 0x194
	::UnityEngine::Vector2 Field_2_48; // 0x198
	::UnityEngine::Vector2 Field_2_54; // 0x1A0
	::System::Boolean Field_2_44; // 0x1A8
	::System::Boolean Field_2_46; // 0x1A9
	::System::Boolean Field_2_53; // 0x1AA
	::System::Boolean Field_2_32; // 0x1AB
	::System::Single Field_2_74; // 0x1AC
	::System::Nullable_1<::System::Single> Field_2_73; // 0x1B0
	::System::Single Field_2_68; // 0x1B8
	::System::Boolean Field_2_37; // 0x1BC
	::System::Boolean Field_2_25; // 0x1BD
	::System::Boolean Field_2_24; // 0x1BE
	::System::Boolean Field_2_45; // 0x1BF
	::UnityEngine::Vector2 Field_2_55; // 0x1C0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B08717D358A9905D(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_B08717D358A9905D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void OnClick(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_ONCLICK_OFFSET))(this, a1, a2);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_ONSCROLL_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_ONDRAG_OFFSET))(this, a1);
	}

	::System::Void Method_2_A583FE17DF4EE01C(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A583FE17DF4EE01C_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A970B20EE075836F(::UnityEngine::Bounds a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A970B20EE075836F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CA6FB1DDB1A4DAC(::System::Int32 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3, ::MoleMole::UIBaseController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::RectTransform* a6, ::UnityEngine::RectTransform* a7, ::UnityEngine::RectTransform* a8, ::UnityEngine::RectTransform* a9, ::System::Action* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_5CA6FB1DDB1A4DAC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_06958CE60C1441F7(::MoleMole::UIUrbanMap3DModelContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_06958CE60C1441F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE8F70CD9F0EFA17(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_DE8F70CD9F0EFA17_OFFSET))(this, a1);
	}

	::System::Void Method_2_C685C7CAEED0D07C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_C685C7CAEED0D07C_OFFSET))(this, a1);
	}

	::System::Void Method_2_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_793067EE61114591_OFFSET))(this, a1);
	}

	::Class_2_7185096C026A7F53* Method_2_4532939AC4B361DF(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Class_2_7185096C026A7F53*(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_4532939AC4B361DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E1B9478F0A19C7(::MoleMole::Config::SceneConfigRuntimeDataArea a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_40E1B9478F0A19C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E8F039BF8BF7D8F(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_5E8F039BF8BF7D8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_582FDB9B055E6AEB(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_582FDB9B055E6AEB_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_482* Method_2_6BCD5A3244F82B46(::UnityEngine::Vector2 a1)
	{
		return ((::Class_0_16E4307DCC419505_482*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_6BCD5A3244F82B46_OFFSET))(this, a1);
	}

	::System::Void Method_2_692AB558B21F751F(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_692AB558B21F751F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2F201626DB9321F5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_2F201626DB9321F5_OFFSET))(this, a1);
	}

	::System::Single Method_2_40179FDB3262EF41(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_40179FDB3262EF41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Int32 Method_2_D1544CB496D3A79C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_D1544CB496D3A79C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBE95C8110A8AFBB(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_BBE95C8110A8AFBB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F1BE2B3245CBB744(::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_F1BE2B3245CBB744_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo Method_2_51EA3F78A0573857()
	{
		return ((::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_51EA3F78A0573857_OFFSET))(this);
	}

	::System::Void Method_2_582FDB9B055E6AEB_1(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_582FDB9B055E6AEB_1_OFFSET))(this, a1, a2);
	}

	::Class_2_D0D7DE2B8886CDAF_3* Method_2_904977AB3E2EFF74(::System::Int32 a1)
	{
		return ((::Class_2_D0D7DE2B8886CDAF_3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_904977AB3E2EFF74_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_2_3D20D7AE71286204(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3D20D7AE71286204_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0FDB0E69F1536C8F(::Class_1_A93187421020321F* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A93187421020321F*, ::System::Boolean, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_0FDB0E69F1536C8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F30B868D748FA16B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_F30B868D748FA16B_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::Class_2_2B69BCB161EF3587_Struct_2_F217B044B82B2397_1 Method_2_A31E3BF5EEADEB52(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_2_2B69BCB161EF3587_Struct_2_F217B044B82B2397_1(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A31E3BF5EEADEB52_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_D98C144B1A58F253(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_D98C144B1A58F253_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F4D59994912E9CCF(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_F4D59994912E9CCF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9DA03C89CF4026EC(::Class_0_16E4307DCC419505_482* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_9DA03C89CF4026EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80EFDA03CC2E46E8(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_80EFDA03CC2E46E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_B1E6BB5A897D2AFC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_B1E6BB5A897D2AFC_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_7E529A1C6FF4894B(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_7E529A1C6FF4894B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_207F1D644B20B27B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_207F1D644B20B27B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::Void Method_2_A583FE17DF4EE01C_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A583FE17DF4EE01C_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6639F817E8CD951C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_6639F817E8CD951C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBF6E7648E7DF88(::Map3DFogItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_5FBF6E7648E7DF88_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_73A69D1A88D5819C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_73A69D1A88D5819C_OFFSET))(this, a1);
	}

	::System::Single Method_2_5304726C363652C1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_5304726C363652C1_OFFSET))(this);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Single Method_2_E4AAF2D01919140A(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_E4AAF2D01919140A_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_E427D05902552B74(::System::Nullable_1<::UnityEngine::Vector3> a1, ::MoleMole::SphereCameraConfig* a2, ::Class_1_A93187421020321F* a3)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::MoleMole::SphereCameraConfig*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_E427D05902552B74_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_58ACD39245A7664D(::Class_0_16E4307DCC419505_482* a1, ::Class_0_16E4307DCC419505_482* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_58ACD39245A7664D_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_8E8555BF9D034CE6(::MoleMole::MapGroupMemberStateConfig*& a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::MapGroupMemberStateConfig*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_8E8555BF9D034CE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B85DC5C2D600E03B(::Class_0_16E4307DCC419505_482* a1, ::Struct_2_032E3093F309FC91 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::Struct_2_032E3093F309FC91))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_B85DC5C2D600E03B_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_C1B25D3B3F94E126_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_232F78575C2841BE(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_232F78575C2841BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_317B33FD1B8EFC86(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_317B33FD1B8EFC86_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_482* Method_2_DC30D4F01CF5D68A(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_482*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_DC30D4F01CF5D68A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D24E6FE37AA4C5A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_D24E6FE37AA4C5A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Boolean Method_2_5FEDCA697B9361F1(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_5FEDCA697B9361F1_OFFSET))(this, a1, a2);
	}

	::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>* Method_2_AF45256CCB1C2DB1(::Class_0_16E4307DCC419505_482* a1)
	{
		return ((::Class_2_F16D73323D71766B<::Struct_2_D9F43A238F81E067>*(*)(::PVOID, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_AF45256CCB1C2DB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2098A4D598FA1906(::MoleMole::Config::SceneConfigRuntimeDataArea a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_2098A4D598FA1906_OFFSET))(this, a1);
	}

	::System::Void Method_2_69F204868B44B9AA(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_69F204868B44B9AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_0B64C6981CBC50B2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_0B64C6981CBC50B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9DD93B5650D84A57(::Class_0_16E4307DCC419505_482* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_9DD93B5650D84A57_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_231271F13D143870(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_231271F13D143870_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_2_627594C270CB38B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_627594C270CB38B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_2C2639B227511C01(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_2C2639B227511C01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Int32 Method_2_C6AEBA4A6AB8E153(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_C6AEBA4A6AB8E153_OFFSET))(this, a1);
	}

	::Map3DFogItem* Method_2_43A32A24744EFF38(::System::String* a1)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_43A32A24744EFF38_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_3C8CD703D4E0E773(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3C8CD703D4E0E773_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_744* Method_2_B377E13CE893E193(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_744*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_B377E13CE893E193_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_55433284CF9E810A(::Class_0_16E4307DCC419505_482* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_55433284CF9E810A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_7E7D69606AD477D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_7E7D69606AD477D5_OFFSET))(a1);
	}

	::System::Void Method_2_0EC9AEC5DC94C3DD(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3AD5A95F7C7771D7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3AD5A95F7C7771D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B31E88F0B2AA0D6(::Class_1_A93187421020321F* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SphereCameraConfig* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Bounds a7, ::System::Single a8, ::System::Single a9, ::UnityEngine::Rect a10, ::UnityEngine::Vector2 a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A93187421020321F*, ::UnityEngine::Vector3, ::MoleMole::SphereCameraConfig*, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_9B31E88F0B2AA0D6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_858B5CAFD04F4420(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_858B5CAFD04F4420_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B85C1969225764F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_2B85C1969225764F_OFFSET))(this);
	}

	::System::Boolean Method_2_D10500E903D99418(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_D10500E903D99418_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DDDEE766A0E3D16C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_DDDEE766A0E3D16C_OFFSET))(this);
	}

	::System::Boolean Method_2_A9C9C26E8E56ECB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_A9C9C26E8E56ECB7_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Boolean Method_2_AD53FC7E8902534C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_METHOD_2_AD53FC7E8902534C_OFFSET))(this, a1);
	}
};
