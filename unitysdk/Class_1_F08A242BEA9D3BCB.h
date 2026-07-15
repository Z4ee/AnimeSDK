#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_49AB19924B4FCC28;
class Class_1_68DDCD4A4411AB4A;
class Class_1_FD4389532621206D;
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

#define CLASS_1_F08A242BEA9D3BCB_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x179D91A0)
#define CLASS_1_F08A242BEA9D3BCB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x179D91B0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x179D9730)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179D9190)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x179DD950)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x179DDCB0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x179DC7C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x179DA6E0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x179DDDC0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x179DD410)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x179D9630)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x179DB410)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x179DDD70)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x179DC730)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x179DE150)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x179DB850)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x179DC4F0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x179DB540)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x179DBE50)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x179DB270)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x179DCCA0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x179D9570)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x179DC420)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x179DDA80)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x179DA860)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x179DA7C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x179DDC20)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BC9CC73DC581D8_OFFSET UNITYSDK_OFFSET(0x179DBFB0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C3BDA2C9135AD056_OFFSET UNITYSDK_OFFSET(0x179DB1E0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x179DC220)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179DD3D0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x179DE0A0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x179D9C30)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x179D91C0)
#define CLASS_1_F08A242BEA9D3BCB_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x179DA910)
#define CLASS_1_F08A242BEA9D3BCB_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x179DD830)
#define CLASS_1_F08A242BEA9D3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x179D91D0)
#define CLASS_1_F08A242BEA9D3BCB__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x179DE2E0)

inline static constexpr unsigned int Class_1_F08A242BEA9D3BCB_TypeDefinitionIndex = 66139;

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
	::Class_1_FD4389532621206D* Field_1_8; // 0x10
	::System::Action_1<::System::UInt32>* Field_1_9; // 0x18
	::System::Action_1<::Class_1_F08A242BEA9D3BCB*>* Field_1_10; // 0x20
	::RPG::Client::NpcBodySizeInfo* Field_1_11; // 0x28
	::Class_1_49AB19924B4FCC28* Field_1_12; // 0x30
	::RPG::GameCore::TransformComponent* Field_1_13; // 0x38
	::UnityEngine::Transform* Field_1_14; // 0x40
	::System::String* Field_1_15; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_16; // 0x50
	::RPG::Client::RootMotionHandler* Field_1_17; // 0x58
	::Class_2_36A4EB0E077FE274* Field_1_18; // 0x60
	::Class_1_68DDCD4A4411AB4A* Field_1_19; // 0x68
	::System::String* Field_1_20; // 0x70
	::RPG::GameCore::NpcWalkStyleWeightInfo* Field_1_21; // 0x78
	::RPG::GameCore::GameEntity* Field_1_22; // 0x80
	::System::Boolean Field_1_23; // 0x88
	::System::Boolean Field_1_24; // 0x89
	::System::Single Field_1_25; // 0x8C
	::System::Single Field_1_26; // 0x90
	::System::Boolean Field_1_27; // 0x94
	::System::Boolean Field_1_28; // 0x95
	::System::Boolean Field_1_29; // 0x96
	::System::Boolean Field_1_30; // 0x97
	::System::Int32 Field_1_31; // 0x98
	::System::Single Field_1_32; // 0x9C
	::System::Int32 Field_1_33; // 0xA0
	::UnityEngine::Vector3 Field_1_34; // 0xA4
	::System::UInt32 Field_1_35; // 0xB0
	::System::Single Field_1_36; // 0xB4
	::System::Single Field_1_37; // 0xB8
	::UnityEngine::Vector3 Field_1_38; // 0xBC
	::RPG::Client::PedestrianState Field_1_39; // 0xC8
	::System::Int32 Field_1_40; // 0xCC
	::UnityEngine::Vector3 Field_1_41; // 0xD0
	::System::Single Field_1_42; // 0xDC
	::System::Single Field_1_43; // 0xE0
	::System::Single Field_1_44; // 0xE4

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
