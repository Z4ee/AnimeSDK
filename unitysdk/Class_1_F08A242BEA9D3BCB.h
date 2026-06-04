#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_08C6C0ABAF0F06B3;
class Class_1_49AB19924B4FCC28;
class Class_1_68DDCD4A4411AB4A;
class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F08A242BEA9D3BCB_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x141E90F0)
#define CLASS_1_F08A242BEA9D3BCB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x141E9100)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x141E9690)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x141E90E0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x141ED880)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x141EDBD0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x141EC710)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x141EA640)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x141EDCE0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x141ED350)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x141E9580)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x141EB370)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x141EDC90)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x141EC680)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x141EE060)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x141EB7D0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x141EC450)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x141EB4A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x141EBDC0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x141EB1D0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x141ECBE0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x141E94C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x141EC380)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x141ED9B0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x141EA7C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x141EA720)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x141EDB40)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BC9CC73DC581D8_OFFSET UNITYSDK_OFFSET(0x141EBF20)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BDA2C9135AD056_OFFSET UNITYSDK_OFFSET(0x141EB130)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x141EC180)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141ED310)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x141EDFB0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x141E9B90)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x141E9110)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x141EA870)
#define CLASS_1_F08A242BEA9D3BCB_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x141ED760)
#define CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x141E9120)
#define CLASS_1_F08A242BEA9D3BCB__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x141EE1F0)

inline static constexpr unsigned int Class_1_F08A242BEA9D3BCB_TypeDefinitionIndex = 64738;

class Class_1_F08A242BEA9D3BCB : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::System::String* Field_1_8; // 0x10
	::Class_1_49AB19924B4FCC28* Field_1_9; // 0x18
	::RPG::Client::RootMotionHandler* Field_1_10; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_11; // 0x28
	::System::Action_1<::System::UInt32>* Field_1_12; // 0x30
	::Class_1_68DDCD4A4411AB4A* Field_1_13; // 0x38
	::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_14; // 0x40
	::RPG::GameCore::NpcWalkStyleWeightInfo* Field_1_15; // 0x48
	::System::String* Field_1_16; // 0x50
	::Class_1_08C6C0ABAF0F06B3* Field_1_17; // 0x58
	::RPG::Client::NpcBodySizeInfo* Field_1_18; // 0x60
	::UnityEngine::Transform* Field_1_19; // 0x68
	::RPG::GameCore::GameEntity* Field_1_20; // 0x70
	::RPG::GameCore::TransformComponent* Field_1_21; // 0x78
	::Class_2_36A4EB0E077FE274* Field_1_22; // 0x80
	::UnityEngine::Vector3 Field_1_23; // 0x88
	::System::Boolean Field_1_24; // 0x94
	::System::Boolean Field_1_25; // 0x95
	::System::Boolean Field_1_26; // 0x96
	::System::Boolean Field_1_27; // 0x97
	::System::Single Field_1_28; // 0x98
	::System::Single Field_1_29; // 0x9C
	::System::Single Field_1_30; // 0xA0
	::System::Single Field_1_31; // 0xA4
	::UnityEngine::Vector3 Field_1_32; // 0xA8
	::System::Int32 Field_1_33; // 0xB4
	::RPG::Client::PedestrianState Field_1_34; // 0xB8
	::System::Boolean Field_1_35; // 0xBC
	::System::Boolean Field_1_36; // 0xBD
	::System::Single Field_1_37; // 0xC0
	::System::UInt32 Field_1_38; // 0xC4
	::System::Int32 Field_1_39; // 0xC8
	::UnityEngine::Vector3 Field_1_40; // 0xCC
	::System::Single Field_1_41; // 0xD8
	::System::Single Field_1_42; // 0xDC
	::System::Int32 Field_1_43; // 0xE0
	::System::Single Field_1_44; // 0xE4

	::System::Void _ctor(::Class_1_08C6C0ABAF0F06B3* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08C6C0ABAF0F06B3*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>*))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::RPG::Client::PedestrianState Method_1_E3086F0683D5B483()
	{
		return ((::RPG::Client::PedestrianState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_E3086F0683D5B483_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71D24CBD28AD4C4C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_71D24CBD28AD4C4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52586E276C6A6CBC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_52586E276C6A6CBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3BC9CC73DC581D8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BC9CC73DC581D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7070D18308CCB7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_C7070D18308CCB7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B2CC38D584B3558(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_7B2CC38D584B3558_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_49AB19924B4FCC28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AB19924B4FCC28*))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_DDBE75BF5FCD9E90(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_DDBE75BF5FCD9E90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_235C0B27B40250B3(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_235C0B27B40250B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C3BDA2C9135AD056(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BDA2C9135AD056_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_71EC472A4A552FD7(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_71EC472A4A552FD7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_3358AD9145B4FD7E(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_3358AD9145B4FD7E_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_1F5E8B49C371604B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_1F5E8B49C371604B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CF1BF9704A16F81(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_2CF1BF9704A16F81_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _Hide_b__58_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB__HIDE_B__58_0_OFFSET))(this);
	}
};
