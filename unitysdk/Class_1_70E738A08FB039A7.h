#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_70E738A08FB039A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF8A10)
#define CLASS_1_70E738A08FB039A7__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF8A60)

inline static constexpr unsigned int Class_1_70E738A08FB039A7_TypeDefinitionIndex = 38881;

class Class_1_70E738A08FB039A7 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_3; // 0x14
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::RPG::GameCore::Match3::BombType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70E738A08FB039A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70E738A08FB039A7_CLEAR_OFFSET))(this);
	}
};
