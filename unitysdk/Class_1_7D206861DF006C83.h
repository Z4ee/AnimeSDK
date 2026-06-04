#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_7D206861DF006C83_EXECUTE_OFFSET UNITYSDK_OFFSET(0x144BEA80)
#define CLASS_1_7D206861DF006C83_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x144BE980)
#define CLASS_1_7D206861DF006C83_METHOD_1_6E17CBFDDFD73EDB_OFFSET UNITYSDK_OFFSET(0x144BF460)
#define CLASS_1_7D206861DF006C83_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x144BF860)
#define CLASS_1_7D206861DF006C83__CTOR_OFFSET UNITYSDK_OFFSET(0x144BE970)

inline static constexpr unsigned int Class_1_7D206861DF006C83_TypeDefinitionIndex = 71796;

class Class_1_7D206861DF006C83 : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* Field_1_0; // 0x10
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_1; // 0x18
	::Class_1_D33B7D6901AE39E9* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_6E17CBFDDFD73EDB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83_METHOD_1_6E17CBFDDFD73EDB_OFFSET))(this, a1, a2, a3);
	}
};
