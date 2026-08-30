#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19A1EE30)
#define CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1EE00)

inline static constexpr unsigned int Class_1_B82AC0A1DAC315CA_TypeDefinitionIndex = 76803;

class Class_1_B82AC0A1DAC315CA : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* PDENFEFCAGN; // 0x10
	::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x18
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* KIAIODODLEJ; // 0x20
	::System::Single JCEICLMJAOF; // 0x28
	::System::Single PJMDHCDIPPK; // 0x2C

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B82AC0A1DAC315CA_EXECUTE_OFFSET))(this);
	}
};
