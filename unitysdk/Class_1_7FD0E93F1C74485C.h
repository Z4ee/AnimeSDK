#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarServant; }

#define CLASS_1_7FD0E93F1C74485C_METHOD_1_59A104C74D36519B_OFFSET UNITYSDK_OFFSET(0x16ED35B0)
#define CLASS_1_7FD0E93F1C74485C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED37C0)

inline static constexpr unsigned int Class_1_7FD0E93F1C74485C_TypeDefinitionIndex = 62689;

class Class_1_7FD0E93F1C74485C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FD0E93F1C74485C__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_59A104C74D36519B(::Struct_2_F1C4ECC5EFDCA1EF_2& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2&))((::PBYTE)hIl2Cpp + CLASS_1_7FD0E93F1C74485C_METHOD_1_59A104C74D36519B_OFFSET))(this, a1);
	}
};
