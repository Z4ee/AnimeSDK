#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_2;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_2490024EC94CB9D5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x165B46E0)
#define CLASS_1_2490024EC94CB9D5__CTOR_OFFSET UNITYSDK_OFFSET(0x165B45F0)

inline static constexpr unsigned int Class_1_2490024EC94CB9D5_TypeDefinitionIndex = 29101;

class Class_1_2490024EC94CB9D5 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* Field_1_2; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_0; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_099B78418029B3B1_2* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_099B78418029B3B1_2*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_2490024EC94CB9D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2490024EC94CB9D5_EXECUTE_OFFSET))(this);
	}
};
