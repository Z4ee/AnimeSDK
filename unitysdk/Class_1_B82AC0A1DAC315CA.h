#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13623500)
#define CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET UNITYSDK_OFFSET(0x136234D0)

inline static constexpr unsigned int Class_1_B82AC0A1DAC315CA_TypeDefinitionIndex = 71799;

class Class_1_B82AC0A1DAC315CA : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* Field_1_0; // 0x10
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_1; // 0x18
	::Class_2_80F8710F847F1248* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET))(this);
	}
};
