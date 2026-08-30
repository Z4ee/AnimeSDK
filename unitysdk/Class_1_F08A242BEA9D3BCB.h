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

#define CLASS_1_F08A242BEA9D3BCB_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x16161390)
#define CLASS_1_F08A242BEA9D3BCB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x161613A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x16161940)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16161380)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x16165B20)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x16165E80)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x161649C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x161628E0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x16165F90)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x161655F0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16161820)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x16163610)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16165F40)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16164930)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16166310)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x16163A70)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16164700)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x16163740)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x16164060)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x16163470)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x16164E90)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x16161760)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x16164630)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x16165C50)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x16162A60)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x161629C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16165DF0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BC9CC73DC581D8_OFFSET UNITYSDK_OFFSET(0x161641C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x16164430)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161655B0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x16166260)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x16161E40)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x161613B0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x16162B10)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x161633D0)
#define CLASS_1_F08A242BEA9D3BCB_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x16165A00)
#define CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x161613C0)
#define CLASS_1_F08A242BEA9D3BCB__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x161664A0)

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
	::Class_1_08C6C0ABAF0F06B3* ECKLOOLFCNO; // 0x10
	::System::Action_1<::System::UInt32>* KJFJCIFMACB; // 0x18
	::RPG::GameCore::TransformComponent* PPLDOKDKOOE; // 0x20
	::Class_1_68DDCD4A4411AB4A* BOIIFBOHNCH; // 0x28
	::System::String* BJABJJNPNFD; // 0x30
	::Il2CppArray<::UnityEngine::Vector3>* INMIMFKNKJF; // 0x38
	::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x40
	::RPG::Client::NpcBodySizeInfo* FLPEFKEJNJH; // 0x48
	::Class_1_49AB19924B4FCC28* AJIHEFMLGJM; // 0x50
	::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* LEEEFJLOCBA; // 0x58
	::UnityEngine::Transform* BFPEBHOHFGK; // 0x60
	::System::String* LGPJHEABONH; // 0x68
	::RPG::GameCore::NpcWalkStyleWeightInfo* EMACJMPOIIA; // 0x70
	::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x78
	::Class_2_4C1AAFE95CDED36F* LNJHBFDBLJN; // 0x80
	::RPG::Client::PedestrianState NNKMIKNIELL; // 0x88
	::System::Single NGBIPLOKAOE; // 0x8C
	::System::Single PFCMKIMALJB; // 0x90
	::System::Single IEKGFDOOBKE; // 0x94
	::UnityEngine::Vector3 LOLMFMLEEMF; // 0x98
	::System::Single LHPBGBLGADG; // 0xA4
	::System::Single IKMIGMBFLKO; // 0xA8
	::System::Int32 PHFBFKNPMEC; // 0xAC
	::UnityEngine::Vector3 ADAMLNOKDPM; // 0xB0
	::System::Single CMHOIHDNDNO; // 0xBC
	::System::Single NFKFCPJKFEB; // 0xC0
	::System::Int32 MHAPHMCJIGA; // 0xC4
	::UnityEngine::Vector3 PABJCPDCMNA; // 0xC8
	::System::Single FECBHFMFGPE; // 0xD4
	::System::UInt32 NCINJANBEBB; // 0xD8
	::System::Int32 BHGIOJNHLJA; // 0xDC
	::System::Boolean KHCDHHFKGOB; // 0xE0
	::System::Boolean LFKHNMLCNEI; // 0xE1
	::System::Boolean PHKEOKGOPEO; // 0xE2
	::System::Boolean NPEMLPCDKGK; // 0xE3
	::System::Boolean JICGNPBCLAP; // 0xE4
	::System::Boolean BGJFGKGKCEB; // 0xE5

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
