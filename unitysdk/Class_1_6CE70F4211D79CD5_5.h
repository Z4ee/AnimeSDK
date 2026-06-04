#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_5_METHOD_1_E871F2E11E93CDAD_OFFSET UNITYSDK_OFFSET(0x1434AE50)
#define CLASS_1_6CE70F4211D79CD5_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1434AE60)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_5_TypeDefinitionIndex = 51736;

class Class_1_6CE70F4211D79CD5_5 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DawnsEyeWeatherUIType Method_1_E871F2E11E93CDAD()
	{
		return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_5_METHOD_1_E871F2E11E93CDAD_OFFSET))(this);
	}
};
