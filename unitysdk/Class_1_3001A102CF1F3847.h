#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3001A102CF1F3847__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CBA0)

inline static constexpr unsigned int Class_1_3001A102CF1F3847_TypeDefinitionIndex = 33734;

class Class_1_3001A102CF1F3847 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingDamageType Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3001A102CF1F3847__CTOR_OFFSET))(this);
	}
};
