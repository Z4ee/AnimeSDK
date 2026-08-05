#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneForwardAxis.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_174DD6C526C55821_OFFSET UNITYSDK_OFFSET(0x8818B0)
#define STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_789DC131C13A57D6_OFFSET UNITYSDK_OFFSET(0x1876F920)
#define STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_799229E9E196164F_OFFSET UNITYSDK_OFFSET(0x881880)
#define STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_EA25C544F6E9DE24_OFFSET UNITYSDK_OFFSET(0x881820)
#define STRUCT_2_4D1ACF3BA3E010AE__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_4D1ACF3BA3E010AE_TypeDefinitionIndex = 70336;

struct alignas(4) Struct_2_4D1ACF3BA3E010AE
{
	::Struct_2_6402D4A3EAB8BDC8 Field_2_1; // 0x10
	::MoleMole::Photo::LookAtBoneForwardAxis Field_2_0; // 0x14

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1, ::MoleMole::Photo::LookAtBoneForwardAxis a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::MoleMole::Photo::LookAtBoneForwardAxis))((::PBYTE)hIl2Cpp + STRUCT_2_4D1ACF3BA3E010AE__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Vector3 Method_2_EA25C544F6E9DE24(::NPCCrowd::Animation::FRefPose a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_EA25C544F6E9DE24_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_799229E9E196164F(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_799229E9E196164F_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_174DD6C526C55821(::Struct_2_63DDC2FA7A3D55CD& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&))((::PBYTE)hIl2Cpp + STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_174DD6C526C55821_OFFSET))(this, a1);
	}
	*/

	static ::Struct_2_6402D4A3EAB8BDC8 Method_2_789DC131C13A57D6(::Struct_2_4D1ACF3BA3E010AE a1)
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::Struct_2_4D1ACF3BA3E010AE))((::PBYTE)hIl2Cpp + STRUCT_2_4D1ACF3BA3E010AE_METHOD_2_789DC131C13A57D6_OFFSET))(a1);
	}
};
