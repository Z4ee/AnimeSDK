#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_92407C22705A44E3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0B4B0)

inline static constexpr unsigned int Class_1_92407C22705A44E3_TypeDefinitionIndex = 38518;

class Class_1_92407C22705A44E3 : public ::System::Object
{
public:
	::RPG::GameCore::Match3::PieceTag Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92407C22705A44E3__CTOR_OFFSET))(this);
	}
};
