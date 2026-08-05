#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_55_Enum_3_AC46235E222DC7EE.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1F6F50F7EA3A718F.h"
#include "unitysdk/Enum_3_470312FC6BAE7111.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/Enum_3_CDC95A71D07E3BF9.h"
#include "unitysdk/Enum_3_DEC90C97E871B705.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_0275CAFB06626B8D.h"
#include "unitysdk/Struct_2_49C1630534D9538D.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_4.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_5.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_06076BF6FF6AD16D;
class Class_1_43BD383C98B4C0C5_100;
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
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_C93CC3D2C2AC4067_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15021BB0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_06954E47E3B4071B_OFFSET UNITYSDK_OFFSET(0x150246F0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_09A5B922DFB39D6C_OFFSET UNITYSDK_OFFSET(0x15025330)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_0C751C8A589949D9_OFFSET UNITYSDK_OFFSET(0x15022350)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x15023ED0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_1E082DBF317F50B8_OFFSET UNITYSDK_OFFSET(0x150258D0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x15025130)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_2A0E11E465D000F5_OFFSET UNITYSDK_OFFSET(0x15025E00)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_35145442102AACA9_OFFSET UNITYSDK_OFFSET(0x15023EC0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_36CD98119ACA0760_OFFSET UNITYSDK_OFFSET(0x15022150)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_3CAC93BF77250DAD_1_OFFSET UNITYSDK_OFFSET(0x15025DE0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x15022C30)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x15026320)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_430594AFB700385E_OFFSET UNITYSDK_OFFSET(0x15024D20)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_488A9656C33E5F20_OFFSET UNITYSDK_OFFSET(0x15024680)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B3B6DD9DA3AFCE1_OFFSET UNITYSDK_OFFSET(0x15023AE0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B74C77F562980F8_OFFSET UNITYSDK_OFFSET(0x15026280)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B7C6EEEB8A18584_OFFSET UNITYSDK_OFFSET(0x15022750)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x15026530)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x15023270)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_5051C7AA85CC2F2F_OFFSET UNITYSDK_OFFSET(0x15022370)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15026550)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x15025DF0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_5E38FB42EB536FCC_OFFSET UNITYSDK_OFFSET(0x15022C40)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_63106102B3972D90_OFFSET UNITYSDK_OFFSET(0x150260C0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_635C67DDE42E54E3_OFFSET UNITYSDK_OFFSET(0x15024070)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x15026640)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x15021A30)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_7643C93EB2703847_OFFSET UNITYSDK_OFFSET(0x15023750)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_7756ACA055CA21F1_OFFSET UNITYSDK_OFFSET(0x15020920)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x15026290)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x15023440)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_7EAB5CEB1D55A5C6_OFFSET UNITYSDK_OFFSET(0x15025170)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x150220D0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_8C90C775EAE86885_OFFSET UNITYSDK_OFFSET(0x150266F0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET UNITYSDK_OFFSET(0x15026300)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_8F9716FCC554E5F2_1_OFFSET UNITYSDK_OFFSET(0x15026580)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_8F9716FCC554E5F2_OFFSET UNITYSDK_OFFSET(0x15026570)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x15024510)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x150265B0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x150255A0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x15023290)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_B1493154BFDD83C6_OFFSET UNITYSDK_OFFSET(0x15024910)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_B4CDB1B15D31FE08_OFFSET UNITYSDK_OFFSET(0x15025A70)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x15023EF0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x150254C0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x15023EE0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_C09A902625D2FD94_OFFSET UNITYSDK_OFFSET(0x15025120)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15025D60)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x15026590)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x15026330)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_D92CD016FBDE5B70_OFFSET UNITYSDK_OFFSET(0x150260B0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_DEE3EF9E11427E82_OFFSET UNITYSDK_OFFSET(0x15026310)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_E63137AC0C60FCB8_OFFSET UNITYSDK_OFFSET(0x15023EB0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_E79472363E1B781C_OFFSET UNITYSDK_OFFSET(0x15024700)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x15026560)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_EE69EBBB80E49CCB_OFFSET UNITYSDK_OFFSET(0x15022D30)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15022360)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x15025770)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x150242A0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FC3412FBE755AC36_OFFSET UNITYSDK_OFFSET(0x15024B50)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15022CA0)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_1_OFFSET UNITYSDK_OFFSET(0x15026350)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_2_OFFSET UNITYSDK_OFFSET(0x15023480)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_3_OFFSET UNITYSDK_OFFSET(0x15024340)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_4_OFFSET UNITYSDK_OFFSET(0x15026880)
#define CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x15025A80)
#define CLASS_3_C93CC3D2C2AC4067_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1501F020)
#define CLASS_3_C93CC3D2C2AC4067__CCTOR_OFFSET UNITYSDK_OFFSET(0x15021C00)
#define CLASS_3_C93CC3D2C2AC4067__CTOR_OFFSET UNITYSDK_OFFSET(0x15021C80)

inline static constexpr unsigned int Class_3_C93CC3D2C2AC4067_TypeDefinitionIndex = 64733;

class Class_3_C93CC3D2C2AC4067 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_46; // 0x0
	// static const ::System::String* Field_3_68; // 0x0
	// static const ::System::Int32 Field_3_101 = 0x1F; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_26; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*>* Field_3_73; // 0x50
	::UnityEngine::MdbComponent* Field_3_91; // 0x58
	::System::Collections::Generic::Dictionary_2<::Enum_3_DEC90C97E871B705, ::Class_1_06076BF6FF6AD16D*>* Field_3_8; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_14; // 0x68
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_76; // 0x70
	::Foundation::AssetPath Field_3_1; // 0x78
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_23; // 0x88
	::MoleMole::MonoEntityModelModifier* Field_3_60; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_25; // 0x98
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_4>* Field_3_89; // 0xA0
	::MoleMole::MonoGhostEffect* Field_3_67; // 0xA8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean>* Field_3_93; // 0xB0
	::Class_1_43BD383C98B4C0C5_100* Field_3_37; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_18; // 0xC0
	::Class_2_D456F475C91F9E7E* Field_3_86; // 0xC8
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_83; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Field_3_103; // 0xD8
	::UnityEngine::Collider* Field_3_10; // 0xE0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_5>*>* Field_3_92; // 0xE8
	::Class_1_CB7F0487F7A6164A* Field_3_74; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Field_3_31; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_30; // 0x100
	::System::String* Field_3_61; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_95; // 0x110
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_3_75; // 0x118
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_3_7; // 0x120
	::NPCStreamingProxy* Field_3_11; // 0x128
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_15; // 0x130
	::UnityEngine::Collider* Field_3_9; // 0x138
	::UnityEngine::GameObject* Field_3_6; // 0x140
	::UnityEngine::Transform* Field_3_45; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_3_27; // 0x150
	::System::Action_1<::System::Boolean>* Field_3_77; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_21; // 0x160
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_17; // 0x168
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_16; // 0x170
	::Il2CppArray<::UnityEngine::Light*>* Field_3_20; // 0x178
	::UnityEngine::Transform* Field_3_82; // 0x180
	::Foundation::AssetPath Field_3_0; // 0x188
	::Class_2_0206DD479BB5C906* Field_3_99; // 0x198
	::UnityEngine::GameObject* Field_3_4; // 0x1A0
	::MoleMole::MonoEntityColliderManager* Field_3_102; // 0x1A8
	::MoleMole::MDBClothToRenderersMapping* Field_3_88; // 0x1B0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_0275CAFB06626B8D>*>* Field_3_94; // 0x1B8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_24; // 0x1C0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Struct_2_49C1630534D9538D>* Field_3_66; // 0x1C8
	::UnityEngine::Transform* Field_3_5; // 0x1D0
	::System::Single Field_3_63; // 0x1D8
	::System::Int32 Field_3_70; // 0x1DC
	::System::Boolean Field_3_79; // 0x1E0
	::System::Boolean Field_3_90; // 0x1E1
	::System::Boolean Field_3_55; // 0x1E2
	::System::Boolean Field_3_51; // 0x1E3
	::System::Single Field_3_29; // 0x1E4
	::System::Single Field_3_19; // 0x1E8
	::UnityEngine::Vector3 Field_3_34; // 0x1EC
	::System::Single Field_3_12; // 0x1F8
	::Class_1_43BD383C98B4C0C5_55_Enum_3_AC46235E222DC7EE Field_3_78; // 0x1FC
	::System::Single Field_3_35; // 0x200
	::Enum_3_470312FC6BAE7111 Field_3_54; // 0x204
	::UnityEngine::RigidbodyConstraints Field_3_44; // 0x208
	::UnityEngine::Vector3 Field_3_32; // 0x20C
	::UnityEngine::Vector3 Field_3_43; // 0x218
	::System::Int32 Field_3_47; // 0x224
	::UnityEngine::Quaternion Field_3_38; // 0x228
	::System::Single Field_3_56; // 0x238
	::System::Boolean Field_3_72; // 0x23C
	::System::Boolean Field_3_85; // 0x23D
	::System::Boolean Field_3_48; // 0x23E
	::System::Boolean Field_3_62; // 0x23F
	::System::Single Field_3_36; // 0x240
	::UnityEngine::Vector3 Field_3_39; // 0x244
	::Enum_3_1F6F50F7EA3A718F Field_3_69; // 0x250
	::Enum_3_CDC95A71D07E3BF9 Field_3_65; // 0x254
	::UnityEngine::PhysicMaterialCombine Field_3_13; // 0x258
	::System::Boolean Field_3_59; // 0x25C
	::System::Boolean Field_3_64; // 0x25D
	::System::Boolean Field_3_22; // 0x25E
	::System::Boolean Field_3_53; // 0x25F
	::System::Boolean Field_3_80; // 0x260
	::System::Boolean Field_3_42; // 0x261
	::System::Boolean Field_3_40; // 0x262
	::System::Boolean Field_3_71; // 0x263
	::System::Boolean Field_3_98; // 0x264
	::System::Boolean Field_3_87; // 0x265
	::System::Boolean Field_3_81; // 0x266
	::System::Boolean Field_3_41; // 0x267
	::UnityEngine::Vector3 Field_3_84; // 0x268
	::System::Single Field_3_52; // 0x274
	::UnityEngine::Vector3 Field_3_33; // 0x278
	::System::Single Field_3_28; // 0x284
	::System::Int32 Field_3_58; // 0x288
	::System::Single Field_3_57; // 0x28C
	::System::Boolean Field_3_49; // 0x290
	::System::Boolean Field_3_50; // 0x291
	::System::Boolean Field_3_96; // 0x292
	::System::Boolean Field_3_97; // 0x293

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_GETCLASSID_OFFSET))(this);
	}

	::Struct_2_9F85650CFFBE9F44 Method_3_87411ABA28C869BA()
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_87411ABA28C869BA_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_36CD98119ACA0760()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_36CD98119ACA0760_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_3_0C751C8A589949D9()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_0C751C8A589949D9_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Boolean Method_3_5051C7AA85CC2F2F(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_5051C7AA85CC2F2F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_4B7C6EEEB8A18584(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B7C6EEEB8A18584_OFFSET))(this, a1);
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_3CAC93BF77250DAD_OFFSET))(this);
	}

	::System::Void Method_3_5E38FB42EB536FCC(::System::Boolean a1, ::Class_1_43BD383C98B4C0C5_55_Enum_3_AC46235E222DC7EE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_55_Enum_3_AC46235E222DC7EE))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_5E38FB42EB536FCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_EE69EBBB80E49CCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_EE69EBBB80E49CCB_OFFSET))(this);
	}

	::System::Void Method_3_7756ACA055CA21F1(::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_7756ACA055CA21F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_3_7643C93EB2703847(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::System::String*>* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_7643C93EB2703847_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_3_E63137AC0C60FCB8()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_E63137AC0C60FCB8_OFFSET))(this);
	}

	::MoleMole::MonoEntityColliderManager* Method_3_35145442102AACA9()
	{
		return ((::MoleMole::MonoEntityColliderManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_35145442102AACA9_OFFSET))(this);
	}

	::System::Void Method_3_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_10FFF5D129383396_OFFSET))(this, a1);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_B556EADFE34BD60F_OFFSET))(this);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_635C67DDE42E54E3()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_635C67DDE42E54E3_OFFSET))(this);
	}

	::System::Void Method_3_4B3B6DD9DA3AFCE1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Foundation::AssetPath a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::MoleMole::MonoEntityModelModifier* a8, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B3B6DD9DA3AFCE1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::UnityEngine::Vector3 Method_3_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FA662896843C137A_OFFSET))(this);
	}

	::System::Boolean Method_3_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_9809C99861C91775_OFFSET))(this);
	}

	::System::Void Method_3_06954E47E3B4071B(::MoleMole::MonoEntityModelModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_06954E47E3B4071B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E79472363E1B781C(::MoleMole::GameplayTag a1, ::Class_1_CB7F0487F7A6164A*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::Class_1_CB7F0487F7A6164A*&))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_E79472363E1B781C_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_3_B1493154BFDD83C6(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_B1493154BFDD83C6_OFFSET))(a1);
	}

	::Il2CppArray<::UnityEngine::Light*>* Method_3_C09A902625D2FD94()
	{
		return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_C09A902625D2FD94_OFFSET))(this);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_7EAB5CEB1D55A5C6()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_7EAB5CEB1D55A5C6_OFFSET))(this);
	}

	::System::Void Method_3_09A5B922DFB39D6C(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_09A5B922DFB39D6C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_3_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}

	::System::Void Method_3_1E082DBF317F50B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_1E082DBF317F50B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B4CDB1B15D31FE08(::Il2CppArray<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_B4CDB1B15D31FE08_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	static ::Class_3_C93CC3D2C2AC4067* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C93CC3D2C2AC4067*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Collider* Method_3_3CAC93BF77250DAD_1()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_3CAC93BF77250DAD_1_OFFSET))(this);
	}

	::Foundation::AssetPath Method_3_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_5B0743536553688C_OFFSET))(this);
	}

	::System::Void Method_3_2A0E11E465D000F5(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*& a1, ::System::Boolean a2, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*&, ::System::Boolean, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_2A0E11E465D000F5_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::MonoEntityModelModifier* Method_3_D92CD016FBDE5B70()
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_D92CD016FBDE5B70_OFFSET))(this);
	}

	::System::Void Method_3_63106102B3972D90(::Class_1_CB7F0487F7A6164A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_63106102B3972D90_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Method_3_4B74C77F562980F8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_4B74C77F562980F8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::System::Void Method_3_8ED0B5D9B2E0D6ED(::Il2CppArray<::UnityEngine::Light*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_8ED0B5D9B2E0D6ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_DEE3EF9E11427E82(::MoleMole::MonoEntityColliderManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_DEE3EF9E11427E82_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_1_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_73052712910A9EE7_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_2_OFFSET))(this);
	}

	::System::Void Method_3_8F9716FCC554E5F2(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_8F9716FCC554E5F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F9716FCC554E5F2_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_8F9716FCC554E5F2_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_FC3412FBE755AC36(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FC3412FBE755AC36_OFFSET))(a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::System::Boolean Method_3_430594AFB700385E(::UnityEngine::GameObject* a1, ::Struct_2_9F85650CFFBE9F44& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Struct_2_9F85650CFFBE9F44&))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_430594AFB700385E_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_3_8C90C775EAE86885(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_8C90C775EAE86885_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_3_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_488A9656C33E5F20()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_488A9656C33E5F20_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C93CC3D2C2AC4067_METHOD_3_FF11A7936E830212_4_OFFSET))(this);
	}
};
