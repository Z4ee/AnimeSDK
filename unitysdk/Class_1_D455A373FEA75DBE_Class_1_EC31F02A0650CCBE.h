#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }

#define CLASS_1_D455A373FEA75DBE_CLASS_1_EC31F02A0650CCBE_METHOD_1_26468545B1F685E6_OFFSET UNITYSDK_OFFSET(0xF5C7920)
#define CLASS_1_D455A373FEA75DBE_CLASS_1_EC31F02A0650CCBE__CTOR_OFFSET UNITYSDK_OFFSET(0xF5C7910)

inline static constexpr unsigned int Class_1_D455A373FEA75DBE_Class_1_EC31F02A0650CCBE_TypeDefinitionIndex = 74062;

class Class_1_D455A373FEA75DBE_Class_1_EC31F02A0650CCBE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_CLASS_1_EC31F02A0650CCBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26468545B1F685E6(::MoleMole::Config::LevelShootGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_CLASS_1_EC31F02A0650CCBE_METHOD_1_26468545B1F685E6_OFFSET))(this, a1);
	}
};
