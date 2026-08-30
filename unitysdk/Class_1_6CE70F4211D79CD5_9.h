#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A417290)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_9_TypeDefinitionIndex = 71186;

class Class_1_6CE70F4211D79CD5_9 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint JHFIMKNMGED; // 0x10
	::RPG::GameCore::FixPoint CGLEPDDLJDE; // 0x18
	::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_9__CTOR_OFFSET))(this);
	}
};
