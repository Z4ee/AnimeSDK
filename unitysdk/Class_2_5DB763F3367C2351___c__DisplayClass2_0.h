#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }

#define CLASS_2_5DB763F3367C2351___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B9AE00)
#define CLASS_2_5DB763F3367C2351___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x8B9AF10)

inline static constexpr unsigned int Class_2_5DB763F3367C2351___c__DisplayClass2_0_TypeDefinitionIndex = 53502;

class Class_2_5DB763F3367C2351___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Int32 i; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnExecute_b__0(::RPG::Client::MatchThreeGameProp* p)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET))(this, p);
	}
};
