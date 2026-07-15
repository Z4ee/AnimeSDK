#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_3__CTOR_OFFSET UNITYSDK_OFFSET(0x181A04C0)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_3_TypeDefinitionIndex = 51184;

class Class_1_6CE70F4211D79CD5_3 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_3__CTOR_OFFSET))(this);
	}
};
