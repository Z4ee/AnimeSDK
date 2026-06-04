#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingHPMemoryInfo; }

#define CLASS_1_8BED504FE562EF0B__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD1E20)

inline static constexpr unsigned int Class_1_8BED504FE562EF0B_TypeDefinitionIndex = 40330;

class Class_1_8BED504FE562EF0B : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingHPMemoryInfo* Field_1_0; // 0x10
	::RPG::MVector2 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::RPG::MVector2 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BED504FE562EF0B__CTOR_OFFSET))(this);
	}
};
