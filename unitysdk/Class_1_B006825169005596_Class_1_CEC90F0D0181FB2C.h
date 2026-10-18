#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"

class Class_1_A107654BBD031F68;
class Class_1_B006825169005596_Class_1_FB92FC697213E56C;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B006825169005596_CLASS_1_CEC90F0D0181FB2C__CTOR_OFFSET UNITYSDK_OFFSET(0xC288710)

inline static constexpr unsigned int Class_1_B006825169005596_Class_1_CEC90F0D0181FB2C_TypeDefinitionIndex = 75634;

class Class_1_B006825169005596_Class_1_CEC90F0D0181FB2C : public ::System::Object
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* LDEDOFNOIPK; // 0x10
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B006825169005596_Class_1_FB92FC697213E56C*>* JJJNPLOLJGE; // 0x20
	::Class_1_A107654BBD031F68* DCFKJCMODKJ; // 0x28
	::RPG::Client::Pet::PetLineupShape GJBOKLDCKEG; // 0x30
	::System::UInt32 FJKDAFHKPGC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596_CLASS_1_CEC90F0D0181FB2C__CTOR_OFFSET))(this);
	}
};
