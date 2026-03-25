#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_1FDE5CC33AEFB9D9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x115E8540)
#define CLASS_1_1FDE5CC33AEFB9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x115E8450)

inline static constexpr unsigned int Class_1_1FDE5CC33AEFB9D9_TypeDefinitionIndex = 62936;

class Class_1_1FDE5CC33AEFB9D9 : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* Field_1_1; // 0x10
	::Class_2_43D1AA62A6D00FFF* Field_1_0; // 0x18
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_1FDE5CC33AEFB9D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FDE5CC33AEFB9D9_EXECUTE_OFFSET))(this);
	}
};
