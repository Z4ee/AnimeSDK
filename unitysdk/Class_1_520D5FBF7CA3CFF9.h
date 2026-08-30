#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_520D5FBF7CA3CFF9__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC2360)

inline static constexpr unsigned int Class_1_520D5FBF7CA3CFF9_TypeDefinitionIndex = 54487;

class Class_1_520D5FBF7CA3CFF9 : public ::System::Object
{
public:
	::System::UInt32 NJGKCPOOHDM; // 0x10
	::RPG::GameCore::FixVec3 PECPBEOHOJC; // 0x18
	::RPG::GameCore::FixPoint LCLKOMCBGJO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_520D5FBF7CA3CFF9__CTOR_OFFSET))(this);
	}
};
