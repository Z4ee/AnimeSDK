#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FFB0)

inline static constexpr unsigned int Class_1_1DA9BDA34D149C62_TypeDefinitionIndex = 43737;

class Class_1_1DA9BDA34D149C62 : public ::System::Object
{
public:
	::UnityEngine::Transform* HMNHLOMKCIF; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingCameraType GMPGDEINODK; // 0x18
	::System::Boolean CAGCHKJHMPD; // 0x1C
	::System::Boolean IJCDEINGADN; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET))(this);
	}
};
