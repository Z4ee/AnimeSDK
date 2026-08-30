#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AB790)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_1_TypeDefinitionIndex = 42097;

class Class_1_6CE70F4211D79CD5_1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_1__CTOR_OFFSET))(this);
	}
};
