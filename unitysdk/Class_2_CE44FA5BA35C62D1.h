#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A045C90)
#define CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A045D00)

inline static constexpr unsigned int Class_2_CE44FA5BA35C62D1_TypeDefinitionIndex = 40945;

class Class_2_CE44FA5BA35C62D1 : public ::Class_1_43BD383C98B4C0C5_32
{
public:
	::RPG::GameCore::LittleGameEvent* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x2C
	::UnityEngine::Vector3 Field_2_5; // 0x30
	::System::Boolean Field_2_6; // 0x3C
	::System::UInt32 Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET))(this);
	}
};
