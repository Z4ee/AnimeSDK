#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0CB0)

inline static constexpr unsigned int Class_1_1DA9BDA34D149C62_TypeDefinitionIndex = 33696;

class Class_1_1DA9BDA34D149C62 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingCameraType Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_1; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA9BDA34D149C62__CTOR_OFFSET))(this);
	}
};
