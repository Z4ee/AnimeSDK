#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D624E473F0226D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95A360)

inline static constexpr unsigned int Class_1_8D624E473F0226D5_TypeDefinitionIndex = 42933;

class Class_1_8D624E473F0226D5 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::RoadRash::ProjectileParams EJHODPJIFIN; // 0x10
	::System::Boolean HCOFMFKFMDK; // 0xA0
	::System::Boolean KMGIHDHMBJB; // 0xA1
	::System::Int32 OIHCEBCPPMJ; // 0xA4
	::System::Int32 IEBGNBBLFMD; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D624E473F0226D5__CTOR_OFFSET))(this);
	}
};
