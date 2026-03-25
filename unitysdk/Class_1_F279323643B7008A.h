#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F279323643B7008A__CTOR_OFFSET UNITYSDK_OFFSET(0x16A4D500)

inline static constexpr unsigned int Class_1_F279323643B7008A_TypeDefinitionIndex = 33052;

class Class_1_F279323643B7008A : public ::System::Object
{
public:
	::System::Int32 Field_1_5; // 0x10
	::System::Single Field_1_2; // 0x14
	::RPG::GameCore::PingPongPatrolType Field_1_1; // 0x18
	::System::Single Field_1_6; // 0x1C
	::System::Int32 Field_1_4; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F279323643B7008A__CTOR_OFFSET))(this);
	}
};
