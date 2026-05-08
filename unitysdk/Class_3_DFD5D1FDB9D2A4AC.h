#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_51_Enum_3_AC46235E222DC7EE.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1F6F50F7EA3A718F.h"
#include "unitysdk/Enum_3_470312FC6BAE7111.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/Enum_3_B9A017F4B0BBC22E.h"
#include "unitysdk/Enum_3_CDC95A71D07E3BF9.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_0275CAFB06626B8D.h"
#include "unitysdk/Struct_2_49C1630534D9538D.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_1.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_5.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_06076BF6FF6AD16D;
class Class_1_CB7F0487F7A6164A;
class Class_1_D69A5F7574A01DAB;
class Class_2_0206DD479BB5C906;
class Class_2_D456F475C91F9E7E;
class NPCStreamingProxy;
namespace MoleMole { class DynamicBoneGroup; }
namespace MoleMole { class MDBClothToRenderersMapping; }
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_DFD5D1FDB9D2A4AC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1140FF20)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_06954E47E3B4071B_OFFSET UNITYSDK_OFFSET(0x11411B30)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_09A5B922DFB39D6C_OFFSET UNITYSDK_OFFSET(0x11410AD0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_0C751C8A589949D9_OFFSET UNITYSDK_OFFSET(0x11411430)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x11412660)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_1AF95EBB5CA38616_OFFSET UNITYSDK_OFFSET(0x11410920)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_1E082DBF317F50B8_OFFSET UNITYSDK_OFFSET(0x11410450)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x11411AF0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3050147FEE9633F2_OFFSET UNITYSDK_OFFSET(0x11413440)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_35145442102AACA9_OFFSET UNITYSDK_OFFSET(0x11411D20)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_36CD98119ACA0760_OFFSET UNITYSDK_OFFSET(0x11410710)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3CAC93BF77250DAD_1_OFFSET UNITYSDK_OFFSET(0x11411420)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x11411180)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x11412540)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_430594AFB700385E_OFFSET UNITYSDK_OFFSET(0x11413B50)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_488A9656C33E5F20_OFFSET UNITYSDK_OFFSET(0x11414230)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4B74C77F562980F8_OFFSET UNITYSDK_OFFSET(0x114124F0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x11412430)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x11411D50)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5051C7AA85CC2F2F_OFFSET UNITYSDK_OFFSET(0x114114E0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_50B337A40A0C6E04_OFFSET UNITYSDK_OFFSET(0x114130C0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11413F50)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x11413800)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5E38FB42EB536FCC_OFFSET UNITYSDK_OFFSET(0x114118C0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_63106102B3972D90_OFFSET UNITYSDK_OFFSET(0x11411B60)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_635C67DDE42E54E3_OFFSET UNITYSDK_OFFSET(0x11412030)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_6D6FE7A937491EC8_OFFSET UNITYSDK_OFFSET(0x114142C0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x11411370)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x1140FDA0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7756ACA055CA21F1_OFFSET UNITYSDK_OFFSET(0x1140EC70)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x114138A0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x11412500)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7EAB5CEB1D55A5C6_OFFSET UNITYSDK_OFFSET(0x11411930)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_85A29D63AC16EE29_OFFSET UNITYSDK_OFFSET(0x114129C0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x114141B0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET UNITYSDK_OFFSET(0x11410910)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8F9716FCC554E5F2_1_OFFSET UNITYSDK_OFFSET(0x114142B0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8F9716FCC554E5F2_OFFSET UNITYSDK_OFFSET(0x114105F0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11413810)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x11412670)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x11412F10)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A8544B81F391A43A_OFFSET UNITYSDK_OFFSET(0x11411D70)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B1493154BFDD83C6_OFFSET UNITYSDK_OFFSET(0x11413910)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B4CDB1B15D31FE08_OFFSET UNITYSDK_OFFSET(0x114142A0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x11412840)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x11413F80)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_C09A902625D2FD94_OFFSET UNITYSDK_OFFSET(0x11413F90)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x11410600)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11411190)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x11413F60)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x11411B40)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D92CD016FBDE5B70_OFFSET UNITYSDK_OFFSET(0x11411D30)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x11412550)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_DEE3EF9E11427E82_OFFSET UNITYSDK_OFFSET(0x114124E0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E63137AC0C60FCB8_OFFSET UNITYSDK_OFFSET(0x11411920)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E79472363E1B781C_OFFSET UNITYSDK_OFFSET(0x11413FA0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x11411D40)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x11411440)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x11411210)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FC3412FBE755AC36_OFFSET UNITYSDK_OFFSET(0x11412260)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11412450)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_1_OFFSET UNITYSDK_OFFSET(0x11410C60)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_2_OFFSET UNITYSDK_OFFSET(0x11410E40)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_3_OFFSET UNITYSDK_OFFSET(0x113EEAE0)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_4_OFFSET UNITYSDK_OFFSET(0x11402D30)
#define CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x11403010)
#define CLASS_3_DFD5D1FDB9D2A4AC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1140D080)
#define CLASS_3_DFD5D1FDB9D2A4AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1140FF70)
#define CLASS_3_DFD5D1FDB9D2A4AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1140FFF0)

inline static constexpr unsigned int Class_3_DFD5D1FDB9D2A4AC_TypeDefinitionIndex = 59924;

class Class_3_DFD5D1FDB9D2A4AC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_41; // 0x0
	// static const ::System::String* Field_3_66; // 0x0
	// static const ::System::Int32 Field_3_95 = 0x1D; // 0x0
	::Il2CppArray<::UnityEngine::Light*>* Field_3_20; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_9; // 0x50
	::UnityEngine::Collider* Field_3_7; // 0x58
	::UnityEngine::MdbComponent* Field_3_82; // 0x60
	::MoleMole::MonoEntityModelModifier* Field_3_58; // 0x68
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Struct_2_49C1630534D9538D>* Field_3_60; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*>* Field_3_69; // 0x78
	::MoleMole::MDBClothToRenderersMapping* Field_3_85; // 0x80
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_3_2; // 0x88
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_75; // 0x90
	::Class_2_0206DD479BB5C906* Field_3_90; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_24; // 0xA0
	::MoleMole::MonoGhostEffect* Field_3_59; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_22; // 0xB0
	::UnityEngine::Transform* Field_3_76; // 0xB8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_1>*>* Field_3_89; // 0xC0
	::Foundation::AssetPath Field_3_0; // 0xC8
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_17; // 0xD8
	::NPCStreamingProxy* Field_3_5; // 0xE0
	::Class_2_D456F475C91F9E7E* Field_3_79; // 0xE8
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_15; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_86; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_0275CAFB06626B8D>*>* Field_3_87; // 0x100
	::UnityEngine::Transform* Field_3_4; // 0x108
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_14; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_10; // 0x118
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_3_67; // 0x120
	::UnityEngine::Transform* Field_3_42; // 0x128
	::System::String* Field_3_57; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_19; // 0x138
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_74; // 0x140
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_16; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_26; // 0x150
	::Class_1_CB7F0487F7A6164A* Field_3_68; // 0x158
	::MoleMole::MonoEntityColliderManager* Field_3_94; // 0x160
	::UnityEngine::GameObject* Field_3_3; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Field_3_25; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_23; // 0x178
	::System::Action_1<::System::Boolean>* Field_3_73; // 0x180
	::System::Collections::Generic::Dictionary_2<::Enum_3_B9A017F4B0BBC22E, ::Class_1_06076BF6FF6AD16D*>* Field_3_8; // 0x188
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_5>* Field_3_84; // 0x190
	::UnityEngine::Collider* Field_3_6; // 0x198
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean>* Field_3_88; // 0x1A0
	::Foundation::AssetPath Field_3_1; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_21; // 0x1B8
	::System::Boolean Field_3_92; // 0x1C0
	::System::Boolean Field_3_56; // 0x1C1
	::System::Boolean Field_3_63; // 0x1C2
	::System::Boolean Field_3_39; // 0x1C3
	::System::Single Field_3_13; // 0x1C4
	::System::Boolean Field_3_91; // 0x1C8
	::System::Boolean Field_3_44; // 0x1C9
	::System::Boolean Field_3_71; // 0x1CA
	::System::Boolean Field_3_83; // 0x1CB
	::Enum_3_CDC95A71D07E3BF9 Field_3_61; // 0x1CC
	::System::Boolean Field_3_45; // 0x1D0
	::System::Boolean Field_3_38; // 0x1D1
	::Enum_3_470312FC6BAE7111 Field_3_49; // 0x1D4
	::UnityEngine::RigidbodyConstraints Field_3_43; // 0x1D8
	::System::Single Field_3_50; // 0x1DC
	::System::Single Field_3_53; // 0x1E0
	::System::Int32 Field_3_40; // 0x1E4
	::System::Single Field_3_35; // 0x1E8
	::System::Single Field_3_55; // 0x1EC
	::UnityEngine::PhysicMaterialCombine Field_3_11; // 0x1F0
	::System::Single Field_3_27; // 0x1F4
	::System::Single Field_3_29; // 0x1F8
	::UnityEngine::Vector3 Field_3_36; // 0x1FC
	::System::Int32 Field_3_64; // 0x208
	::UnityEngine::Vector3 Field_3_31; // 0x20C
	::Enum_3_1F6F50F7EA3A718F Field_3_65; // 0x218
	::System::Single Field_3_28; // 0x21C
	::UnityEngine::Vector3 Field_3_81; // 0x220
	::UnityEngine::Vector3 Field_3_33; // 0x22C
	::System::Boolean Field_3_77; // 0x238
	::System::Boolean Field_3_46; // 0x239
	::System::Boolean Field_3_51; // 0x23A
	::System::Boolean Field_3_78; // 0x23B
	::UnityEngine::Quaternion Field_3_34; // 0x23C
	::UnityEngine::Vector3 Field_3_30; // 0x24C
	::System::Single Field_3_12; // 0x258
	::System::Int32 Field_3_52; // 0x25C
	::System::Boolean Field_3_48; // 0x260
	::System::Boolean Field_3_80; // 0x261
	::System::Boolean Field_3_93; // 0x262
	::System::Boolean Field_3_18; // 0x263
	::UnityEngine::Vector3 Field_3_32; // 0x264
	::System::Boolean Field_3_37; // 0x270
	::System::Boolean Field_3_47; // 0x271
	::System::Boolean Field_3_70; // 0x272
	::System::Boolean Field_3_62; // 0x273
	::Class_1_43BD383C98B4C0C5_51_Enum_3_AC46235E222DC7EE Field_3_72; // 0x274
	::System::Single Field_3_54; // 0x278

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_1E082DBF317F50B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_1E082DBF317F50B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_7756ACA055CA21F1(::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7756ACA055CA21F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F9716FCC554E5F2(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8F9716FCC554E5F2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_C2245EC58D417830_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_36CD98119ACA0760()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_36CD98119ACA0760_OFFSET))(this);
	}

	::System::Void Method_3_8ED0B5D9B2E0D6ED(::Il2CppArray<::UnityEngine::Light*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_1AF95EBB5CA38616(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_1AF95EBB5CA38616_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_1_OFFSET))(this);
	}

	::System::Void Method_3_09A5B922DFB39D6C(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_09A5B922DFB39D6C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_2_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3CAC93BF77250DAD_OFFSET))(this);
	}

	::System::Void Method_3_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_73052712910A9EE7_OFFSET))(this);
	}

	static ::Class_3_DFD5D1FDB9D2A4AC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DFD5D1FDB9D2A4AC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}

	::System::Boolean Method_3_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_70589F89E4D22649_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD_1()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3CAC93BF77250DAD_1_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_3_0C751C8A589949D9()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_0C751C8A589949D9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_F10A0D072D26C4BF_OFFSET))(this);
	}

	static ::System::Boolean Method_3_5051C7AA85CC2F2F(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5051C7AA85CC2F2F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_5E38FB42EB536FCC(::System::Boolean a1, ::Class_1_43BD383C98B4C0C5_51_Enum_3_AC46235E222DC7EE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_51_Enum_3_AC46235E222DC7EE))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5E38FB42EB536FCC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_3_E63137AC0C60FCB8()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E63137AC0C60FCB8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_3_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_7EAB5CEB1D55A5C6()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7EAB5CEB1D55A5C6_OFFSET))(this);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Void Method_3_06954E47E3B4071B(::MoleMole::MonoEntityModelModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_06954E47E3B4071B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_63106102B3972D90(::Class_1_CB7F0487F7A6164A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_63106102B3972D90_OFFSET))(this, a1, a2);
	}

	::MoleMole::MonoEntityColliderManager* Method_3_35145442102AACA9()
	{
		return ((::MoleMole::MonoEntityColliderManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_35145442102AACA9_OFFSET))(this);
	}

	::MoleMole::MonoEntityModelModifier* Method_3_D92CD016FBDE5B70()
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D92CD016FBDE5B70_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FF11A7936E830212_4_OFFSET))(this);
	}

	::System::Void Method_3_A8544B81F391A43A(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*& a1, ::System::Boolean a2, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*&, ::System::Boolean, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A8544B81F391A43A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_3_FC3412FBE755AC36(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FC3412FBE755AC36_OFFSET))(a1, a2);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_635C67DDE42E54E3()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_635C67DDE42E54E3_OFFSET))(this);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_3_DEE3EF9E11427E82(::MoleMole::MonoEntityColliderManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_DEE3EF9E11427E82_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Method_3_4B74C77F562980F8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_4B74C77F562980F8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::System::Boolean Method_3_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_3_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_10FFF5D129383396_OFFSET))(this, a1);
	}

	::System::Void Method_3_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Boolean Method_3_85A29D63AC16EE29()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_85A29D63AC16EE29_OFFSET))(this);
	}

	::System::Boolean Method_3_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Void Method_3_50B337A40A0C6E04(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::System::String*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_50B337A40A0C6E04_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Foundation::AssetPath Method_3_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5B0743536553688C_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_3_B1493154BFDD83C6(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B1493154BFDD83C6_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_430594AFB700385E(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_430594AFB700385E_OFFSET))(a1, a2);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Light*>* Method_3_C09A902625D2FD94()
	{
		return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_C09A902625D2FD94_OFFSET))(this);
	}

	::System::Boolean Method_3_E79472363E1B781C(::MoleMole::GameplayTag a1, ::Class_1_CB7F0487F7A6164A*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*&))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_E79472363E1B781C_OFFSET))(this, a1, a2);
	}

	::Struct_2_9F85650CFFBE9F44 Method_3_87411ABA28C869BA()
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_87411ABA28C869BA_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_488A9656C33E5F20()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_488A9656C33E5F20_OFFSET))(this);
	}

	::System::Void Method_3_B4CDB1B15D31FE08(::Il2CppArray<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_B4CDB1B15D31FE08_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F9716FCC554E5F2_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_8F9716FCC554E5F2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_6D6FE7A937491EC8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_6D6FE7A937491EC8_OFFSET))(this, a1);
	}

	::System::Void Method_3_3050147FEE9633F2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Foundation::AssetPath a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_DFD5D1FDB9D2A4AC_METHOD_3_3050147FEE9633F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
