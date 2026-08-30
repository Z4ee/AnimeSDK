#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F7240)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_TypeDefinitionIndex = 40490;

class Class_1_6CE70F4211D79CD5 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint FKNINPFKNAK; // 0x10
	::RPG::GameCore::FixPoint MMNELBFMJOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5__CTOR_OFFSET))(this);
	}
};
