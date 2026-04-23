#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_57CD7C248B8FA7D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_95AF281BFBCF5094_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902E110)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0x902E210)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0x902E230)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0x902E1F0)
#define CLASS_3_95AF281BFBCF5094_GET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x902E250)
#define CLASS_3_95AF281BFBCF5094_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0x902E290)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_030801B1E4FDF773_OFFSET UNITYSDK_OFFSET(0x902DC10)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x902E160)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x902D140)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_51C5D69F3BFF1AE1_OFFSET UNITYSDK_OFFSET(0x902E330)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x902E380)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_67FB6B6F658DE240_OFFSET UNITYSDK_OFFSET(0x902D190)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_8D81EB182A2461A8_OFFSET UNITYSDK_OFFSET(0x902D0D0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_90D2BBF963D1B557_OFFSET UNITYSDK_OFFSET(0x902E2D0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x902E2C0)
#define CLASS_3_95AF281BFBCF5094_METHOD_3_CC3E39D6B8130F8E_OFFSET UNITYSDK_OFFSET(0x902E2B0)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0x902E220)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0x902E240)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0x902E200)
#define CLASS_3_95AF281BFBCF5094_SET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x902E270)
#define CLASS_3_95AF281BFBCF5094_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0x902E2A0)
#define CLASS_3_95AF281BFBCF5094__CTOR_OFFSET UNITYSDK_OFFSET(0x902D0B0)
#define CLASS_3_95AF281BFBCF5094___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902E370)

inline static constexpr unsigned int Class_3_95AF281BFBCF5094_TypeDefinitionIndex = 52635;

class Class_3_95AF281BFBCF5094 : public ::Class_2_57CD7C248B8FA7D6
{
public:
	::System::Single _KinematicSpeed_k__BackingField; // 0x180
	::System::Single _KinematicAcceleration_k__BackingField; // 0x184
	::System::Nullable_1<::UnityEngine::Vector3> _OverrideMoveDeltaVector_k__BackingField; // 0x188
	::UnityEngine::Vector3 _KinematicVelocity_k__BackingField; // 0x198
	::System::Single _KinematicDeceleration_k__BackingField; // 0x1A4

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D81EB182A2461A8(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_8D81EB182A2461A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_4358F70A163BCEAE_OFFSET))(this);
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

	::System::Void set_KinematicSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICSPEED_OFFSET))(this, value);
	}

	::System::Single get_KinematicAcceleration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICACCELERATION_OFFSET))(this);
	}

	::System::Void set_KinematicAcceleration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICACCELERATION_OFFSET))(this, value);
	}

	::System::Single get_KinematicDeceleration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICDECELERATION_OFFSET))(this);
	}

	::System::Void set_KinematicDeceleration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICDECELERATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_KinematicVelocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_KINEMATICVELOCITY_OFFSET))(this);
	}

	::System::Void set_KinematicVelocity(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_KINEMATICVELOCITY_OFFSET))(this, value);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_OverrideMoveDeltaVector()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this);
	}

	::System::Void set_OverrideMoveDeltaVector(::System::Nullable_1<::UnityEngine::Vector3> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this, value);
	}

	::System::Void Method_3_CC3E39D6B8130F8E(::UnityEngine::GameObject* P0, ::UnityEngine::Rigidbody* P1, ::UnityEngine::CapsuleCollider* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_CC3E39D6B8130F8E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_3_932BC234D35144E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_932BC234D35144E8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_90D2BBF963D1B557(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_90D2BBF963D1B557_OFFSET))(this, P0, P1);
	}

	::UnityEngine::Vector3 Method_3_51C5D69F3BFF1AE1(::RPG::GameCore::CharacterInputData* P0, ::UnityEngine::Vector3 P1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_51C5D69F3BFF1AE1_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95AF281BFBCF5094_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
