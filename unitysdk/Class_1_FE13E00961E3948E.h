#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarServant; }

#define CLASS_1_FE13E00961E3948E_METHOD_1_5FD608EA60176416_OFFSET UNITYSDK_OFFSET(0x155E2840)
#define CLASS_1_FE13E00961E3948E__CTOR_OFFSET UNITYSDK_OFFSET(0x155E2A50)

inline static constexpr unsigned int Class_1_FE13E00961E3948E_TypeDefinitionIndex = 62689;

class Class_1_FE13E00961E3948E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE13E00961E3948E__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_5FD608EA60176416(::Struct_2_F1C4ECC5EFDCA1EF_2& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2&))((::PBYTE)hIl2Cpp + CLASS_1_FE13E00961E3948E_METHOD_1_5FD608EA60176416_OFFSET))(this, a1);
	}
};
