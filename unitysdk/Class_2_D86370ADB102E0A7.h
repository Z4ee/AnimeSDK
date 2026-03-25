#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBodyBipedChainBlender_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CLASS_2_D86370ADB102E0A7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8CF5F0)
#define CLASS_2_D86370ADB102E0A7__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CF710)

inline static constexpr unsigned int Class_2_D86370ADB102E0A7_TypeDefinitionIndex = 56019;

class Class_2_D86370ADB102E0A7 : public ::RPG::Client::FullBodyBipedChainBlender_1<::UnityEngine::Quaternion>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D86370ADB102E0A7__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Evaluate(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D86370ADB102E0A7_EVALUATE_OFFSET))(this, a1);
	}
};
