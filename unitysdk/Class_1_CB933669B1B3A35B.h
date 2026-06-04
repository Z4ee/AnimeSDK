#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CB933669B1B3A35B__CTOR_OFFSET UNITYSDK_OFFSET(0x137D2470)

inline static constexpr unsigned int Class_1_CB933669B1B3A35B_TypeDefinitionIndex = 50423;

class Class_1_CB933669B1B3A35B : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB933669B1B3A35B__CTOR_OFFSET))(this);
	}
};
