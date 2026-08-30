#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET UNITYSDK_OFFSET(0x1C613B50)

inline static constexpr unsigned int Class_1_1DA9BDA34D149C62_TypeDefinitionIndex = 42095;

class Class_1_1DA9BDA34D149C62 : public ::System::Object
{
public:
	::UnityEngine::Transform* HMNHLOMKCIF; // 0x10
	::System::Boolean CAGCHKJHMPD; // 0x18
	::System::Boolean IJCDEINGADN; // 0x19
	::RPG::Client::LittleGame::ChenLing::ChenLingCameraType GMPGDEINODK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET))(this);
	}
};
