#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }

#define CLASS_1_F1EBB8C2BED43B17__CTOR_OFFSET UNITYSDK_OFFSET(0x18C125E0)

inline static constexpr unsigned int Class_1_F1EBB8C2BED43B17_TypeDefinitionIndex = 40257;

class Class_1_F1EBB8C2BED43B17 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* Field_1_0; // 0x10
	::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1EBB8C2BED43B17__CTOR_OFFSET))(this);
	}
};
