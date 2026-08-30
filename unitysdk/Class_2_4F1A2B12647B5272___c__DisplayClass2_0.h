#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }

#define CLASS_2_4F1A2B12647B5272___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD81BFD0)
#define CLASS_2_4F1A2B12647B5272___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xD81BFF0)

inline static constexpr unsigned int Class_2_4F1A2B12647B5272___c__DisplayClass2_0_TypeDefinitionIndex = 65927;

class Class_2_4F1A2B12647B5272___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Int32 i; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnExecute_b__0(::RPG::Client::MatchThreeGameProp* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET))(this, a1);
	}
};
