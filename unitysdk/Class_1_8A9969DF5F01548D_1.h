#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_8A9969DF5F01548D_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x191745E0)
#define CLASS_1_8A9969DF5F01548D_1_METHOD_1_51EAE3050A9A8BC9_OFFSET UNITYSDK_OFFSET(0x19175210)
#define CLASS_1_8A9969DF5F01548D_1_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x19175280)
#define CLASS_1_8A9969DF5F01548D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x191745B0)

inline static constexpr unsigned int Class_1_8A9969DF5F01548D_1_TypeDefinitionIndex = 76796;

class Class_1_8A9969DF5F01548D_1 : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* PDENFEFCAGN; // 0x10
	::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_51EAE3050A9A8BC9(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_METHOD_1_51EAE3050A9A8BC9_OFFSET))(this, a1);
	}
};
