#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_15656D798AFDF6B2;
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_EFFEB9C331210706_METHOD_1_179A15AE97981EA0_OFFSET UNITYSDK_OFFSET(0xA5400B0)
#define CLASS_1_EFFEB9C331210706__CTOR_OFFSET UNITYSDK_OFFSET(0xA540110)

inline static constexpr unsigned int Class_1_EFFEB9C331210706_TypeDefinitionIndex = 57769;

class Class_1_EFFEB9C331210706 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFFEB9C331210706__CTOR_OFFSET))(this);
	}

	::Class_1_15656D798AFDF6B2* Method_1_179A15AE97981EA0(::RPG::Client::AvatarOutfit* a1)
	{
		return ((::Class_1_15656D798AFDF6B2*(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + CLASS_1_EFFEB9C331210706_METHOD_1_179A15AE97981EA0_OFFSET))(this, a1);
	}
};
