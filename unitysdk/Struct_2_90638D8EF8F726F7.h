#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/AnimationTwoBoneIKFlag.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_90638D8EF8F726F7_METHOD_2_759665772358223D_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define STRUCT_2_90638D8EF8F726F7_METHOD_2_C45C877399AC1AC1_OFFSET UNITYSDK_OFFSET(0x7A56A0)
#define STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x634110)
#define STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x634100)
#define STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x634120)
#define STRUCT_2_90638D8EF8F726F7__CTOR_OFFSET UNITYSDK_OFFSET(0x7A5670)

inline static constexpr unsigned int Struct_2_90638D8EF8F726F7_TypeDefinitionIndex = 55705;

struct alignas(4) Struct_2_90638D8EF8F726F7
{
	// static const ::System::Int32 Field_2_10 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x2; // 0x0
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x10
	::Struct_2_6402D4A3EAB8BDC8 Field_2_7; // 0x14
	::Struct_2_6402D4A3EAB8BDC8 Field_2_6; // 0x18
	::System::Single Field_2_5; // 0x1C
	::System::Single Field_2_4; // 0x20
	::MoleMole::Photo::AnimationTwoBoneIKFlag Field_2_11; // 0x24

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1, ::Struct_2_6402D4A3EAB8BDC8 a2, ::Struct_2_6402D4A3EAB8BDC8 a3, ::System::Single a4, ::System::Single a5, ::MoleMole::Photo::AnimationTwoBoneIKFlag a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8, ::Struct_2_6402D4A3EAB8BDC8, ::System::Single, ::System::Single, ::MoleMole::Photo::AnimationTwoBoneIKFlag))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	/*
	::System::Void Method_2_C45C877399AC1AC1(::Struct_2_63DDC2FA7A3D55CD& a1, ::Foundation::Unreal::FTransform3D a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_63DDC2FA7A3D55CD&, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_METHOD_2_C45C877399AC1AC1_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	/*
	::System::Void Method_2_759665772358223D(::NPCCrowd::Animation::FRefPose a1, ::UnityEngine::NapTransformData a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::NapTransformData, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_METHOD_2_759665772358223D_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
