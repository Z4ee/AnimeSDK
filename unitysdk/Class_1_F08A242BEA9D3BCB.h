#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_49AB19924B4FCC28;
class Class_1_68DDCD4A4411AB4A;
class Class_1_FD4389532621206D;
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

#define CLASS_1_F08A242BEA9D3BCB_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x18361750)
#define CLASS_1_F08A242BEA9D3BCB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18361760)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x18361CF0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18361740)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x18365E90)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x183661F0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x18364D30)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x18362C80)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x18366300)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x18365960)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18361BE0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x183639A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x183662B0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18364CA0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x18366680)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x18363DE0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18364A70)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x18363AD0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x183643D0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x18363800)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x18365200)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x18361B20)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x183649A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x18365FC0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x18362E00)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x18362D60)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18366160)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BC9CC73DC581D8_OFFSET UNITYSDK_OFFSET(0x18364530)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x183647A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18365920)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x183665D0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x183621E0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x18361770)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x18362EB0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x18363770)
#define CLASS_1_F08A242BEA9D3BCB_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x18365D70)
#define CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18361780)
#define CLASS_1_F08A242BEA9D3BCB__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x18366810)

inline static constexpr unsigned int Class_1_F08A242BEA9D3BCB_TypeDefinitionIndex = 69179;

class Class_1_F08A242BEA9D3BCB : public ::System::Object
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
	::RPG::GameCore::NpcWalkStyleWeightInfo* EMACJMPOIIA; // 0x18
	::System::Action_1<::System::UInt32>* KJFJCIFMACB; // 0x20
	::RPG::GameCore::TransformComponent* PPLDOKDKOOE; // 0x28
	::System::String* BJABJJNPNFD; // 0x30
	::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* INMIMFKNKJF; // 0x40
	::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x48
	::UnityEngine::Transform* BFPEBHOHFGK; // 0x50
	::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* LEEEFJLOCBA; // 0x58
	::RPG::Client::NpcBodySizeInfo* FLPEFKEJNJH; // 0x60
	::Class_2_4C1AAFE95CDED36F* LNJHBFDBLJN; // 0x68
	::Class_1_FD4389532621206D* ECKLOOLFCNO; // 0x70
	::Class_1_49AB19924B4FCC28* AJIHEFMLGJM; // 0x78
	::System::String* LGPJHEABONH; // 0x80
	::System::Int32 MHAPHMCJIGA; // 0x88
	::UnityEngine::Vector3 ADAMLNOKDPM; // 0x8C
	::UnityEngine::Vector3 PABJCPDCMNA; // 0x98
	::System::Single IKMIGMBFLKO; // 0xA4
	::System::Single IEKGFDOOBKE; // 0xA8
	::System::Single CMHOIHDNDNO; // 0xAC
	::System::Single NFKFCPJKFEB; // 0xB0
	::System::UInt32 NCINJANBEBB; // 0xB4
	::UnityEngine::Vector3 LOLMFMLEEMF; // 0xB8
	::System::Single NGBIPLOKAOE; // 0xC4
	::System::Single PFCMKIMALJB; // 0xC8
	::System::Int32 PHFBFKNPMEC; // 0xCC
	::RPG::Client::PedestrianState NNKMIKNIELL; // 0xD0
	::System::Single FECBHFMFGPE; // 0xD4
	::System::Int32 BHGIOJNHLJA; // 0xD8
	::System::Boolean KHCDHHFKGOB; // 0xDC
	::System::Boolean JICGNPBCLAP; // 0xDD
	::System::Single LHPBGBLGADG; // 0xE0
	::System::Boolean BGJFGKGKCEB; // 0xE4
	::System::Boolean NPEMLPCDKGK; // 0xE5
	::System::Boolean PHKEOKGOPEO; // 0xE6
	::System::Boolean LFKHNMLCNEI; // 0xE7

	::System::Void _ctor(::Class_1_FD4389532621206D* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD4389532621206D*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_F08A242BEA9D3BCB*>*))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_1_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F08A242BEA9D3BCB_METHOD_1_F773D945760BF918_OFFSET))(this, a1);
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
