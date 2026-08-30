#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5C7F69784A5C81DE_METHOD_1_E871F2E11E93CDAD_OFFSET UNITYSDK_OFFSET(0x1066E1A0)
#define CLASS_1_5C7F69784A5C81DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1066E1B0)

inline static constexpr unsigned int Class_1_5C7F69784A5C81DE_TypeDefinitionIndex = 55587;

class Class_1_5C7F69784A5C81DE : public ::System::Object
{
public:
	::System::Boolean JIKMGAHLNMF; // 0x10
	::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DawnsEyeWeatherUIType Method_1_E871F2E11E93CDAD()
	{
		return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_METHOD_1_E871F2E11E93CDAD_OFFSET))(this);
	}
};
