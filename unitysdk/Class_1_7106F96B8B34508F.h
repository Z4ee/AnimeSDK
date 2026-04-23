#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightSoftStopReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7106F96B8B34508F_METHOD_1_5775F1311C3D4507_OFFSET UNITYSDK_OFFSET(0x17C85700)
#define CLASS_1_7106F96B8B34508F__CTOR_OFFSET UNITYSDK_OFFSET(0x17C858C0)

inline static constexpr unsigned int Class_1_7106F96B8B34508F_TypeDefinitionIndex = 34710;

class Class_1_7106F96B8B34508F : public ::System::Object
{
public:
	::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7106F96B8B34508F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5775F1311C3D4507(::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason))((::PBYTE)hIl2Cpp + CLASS_1_7106F96B8B34508F_METHOD_1_5775F1311C3D4507_OFFSET))(this, a1);
	}
};
