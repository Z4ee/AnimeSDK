#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1185F950)
#define CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1185F920)

inline static constexpr unsigned int Class_1_B82AC0A1DAC315CA_TypeDefinitionIndex = 62937;

class Class_1_B82AC0A1DAC315CA : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* Field_1_4; // 0x10
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x18
	::Class_2_43D1AA62A6D00FFF* Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET))(this);
	}
};
