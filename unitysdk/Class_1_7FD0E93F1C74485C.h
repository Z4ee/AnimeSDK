#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_68841D2E219E78DE_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarServant; }

#define CLASS_1_7FD0E93F1C74485C_METHOD_1_59A104C74D36519B_OFFSET UNITYSDK_OFFSET(0x13805C90)
#define CLASS_1_7FD0E93F1C74485C__CTOR_OFFSET UNITYSDK_OFFSET(0x13805E90)

inline static constexpr unsigned int Class_1_7FD0E93F1C74485C_TypeDefinitionIndex = 58572;

class Class_1_7FD0E93F1C74485C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FD0E93F1C74485C__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_59A104C74D36519B(::Struct_2_68841D2E219E78DE_2& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_68841D2E219E78DE_2&))((::PBYTE)hIl2Cpp + CLASS_1_7FD0E93F1C74485C_METHOD_1_59A104C74D36519B_OFFSET))(this, a1);
	}
};
