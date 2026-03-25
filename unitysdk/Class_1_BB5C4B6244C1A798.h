#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_BB5C4B6244C1A798_EXECUTE_OFFSET UNITYSDK_OFFSET(0x118F9180)
#define CLASS_1_BB5C4B6244C1A798__CTOR_OFFSET UNITYSDK_OFFSET(0x118F9030)

inline static constexpr unsigned int Class_1_BB5C4B6244C1A798_TypeDefinitionIndex = 62610;

class Class_1_BB5C4B6244C1A798 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x28
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x30

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_BB5C4B6244C1A798__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB5C4B6244C1A798_EXECUTE_OFFSET))(this);
	}
};
