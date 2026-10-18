#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_08C6C0ABAF0F06B3;
class Class_1_49AB19924B4FCC28;
class Class_1_68DDCD4A4411AB4A;
class Class_2_4C1AAFE95CDED36F;
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_79FDB8462300CC5F_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x164D4BD0)
#define CLASS_1_79FDB8462300CC5F_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164D4BE0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x164D5140)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x164D4BC0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x164D9330)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x164D9690)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x164D81B0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x164D60E0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x164D97A0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x164D8DF0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x164D5030)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x164D6E10)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x164D9750)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x164D8120)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x164D9B20)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x164D7250)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x164D7EE0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x164D6F40)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x164D7840)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x164D6C70)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x164D8690)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x164D4F70)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x164D7E10)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x164D9460)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x164D6260)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x164D61C0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x164D9600)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_C3BC9CC73DC581D8_OFFSET UNITYSDK_OFFSET(0x164D79A0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x164D7C10)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x164D8DB0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x164D9A70)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x164D5640)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x164D4BF0)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x164D6310)
#define CLASS_1_79FDB8462300CC5F_METHOD_1_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x164D6BE0)
#define CLASS_1_79FDB8462300CC5F_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x164D9210)
#define CLASS_1_79FDB8462300CC5F__CTOR_OFFSET UNITYSDK_OFFSET(0x164D4C00)
#define CLASS_1_79FDB8462300CC5F__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x164D9CB0)

inline static constexpr unsigned int Class_1_79FDB8462300CC5F_TypeDefinitionIndex = 69215;

class Class_1_79FDB8462300CC5F : public ::System::Object
{
public:
	// static const ::System::Single INLGOFJHAKD; // 0x0
	// static const ::System::Single HFFCGDLMOLE; // 0x0
	// static const ::System::Single EKHJIFJBBCJ; // 0x0
	// static const ::System::Single KBEEMOFCOCE; // 0x0
	// static const ::System::Single CFGCPDGFEHC; // 0x0
	// static const ::System::Single KMNAKCDIJHB; // 0x0
	// static const ::System::Single JIJIPAADPCD; // 0x0
	// static const ::System::Single DOFJBDFCIIB; // 0x0
	::Class_1_68DDCD4A4411AB4A* BOIIFBOHNCH; // 0x10
	::Class_2_4C1AAFE95CDED36F* LNJHBFDBLJN; // 0x18
	::Class_1_08C6C0ABAF0F06B3* ECKLOOLFCNO; // 0x20
	::RPG::GameCore::NpcWalkStyleWeightInfo* EMACJMPOIIA; // 0x28
	::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x30
	::UnityEngine::Transform* BFPEBHOHFGK; // 0x38
	::System::Action_1<::System::UInt32>* KJFJCIFMACB; // 0x40
	::System::String* LGPJHEABONH; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* INMIMFKNKJF; // 0x50
	::Class_1_49AB19924B4FCC28* AJIHEFMLGJM; // 0x58
	::System::Action_1<::Class_1_79FDB8462300CC5F*>* LEEEFJLOCBA; // 0x60
	::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x68
	::RPG::GameCore::TransformComponent* PPLDOKDKOOE; // 0x70
	::RPG::Client::NpcBodySizeInfo* FLPEFKEJNJH; // 0x78
	::System::String* BJABJJNPNFD; // 0x80
	::System::Single NGBIPLOKAOE; // 0x88
	::System::Single LHPBGBLGADG; // 0x8C
	::RPG::Client::PedestrianState NNKMIKNIELL; // 0x90
	::System::Single PFCMKIMALJB; // 0x94
	::System::Boolean NPEMLPCDKGK; // 0x98
	::System::Boolean JICGNPBCLAP; // 0x99
	::System::Single NFKFCPJKFEB; // 0x9C
	::System::Single IEKGFDOOBKE; // 0xA0
	::System::Boolean LFKHNMLCNEI; // 0xA4
	::System::Boolean PHKEOKGOPEO; // 0xA5
	::System::Boolean KHCDHHFKGOB; // 0xA6
	::System::Boolean BGJFGKGKCEB; // 0xA7
	::System::Single CMHOIHDNDNO; // 0xA8
	::System::Single FECBHFMFGPE; // 0xAC
	::System::UInt32 NCINJANBEBB; // 0xB0
	::System::Int32 MHAPHMCJIGA; // 0xB4
	::UnityEngine::Vector3 PABJCPDCMNA; // 0xB8
	::UnityEngine::Vector3 ADAMLNOKDPM; // 0xC4
	::System::Int32 BHGIOJNHLJA; // 0xD0
	::UnityEngine::Vector3 LOLMFMLEEMF; // 0xD4
	::System::Int32 PHFBFKNPMEC; // 0xE0
	::System::Single IKMIGMBFLKO; // 0xE4

	::System::Void _ctor(::Class_1_08C6C0ABAF0F06B3* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_79FDB8462300CC5F*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08C6C0ABAF0F06B3*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_79FDB8462300CC5F*>*))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::RPG::Client::PedestrianState Method_1_E3086F0683D5B483()
	{
		return ((::RPG::Client::PedestrianState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_E3086F0683D5B483_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71D24CBD28AD4C4C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_71D24CBD28AD4C4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52586E276C6A6CBC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_52586E276C6A6CBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3BC9CC73DC581D8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_C3BC9CC73DC581D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7070D18308CCB7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_C7070D18308CCB7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B2CC38D584B3558(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_7B2CC38D584B3558_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_49AB19924B4FCC28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AB19924B4FCC28*))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_DDBE75BF5FCD9E90(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_DDBE75BF5FCD9E90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_235C0B27B40250B3(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_235C0B27B40250B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_F773D945760BF918_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_71EC472A4A552FD7(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_71EC472A4A552FD7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_3358AD9145B4FD7E(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_3358AD9145B4FD7E_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_1F5E8B49C371604B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_1F5E8B49C371604B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CF1BF9704A16F81(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_2CF1BF9704A16F81_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _Hide_b__58_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79FDB8462300CC5F__HIDE_B__58_0_OFFSET))(this);
	}
};
