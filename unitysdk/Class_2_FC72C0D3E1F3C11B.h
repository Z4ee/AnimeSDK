#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CruiseSpeedSignType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/SoftDeathAreaState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
class Class_1_D62C2C8EAA687B3C;
class Class_1_E856DAA70D46D1F2;
class Class_3_0EDBB2B883C2F751;
class Class_3_5ABE204154916C7E;
class Class_3_8B57DFB805B12037;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14270A50)
#define CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0x14272E10)
#define CLASS_2_FC72C0D3E1F3C11B_GET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0x14272DF0)
#define CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x142706C0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET UNITYSDK_OFFSET(0x14270740)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET UNITYSDK_OFFSET(0x14270BB0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_1CF89D3CEE1EA9A8_OFFSET UNITYSDK_OFFSET(0x14272190)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x142728E0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET UNITYSDK_OFFSET(0x14272560)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0x142701A0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_3F5050FAC70B4F39_OFFSET UNITYSDK_OFFSET(0x142723C0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_72477F3C8A89CA9B_OFFSET UNITYSDK_OFFSET(0x14271CF0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x142719C0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x14272600)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x14272960)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x1426FB90)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0x14270520)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14270120)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14271C90)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_DF33CDF4C5AC49DB_OFFSET UNITYSDK_OFFSET(0x142724F0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E3B09F64FC02B8C2_OFFSET UNITYSDK_OFFSET(0x14272750)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E45E3D951D39B180_OFFSET UNITYSDK_OFFSET(0x142729D0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E53F85027BE01D72_OFFSET UNITYSDK_OFFSET(0x1426FEE0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_EB35C35EEF5C3CC0_OFFSET UNITYSDK_OFFSET(0x14271180)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14270110)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0x142726D0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_FACE598724AB5897_OFFSET UNITYSDK_OFFSET(0x14271110)
#define CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0x14272E30)
#define CLASS_2_FC72C0D3E1F3C11B_SET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0x14272E00)
#define CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET UNITYSDK_OFFSET(0x1426FAC0)
#define CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET UNITYSDK_OFFSET(0x14272E40)

inline static constexpr unsigned int Class_2_FC72C0D3E1F3C11B_TypeDefinitionIndex = 55073;

class Class_2_FC72C0D3E1F3C11B : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::UnityEngine::AnimationCurve* Field_2_2; // 0x28
	::Class_1_D27BF54F25500E5F* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::Class_1_E856DAA70D46D1F2* Field_2_5; // 0x40
	::UnityEngine::AnimationCurve* Field_2_6; // 0x48
	::Class_1_E856DAA70D46D1F2* Field_2_7; // 0x50
	::RPG::GameCore::GameEntity* Field_2_8; // 0x58
	::Class_1_D62C2C8EAA687B3C* Field_2_9; // 0x60
	::System::Int32 Field_2_10; // 0x68
	::RPG::MVector3 _AnimMotionDelta_k__BackingField; // 0x6C
	::System::Boolean Field_2_12; // 0x78
	::System::Single Field_2_13; // 0x7C
	::System::Int32 _LastDirectionFlag_k__BackingField; // 0x80
	::System::Int32 Field_2_15; // 0x84
	::System::Single Field_2_16; // 0x88
	::UnityEngine::Vector3 Field_2_17; // 0x8C
	::UnityEngine::Vector3 Field_2_18; // 0x98
	::RPG::GameCore::StringHash Field_2_19; // 0xA4
	::System::Single Field_2_20; // 0xA8
	::RPG::GameCore::SoftDeathAreaState Field_2_21; // 0xAC
	::System::Single Field_2_22; // 0xB0
	::System::Int32 Field_2_23; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7B0EF5061C2B565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_A7B0EF5061C2B565_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_06CACEC01F21D60D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_0EDBB2B883C2F751* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::Class_3_0EDBB2B883C2F751*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EB35C35EEF5C3CC0(::RPG::GameCore::TaskContext* a1, ::Class_3_5ABE204154916C7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5ABE204154916C7E*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_EB35C35EEF5C3CC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_72477F3C8A89CA9B(::RPG::GameCore::TaskContext* a1, ::Class_3_8B57DFB805B12037* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8B57DFB805B12037*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_72477F3C8A89CA9B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::OrbitAreaState Method_2_DF33CDF4C5AC49DB()
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_DF33CDF4C5AC49DB_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_2C6826E6663451CE(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FACE598724AB5897(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_FACE598724AB5897_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E53F85027BE01D72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E53F85027BE01D72_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F385090BF8DD2EE6(::Class_1_E856DAA70D46D1F2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F5050FAC70B4F39(::Class_1_E856DAA70D46D1F2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_3F5050FAC70B4F39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3B09F64FC02B8C2(::Class_1_E856DAA70D46D1F2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E3B09F64FC02B8C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1CF89D3CEE1EA9A8(::RPG::GameCore::CruiseSpeedSignType a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CruiseSpeedSignType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_1CF89D3CEE1EA9A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_34D5F4DBE622AF88(::Class_1_E856DAA70D46D1F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_E45E3D951D39B180(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E45E3D951D39B180_OFFSET))(this, a1);
	}

	::System::Void Method_2_068E873219CBBD31(::Class_1_E856DAA70D46D1F2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 get_LastDirectionFlag()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_GET_LASTDIRECTIONFLAG_OFFSET))(this);
	}

	::System::Void set_LastDirectionFlag(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_SET_LASTDIRECTIONFLAG_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_AnimMotionDelta()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET))(this);
	}

	::System::Void set_AnimMotionDelta(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}
};
