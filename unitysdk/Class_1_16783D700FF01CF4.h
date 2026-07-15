#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimNavTransitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define CLASS_1_16783D700FF01CF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1921DF00)

inline static constexpr unsigned int Class_1_16783D700FF01CF4_TypeDefinitionIndex = 61301;

class Class_1_16783D700FF01CF4 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::RPG::Client::FiveDimNavTransitType Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16783D700FF01CF4__CTOR_OFFSET))(this);
	}
};
