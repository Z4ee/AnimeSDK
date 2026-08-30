#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_A8AC1AB191A5FBF8;

#define CLASS_1_02E726288C32E89A__CTOR_OFFSET UNITYSDK_OFFSET(0x16346920)

inline static constexpr unsigned int Class_1_02E726288C32E89A_TypeDefinitionIndex = 79223;

class Class_1_02E726288C32E89A : public ::System::Object
{
public:
	::Class_1_A8AC1AB191A5FBF8* HNEOOKPBCNK; // 0x10
	::RPG::GameCore::FixPoint DDFGEIEMAJK; // 0x18

	::System::Void _ctor(::Class_1_A8AC1AB191A5FBF8* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A8AC1AB191A5FBF8*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_02E726288C32E89A__CTOR_OFFSET))(this, a1, a2);
	}
};
