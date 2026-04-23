#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_7D206861DF006C83_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD9C3E60)
#define CLASS_1_7D206861DF006C83_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9C3D30)
#define CLASS_1_7D206861DF006C83_METHOD_1_6E17CBFDDFD73EDB_OFFSET UNITYSDK_OFFSET(0xD9C47F0)
#define CLASS_1_7D206861DF006C83_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD9C4C30)
#define CLASS_1_7D206861DF006C83__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C3D20)

inline static constexpr unsigned int Class_1_7D206861DF006C83_TypeDefinitionIndex = 70974;

class Class_1_7D206861DF006C83 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_1; // 0x10
	::Class_3_F4528A5C0F861AF2* Field_1_2; // 0x18
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_7D206861DF006C83__CTOR_OFFSET))(this, a1, a2);
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
