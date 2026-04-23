#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingHPMemoryInfo; }

#define CLASS_1_8BED504FE562EF0B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5BF90)

inline static constexpr unsigned int Class_1_8BED504FE562EF0B_TypeDefinitionIndex = 39507;

class Class_1_8BED504FE562EF0B : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingHPMemoryInfo* Field_1_5; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::RPG::MVector2 Field_1_3; // 0x1C
	::System::Int32 Field_1_1; // 0x24
	::RPG::MVector2 Field_1_4; // 0x28
	::System::Int32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BED504FE562EF0B__CTOR_OFFSET))(this);
	}
};
