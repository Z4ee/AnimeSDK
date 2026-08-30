#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_680;
class Class_1_4927E551A6C893C1;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_1FCC28CEE9D4D1C6_METHOD_1_5DD4D1BA42C75E0A_OFFSET UNITYSDK_OFFSET(0xB7AAD80)
#define CLASS_1_1FCC28CEE9D4D1C6__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AACD0)

inline static constexpr unsigned int Class_1_1FCC28CEE9D4D1C6_TypeDefinitionIndex = 62622;

class Class_1_1FCC28CEE9D4D1C6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_680* MOHKEEEHFOB; // 0x10
	::Class_1_4927E551A6C893C1* MENPDHLEFKC; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_680* a1, ::Class_1_4927E551A6C893C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_680*, ::Class_1_4927E551A6C893C1*))((::PBYTE)hIl2Cpp + CLASS_1_1FCC28CEE9D4D1C6__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_5DD4D1BA42C75E0A(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1FCC28CEE9D4D1C6_METHOD_1_5DD4D1BA42C75E0A_OFFSET))(this, a1, a2);
	}
};
