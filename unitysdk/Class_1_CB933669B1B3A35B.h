#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CB933669B1B3A35B__CTOR_OFFSET UNITYSDK_OFFSET(0x97BF990)

inline static constexpr unsigned int Class_1_CB933669B1B3A35B_TypeDefinitionIndex = 49756;

class Class_1_CB933669B1B3A35B : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_5; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::RPG::GameCore::FixPoint Field_1_4; // 0x28
	::RPG::GameCore::FixPoint Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB933669B1B3A35B__CTOR_OFFSET))(this);
	}
};
