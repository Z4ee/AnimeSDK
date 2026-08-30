#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9AE31BDED6887C6B_METHOD_1_0779AD1DC14CAFD4_OFFSET UNITYSDK_OFFSET(0x1657CE40)
#define CLASS_1_9AE31BDED6887C6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1657CEE0)

inline static constexpr unsigned int Class_1_9AE31BDED6887C6B_TypeDefinitionIndex = 79720;

class Class_1_9AE31BDED6887C6B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE31BDED6887C6B__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_0779AD1DC14CAFD4(::RPG::GameCore::MonsterEnergyBarNumColor a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarNumColor))((::PBYTE)hIl2Cpp + CLASS_1_9AE31BDED6887C6B_METHOD_1_0779AD1DC14CAFD4_OFFSET))(this, a1);
	}
};
