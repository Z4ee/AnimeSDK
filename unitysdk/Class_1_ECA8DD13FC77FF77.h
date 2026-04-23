#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_ECA8DD13FC77FF77_METHOD_1_4844D65ABA35664F_OFFSET UNITYSDK_OFFSET(0x1175A8F0)
#define CLASS_1_ECA8DD13FC77FF77__CTOR_OFFSET UNITYSDK_OFFSET(0x1175A990)

inline static constexpr unsigned int Class_1_ECA8DD13FC77FF77_TypeDefinitionIndex = 57796;

class Class_1_ECA8DD13FC77FF77 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA8DD13FC77FF77__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* Method_1_4844D65ABA35664F()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA8DD13FC77FF77_METHOD_1_4844D65ABA35664F_OFFSET))(this);
	}
};
