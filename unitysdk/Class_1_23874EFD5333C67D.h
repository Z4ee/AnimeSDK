#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_23874EFD5333C67D_METHOD_1_7E33E56AE97993D6_OFFSET UNITYSDK_OFFSET(0x158BC630)

inline static constexpr unsigned int Class_1_23874EFD5333C67D_TypeDefinitionIndex = 62876;

class Class_1_23874EFD5333C67D : public ::System::Object
{
public:
	static ::System::Int32 Method_1_7E33E56AE97993D6(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_23874EFD5333C67D_METHOD_1_7E33E56AE97993D6_OFFSET))(a1, a2);
	}
};
