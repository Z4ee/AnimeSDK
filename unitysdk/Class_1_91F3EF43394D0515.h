#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_91F3EF43394D0515_METHOD_1_17B91B8469618CCC_OFFSET UNITYSDK_OFFSET(0x120D21D0)

inline static constexpr unsigned int Class_1_91F3EF43394D0515_TypeDefinitionIndex = 46612;

class Class_1_91F3EF43394D0515 : public ::System::Object
{
public:
	static ::System::Void Method_1_17B91B8469618CCC(::System::UInt32 a1, ::MoleMole::EntityHandle a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::EntityHandle, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91F3EF43394D0515_METHOD_1_17B91B8469618CCC_OFFSET))(a1, a2, a3, a4, a5);
	}
};
