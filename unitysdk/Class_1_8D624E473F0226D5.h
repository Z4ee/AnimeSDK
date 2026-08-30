#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D624E473F0226D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FB070)

inline static constexpr unsigned int Class_1_8D624E473F0226D5_TypeDefinitionIndex = 41321;

class Class_1_8D624E473F0226D5 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::RoadRash::ProjectileParams EJHODPJIFIN; // 0x10
	::System::Int32 IEBGNBBLFMD; // 0xA0
	::System::Int32 OIHCEBCPPMJ; // 0xA4
	::System::Boolean KMGIHDHMBJB; // 0xA8
	::System::Boolean HCOFMFKFMDK; // 0xA9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D624E473F0226D5__CTOR_OFFSET))(this);
	}
};
