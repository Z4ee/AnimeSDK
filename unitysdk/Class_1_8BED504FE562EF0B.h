#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingHPMemoryInfo; }

#define CLASS_1_8BED504FE562EF0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0EF10)

inline static constexpr unsigned int Class_1_8BED504FE562EF0B_TypeDefinitionIndex = 42105;

class Class_1_8BED504FE562EF0B : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingHPMemoryInfo* ILEEBALHOPM; // 0x10
	::System::Boolean BJNABCCHDFJ; // 0x18
	::RPG::MVector2 MFGPNLOLMAJ; // 0x1C
	::System::Int32 AIFJEHFDMPD; // 0x24
	::System::Int32 PLNFOGFFGCK; // 0x28
	::RPG::MVector2 NOFMIGAKELG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BED504FE562EF0B__CTOR_OFFSET))(this);
	}
};
