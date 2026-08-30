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

#define CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC401B40)
#define CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xC403F10)
#define CLASS_2_FC72C0D3E1F3C11B_GET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0xC403EF0)
#define CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC4017B0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET UNITYSDK_OFFSET(0xC401830)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET UNITYSDK_OFFSET(0xC401CA0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_13607D925023AE89_OFFSET UNITYSDK_OFFSET(0xC402270)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_1CF89D3CEE1EA9A8_OFFSET UNITYSDK_OFFSET(0xC403290)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xC403A00)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET UNITYSDK_OFFSET(0xC403660)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0xC401290)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_3F5050FAC70B4F39_OFFSET UNITYSDK_OFFSET(0xC4034C0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_72477F3C8A89CA9B_OFFSET UNITYSDK_OFFSET(0xC402DF0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xC402AC0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xC403710)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xC403A80)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0xC400C70)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0xC401610)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC401210)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC402D90)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_DF33CDF4C5AC49DB_OFFSET UNITYSDK_OFFSET(0xC4035F0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E3B09F64FC02B8C2_OFFSET UNITYSDK_OFFSET(0xC403870)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E45E3D951D39B180_OFFSET UNITYSDK_OFFSET(0xC403AE0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_E53F85027BE01D72_OFFSET UNITYSDK_OFFSET(0xC400FC0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC401200)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0xC4037F0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_FACE598724AB5897_OFFSET UNITYSDK_OFFSET(0xC402200)
#define CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xC403F30)
#define CLASS_2_FC72C0D3E1F3C11B_SET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0xC403F00)
#define CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET UNITYSDK_OFFSET(0xC400BA0)
#define CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET UNITYSDK_OFFSET(0xC403F50)

inline static constexpr unsigned int Class_2_FC72C0D3E1F3C11B_TypeDefinitionIndex = 57797;

class Class_2_FC72C0D3E1F3C11B : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_E856DAA70D46D1F2* ELHPNDFJBJB; // 0x18
	::System::String* KNFOCKAOEPD; // 0x20
	::UnityEngine::AnimationCurve* ANJLJICAKLE; // 0x28
	::System::String* PMGAOMKHAPF; // 0x30
	::RPG::GameCore::GameEntity* PALLHGIEPNJ; // 0x38
	::Class_1_E856DAA70D46D1F2* COMIPKMGLGF; // 0x40
	::System::String* MIPPBPEPDDK; // 0x48
	::UnityEngine::AnimationCurve* FNGLICACAHF; // 0x50
	::Class_1_D27BF54F25500E5F* CCDGFLFIEJP; // 0x58
	::Class_1_D62C2C8EAA687B3C* CDIDJDCHOEA; // 0x60
	::System::Single FKBKJDAIDNC; // 0x68
	::System::Single CKAHGFPOPCG; // 0x6C
	::System::Int32 MIBPLMILJKC; // 0x70
	::UnityEngine::Vector3 COKCDIJPKKE; // 0x74
	::System::Boolean BAFEMNFGPNC; // 0x80
	::System::Single CDCDJAMDHDC; // 0x84
	::System::Int32 _LastDirectionFlag_k__BackingField; // 0x88
	::System::Single HAECODGLOEH; // 0x8C
	::RPG::MVector3 _AnimMotionDelta_k__BackingField; // 0x90
	::System::Int32 NLGCHCLAKBO; // 0x9C
	::RPG::GameCore::StringHash KJMBMAOEIGO; // 0xA0
	::System::Int32 DGGFEHLANFN; // 0xA4
	::UnityEngine::Vector3 OGMHJBILMEG; // 0xA8
	::RPG::GameCore::SoftDeathAreaState FELFGEOJJFK; // 0xB4

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

	::System::Void Method_2_13607D925023AE89(::RPG::GameCore::TaskContext* a1, ::Class_3_5ABE204154916C7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5ABE204154916C7E*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_13607D925023AE89_OFFSET))(this, a1, a2);
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
