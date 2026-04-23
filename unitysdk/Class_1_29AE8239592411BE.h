#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_29AE8239592411BE_METHOD_1_0F59DED9C326CAF0_OFFSET UNITYSDK_OFFSET(0x1197C730)

inline static constexpr unsigned int Class_1_29AE8239592411BE_TypeDefinitionIndex = 57866;

class Class_1_29AE8239592411BE : public ::System::Object
{
public:
	static ::System::Int32 Method_1_0F59DED9C326CAF0(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_29AE8239592411BE_METHOD_1_0F59DED9C326CAF0_OFFSET))(a1, a2);
	}
};
