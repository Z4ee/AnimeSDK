#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18D224D0)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_2_TypeDefinitionIndex = 40332;

class Class_1_6CE70F4211D79CD5_2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_2__CTOR_OFFSET))(this);
	}
};
