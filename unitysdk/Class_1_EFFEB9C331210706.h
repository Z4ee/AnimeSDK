#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_619F9076118F4E7E;
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_EFFEB9C331210706_METHOD_1_179A15AE97981EA0_OFFSET UNITYSDK_OFFSET(0x13C71700)
#define CLASS_1_EFFEB9C331210706__CTOR_OFFSET UNITYSDK_OFFSET(0x13C71760)

inline static constexpr unsigned int Class_1_EFFEB9C331210706_TypeDefinitionIndex = 58579;

class Class_1_EFFEB9C331210706 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFFEB9C331210706__CTOR_OFFSET))(this);
	}

	::Class_1_619F9076118F4E7E* Method_1_179A15AE97981EA0(::RPG::Client::AvatarOutfit* a1)
	{
		return ((::Class_1_619F9076118F4E7E*(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + CLASS_1_EFFEB9C331210706_METHOD_1_179A15AE97981EA0_OFFSET))(this, a1);
	}
};
