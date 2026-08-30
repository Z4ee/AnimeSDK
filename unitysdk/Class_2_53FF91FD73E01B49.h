#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBodyBipedChainBlender_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_53FF91FD73E01B49_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19A04090)
#define CLASS_2_53FF91FD73E01B49__CTOR_OFFSET UNITYSDK_OFFSET(0x19A041F0)

inline static constexpr unsigned int Class_2_53FF91FD73E01B49_TypeDefinitionIndex = 68564;

class Class_2_53FF91FD73E01B49 : public ::RPG::Client::FullBodyBipedChainBlender_1<::UnityEngine::Vector3>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53FF91FD73E01B49__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Evaluate(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_53FF91FD73E01B49_EVALUATE_OFFSET))(this, a1);
	}
};
