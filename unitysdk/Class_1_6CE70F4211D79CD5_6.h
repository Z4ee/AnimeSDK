#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_6_METHOD_1_E871F2E11E93CDAD_OFFSET UNITYSDK_OFFSET(0x161400C0)
#define CLASS_1_6CE70F4211D79CD5_6__CTOR_OFFSET UNITYSDK_OFFSET(0x161400D0)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_6_TypeDefinitionIndex = 55585;

class Class_1_6CE70F4211D79CD5_6 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint IBNGJKBPMOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DawnsEyeWeatherUIType Method_1_E871F2E11E93CDAD()
	{
		return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_6_METHOD_1_E871F2E11E93CDAD_OFFSET))(this);
	}
};
