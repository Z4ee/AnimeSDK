#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6E72FA7907D46962.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_95AF281BFBCF5094_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163D1270)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0x163D1370)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0x163D1390)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0x163D1350)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x163D13B0)
#define CLASS_3_95AF281BFBCF5094_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0x163D13F0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_030801B1E4FDF773_OFFSET UNITYSDK_OFFSET(0x163D0D70)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163D12C0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_67FB6B6F658DE240_OFFSET UNITYSDK_OFFSET(0x163D0290)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_8D81EB182A2461A8_OFFSET UNITYSDK_OFFSET(0x163D01D0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x163D0240)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0x163D1380)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0x163D13A0)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0x163D1360)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x163D13D0)
#define CLASS_3_95AF281BFBCF5094_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0x163D1400)
#define CLASS_3_95AF281BFBCF5094__CTOR_OFFSET UNITYSDK_OFFSET(0x163D01B0)

inline static constexpr unsigned int Class_3_95AF281BFBCF5094_TypeDefinitionIndex = 57271;

class Class_3_95AF281BFBCF5094 : public ::Class_2_6E72FA7907D46962
{
public:
	::UnityEngine::Vector3 _KinematicVelocity_k__BackingField; // 0x188
	::System::Single _KinematicDeceleration_k__BackingField; // 0x194
	::System::Single _KinematicSpeed_k__BackingField; // 0x198
	::System::Nullable_1<::UnityEngine::Vector3> _OverrideMoveDeltaVector_k__BackingField; // 0x19C
	::System::Single _KinematicAcceleration_k__BackingField; // 0x1AC

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D81EB182A2461A8(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_8D81EB182A2461A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_B799DB9989A18F1D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_67FB6B6F658DE240(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_67FB6B6F658DE240_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_030801B1E4FDF773(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_030801B1E4FDF773_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single get_KinematicSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICSPEED_OFFSET))(this);
	}

	::System::Void set_KinematicSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICSPEED_OFFSET))(this, a1);
	}

	::System::Single get_KinematicAcceleration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICACCELERATION_OFFSET))(this);
	}

	::System::Void set_KinematicAcceleration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICACCELERATION_OFFSET))(this, a1);
	}

	::System::Single get_KinematicDeceleration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICDECELERATION_OFFSET))(this);
	}

	::System::Void set_KinematicDeceleration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICDECELERATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_KinematicVelocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICVELOCITY_OFFSET))(this);
	}

	::System::Void set_KinematicVelocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICVELOCITY_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_OverrideMoveDeltaVector()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this);
	}

	::System::Void set_OverrideMoveDeltaVector(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this, a1);
	}
};
