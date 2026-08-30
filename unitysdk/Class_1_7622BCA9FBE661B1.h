#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define CLASS_1_7622BCA9FBE661B1__CTOR_OFFSET UNITYSDK_OFFSET(0x15877A30)

inline static constexpr unsigned int Class_1_7622BCA9FBE661B1_TypeDefinitionIndex = 74009;

class Class_1_7622BCA9FBE661B1 : public ::System::Object
{
public:
	::RPG::Client::ActivityAlley::AlleyPackGoodData* CBLJEGOCBPG; // 0x10
	::UnityEngine::Vector3 OJKLFLEHLKO; // 0x18
	::UnityEngine::Vector3 LEJIAOECCDA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7622BCA9FBE661B1__CTOR_OFFSET))(this);
	}
};
