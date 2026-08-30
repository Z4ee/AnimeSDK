#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_4__CTOR_OFFSET UNITYSDK_OFFSET(0xF4077B0)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_4_TypeDefinitionIndex = 56028;

class Class_1_6CE70F4211D79CD5_4 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AAPOHKBAPFP; // 0x10
	::RPG::GameCore::FixPoint ENPFGCMCLPI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_4__CTOR_OFFSET))(this);
	}
};
