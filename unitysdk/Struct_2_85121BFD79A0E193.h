#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneForwardAxis.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_85121BFD79A0E193_METHOD_2_174DD6C526C55821_OFFSET UNITYSDK_OFFSET(0x77DD40)
#define STRUCT_2_85121BFD79A0E193_METHOD_2_789DC131C13A57D6_OFFSET UNITYSDK_OFFSET(0x11F91520)
#define STRUCT_2_85121BFD79A0E193_METHOD_2_799229E9E196164F_OFFSET UNITYSDK_OFFSET(0x77DD10)
#define STRUCT_2_85121BFD79A0E193_METHOD_2_EA25C544F6E9DE24_OFFSET UNITYSDK_OFFSET(0x77DCB0)
#define STRUCT_2_85121BFD79A0E193__CTOR_OFFSET UNITYSDK_OFFSET(0x5DDCA0)

inline static constexpr unsigned int Struct_2_85121BFD79A0E193_TypeDefinitionIndex = 71453;

struct alignas(4) Struct_2_85121BFD79A0E193
{
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::MoleMole::Photo::LookAtBoneForwardAxis Field_2_2; // 0x18

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1, ::System::Single a2, ::MoleMole::Photo::LookAtBoneForwardAxis a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::System::Single, ::MoleMole::Photo::LookAtBoneForwardAxis))((::PBYTE)hIl2Cpp + STRUCT_2_85121BFD79A0E193__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Struct_2_6402D4A3EAB8BDC8 Method_2_789DC131C13A57D6(::Struct_2_85121BFD79A0E193 a1)
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::Struct_2_85121BFD79A0E193))((::PBYTE)hIl2Cpp + STRUCT_2_85121BFD79A0E193_METHOD_2_789DC131C13A57D6_OFFSET))(a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_EA25C544F6E9DE24(::NPCCrowd::Animation::FRefPose a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + STRUCT_2_85121BFD79A0E193_METHOD_2_EA25C544F6E9DE24_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_799229E9E196164F(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_85121BFD79A0E193_METHOD_2_799229E9E196164F_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_174DD6C526C55821(::Struct_2_63DDC2FA7A3D55CD& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&))((::PBYTE)hIl2Cpp + STRUCT_2_85121BFD79A0E193_METHOD_2_174DD6C526C55821_OFFSET))(this, a1);
	}
	*/
};
