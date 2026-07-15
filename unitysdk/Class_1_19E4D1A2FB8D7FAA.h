#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMoneyConfig; }

#define CLASS_1_19E4D1A2FB8D7FAA__CTOR_OFFSET UNITYSDK_OFFSET(0x187DAFC0)

inline static constexpr unsigned int Class_1_19E4D1A2FB8D7FAA_TypeDefinitionIndex = 40882;

class Class_1_19E4D1A2FB8D7FAA : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimMoneyConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19E4D1A2FB8D7FAA__CTOR_OFFSET))(this);
	}
};
