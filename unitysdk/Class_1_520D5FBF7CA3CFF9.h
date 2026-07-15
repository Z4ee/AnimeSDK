#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_520D5FBF7CA3CFF9__CTOR_OFFSET UNITYSDK_OFFSET(0x15271100)

inline static constexpr unsigned int Class_1_520D5FBF7CA3CFF9_TypeDefinitionIndex = 51803;

class Class_1_520D5FBF7CA3CFF9 : public ::System::Object
{
public:
	::RPG::GameCore::FixVec3 Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x28
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_520D5FBF7CA3CFF9__CTOR_OFFSET))(this);
	}
};
