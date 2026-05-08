#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_61A5922E5046F385_Enum_3_3119526234CAAED0.h"
#include "unitysdk/Class_3_61A5922E5046F385_Enum_3_E999981806F69BE8.h"
#include "unitysdk/Struct_2_315B161BC0C52EFD.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_208CC9941471731A_345;
class Class_2_208CC9941471731A_843;
class Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_5;
class Class_2_9E8CD0C1037EB98E_11;
class Class_2_AAB5566438F6F9C2;
class Class_2_C162E620AE258C19;
class Class_3_F61F3C9E55A83BDE;
class StaticGrid2D;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class HotpotPhysicsInfo; }
namespace MoleMole::Battle { class HotpotRenderInfo; }
namespace MoleMole::Config { class ConfigHotPotFoodAssets; }
namespace System { class Random; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class EdgeCollider2D; }

#define CLASS_3_61A5922E5046F385_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x108DBD00)
#define CLASS_3_61A5922E5046F385_METHOD_3_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x108DBDF0)
#define CLASS_3_61A5922E5046F385_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x108DBAD0)
#define CLASS_3_61A5922E5046F385_METHOD_3_3E6B2EC3119464F0_OFFSET UNITYSDK_OFFSET(0x108DC030)
#define CLASS_3_61A5922E5046F385_METHOD_3_531B361C81A63E57_OFFSET UNITYSDK_OFFSET(0x108DBE80)
#define CLASS_3_61A5922E5046F385_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x108DBFA0)
#define CLASS_3_61A5922E5046F385_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x108DBF50)
#define CLASS_3_61A5922E5046F385_METHOD_3_ABBFAD35057D3430_1_OFFSET UNITYSDK_OFFSET(0x108DBE20)
#define CLASS_3_61A5922E5046F385_METHOD_3_ABBFAD35057D3430_OFFSET UNITYSDK_OFFSET(0x108DBEA0)
#define CLASS_3_61A5922E5046F385_METHOD_3_BFFD298D632A84BA_OFFSET UNITYSDK_OFFSET(0x108DBE40)
#define CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x108DBA10)
#define CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x108DBBE0)
#define CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x108DBC40)
#define CLASS_3_61A5922E5046F385_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x108DBEC0)
#define CLASS_3_61A5922E5046F385_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x108DB650)
#define CLASS_3_61A5922E5046F385__CCTOR_OFFSET UNITYSDK_OFFSET(0x108DBD50)
#define CLASS_3_61A5922E5046F385__CTOR_OFFSET UNITYSDK_OFFSET(0x108DBDD0)

inline static constexpr unsigned int Class_3_61A5922E5046F385_TypeDefinitionIndex = 42248;

class Class_3_61A5922E5046F385 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::Int32 Field_3_19 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_3_43 = 0x32; // 0x0
	// static const ::System::Int32 Field_3_44 = 0x9C4; // 0x0
	// static const ::System::Int32 Field_3_67 = 0xB5; // 0x0
	::UnityEngine::CircleCollider2D* Field_3_39; // 0x48
	::StaticGrid2D* Field_3_40; // 0x50
	::Class_2_AAB5566438F6F9C2* Field_3_0; // 0x58
	::System::Action_2<::MoleMole::Battle::Entity*, ::System::Single>* Field_3_51; // 0x60
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_49; // 0x68
	::System::Random* Field_3_12; // 0x70
	::MoleMole::Battle::HotpotPhysicsInfo* Field_3_9; // 0x78
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider2D*>* Field_3_13; // 0x80
	::System::Action_2<::System::Single, ::System::Single>* Field_3_50; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_37; // 0x90
	::UnityEngine::AnimationCurve* Field_3_3; // 0x98
	::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* Field_3_35; // 0xA0
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Single, ::System::Boolean>* Field_3_53; // 0xA8
	::MoleMole::Config::ConfigHotPotFoodAssets* Field_3_34; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_5*>* Field_3_66; // 0xB8
	::Class_2_208CC9941471731A_843* Field_3_65; // 0xC0
	::Class_2_C162E620AE258C19* Field_3_1; // 0xC8
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_48; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_28; // 0xD8
	::Class_2_9E8CD0C1037EB98E_11* Field_3_2; // 0xE0
	::MoleMole::Battle::HotpotRenderInfo* Field_3_10; // 0xE8
	::Class_2_208CC9941471731A_345* Field_3_60; // 0xF0
	::System::Random* Field_3_7; // 0xF8
	::System::Action_1<::System::Boolean>* Field_3_52; // 0x100
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2>* Field_3_42; // 0x108
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_3_41; // 0x110
	::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Single>* Field_3_33; // 0x118
	::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* Field_3_47; // 0x120
	::Class_3_61A5922E5046F385_Enum_3_E999981806F69BE8 Field_3_15; // 0x128
	::System::Int32 Field_3_61; // 0x12C
	::System::Single Field_3_55; // 0x130
	::System::Int32 Field_3_31; // 0x134
	::System::Single Field_3_58; // 0x138
	::System::Int32 Field_3_6; // 0x13C
	::System::Int32 Field_3_62; // 0x140
	::System::Single Field_3_45; // 0x144
	::Struct_2_315B161BC0C52EFD Field_3_14; // 0x148
	::System::Int32 Field_3_27; // 0x1D0
	::System::Int32 Field_3_5; // 0x1D4
	::System::Int32 Field_3_29; // 0x1D8
	::System::Int32 Field_3_20; // 0x1DC
	::System::Int32 Field_3_25; // 0x1E0
	::System::Single Field_3_57; // 0x1E4
	::System::Int32 Field_3_32; // 0x1E8
	::System::Int32 Field_3_23; // 0x1EC
	::System::Single Field_3_46; // 0x1F0
	::System::Int32 Field_3_26; // 0x1F4
	::System::Int32 Field_3_22; // 0x1F8
	::System::Int32 Field_3_17; // 0x1FC
	::System::Boolean Field_3_30; // 0x200
	::System::Boolean Field_3_64; // 0x201
	::System::Boolean Field_3_24; // 0x202
	::System::Boolean Field_3_36; // 0x203
	::System::Single Field_3_59; // 0x204
	::System::Single Field_3_4; // 0x208
	::Class_3_61A5922E5046F385_Enum_3_3119526234CAAED0 Field_3_38; // 0x20C
	::System::Boolean Field_3_56; // 0x210
	::System::Boolean Field_3_54; // 0x211
	::System::Boolean Field_3_16; // 0x212
	::System::Boolean Field_3_21; // 0x213
	::System::Int32 Field_3_63; // 0x214
	::System::Int32 Field_3_18; // 0x218
	::System::Int32 Field_3_11; // 0x21C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_GETCLASSID_OFFSET))(this);
	}

	::System::Single Method_3_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_3150507749BCEAEC_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_3_BFFD298D632A84BA()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_BFFD298D632A84BA_OFFSET))(this);
	}

	::UnityEngine::EdgeCollider2D* Method_3_531B361C81A63E57()
	{
		return ((::UnityEngine::EdgeCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_531B361C81A63E57_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::UnityEngine::CircleCollider2D* Method_3_ABBFAD35057D3430()
	{
		return ((::UnityEngine::CircleCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_ABBFAD35057D3430_OFFSET))(this);
	}

	::UnityEngine::CircleCollider2D* Method_3_ABBFAD35057D3430_1()
	{
		return ((::UnityEngine::CircleCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_ABBFAD35057D3430_1_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_3E6B2EC3119464F0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_3E6B2EC3119464F0_OFFSET))(this);
	}
};
