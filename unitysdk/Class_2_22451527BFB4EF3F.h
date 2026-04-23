#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3897C88E8C59E725.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_2_22451527BFB4EF3F_METHOD_2_33C01862432F1145_OFFSET UNITYSDK_OFFSET(0x11863680)
#define CLASS_2_22451527BFB4EF3F_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x118631D0)
#define CLASS_2_22451527BFB4EF3F_METHOD_2_F7DA1F2BF31C250A_OFFSET UNITYSDK_OFFSET(0x11863AD0)
#define CLASS_2_22451527BFB4EF3F__CTOR_OFFSET UNITYSDK_OFFSET(0x11863120)

inline static constexpr unsigned int Class_2_22451527BFB4EF3F_TypeDefinitionIndex = 59968;

class Class_2_22451527BFB4EF3F : public ::Class_1_3897C88E8C59E725
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20
	::Class_0_16E4307DCC419505_722* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_2_22451527BFB4EF3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22451527BFB4EF3F_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_33C01862432F1145(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_22451527BFB4EF3F_METHOD_2_33C01862432F1145_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7DA1F2BF31C250A(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + CLASS_2_22451527BFB4EF3F_METHOD_2_F7DA1F2BF31C250A_OFFSET))(this, a1);
	}
};
