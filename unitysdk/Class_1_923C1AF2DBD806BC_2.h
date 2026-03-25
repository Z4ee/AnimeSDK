#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_923C1AF2DBD806BC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE478150)

inline static constexpr unsigned int Class_1_923C1AF2DBD806BC_2_TypeDefinitionIndex = 46441;

class Class_1_923C1AF2DBD806BC_2 : public ::System::Object
{
public:
	::System::UInt32 Field_1_7; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::RPG::GameCore::FixPoint Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_923C1AF2DBD806BC_2__CTOR_OFFSET))(this);
	}
};
