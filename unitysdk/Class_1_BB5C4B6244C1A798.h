#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_BB5C4B6244C1A798_EXECUTE_OFFSET UNITYSDK_OFFSET(0x185F50E0)
#define CLASS_1_BB5C4B6244C1A798__CTOR_OFFSET UNITYSDK_OFFSET(0x185F4F90)

inline static constexpr unsigned int Class_1_BB5C4B6244C1A798_TypeDefinitionIndex = 72967;

class Class_1_BB5C4B6244C1A798 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_0; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_1; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_2; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_3; // 0x28
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_4; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_BB5C4B6244C1A798__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB5C4B6244C1A798_EXECUTE_OFFSET))(this);
	}
};
