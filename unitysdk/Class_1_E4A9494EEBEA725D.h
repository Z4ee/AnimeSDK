#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_E4A9494EEBEA725D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13E89ED0)
#define CLASS_1_E4A9494EEBEA725D__CTOR_OFFSET UNITYSDK_OFFSET(0x13E89E10)

inline static constexpr unsigned int Class_1_E4A9494EEBEA725D_TypeDefinitionIndex = 35900;

class Class_1_E4A9494EEBEA725D : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_1* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* Field_1_1; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_3616FDE8A71D0590_1* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3616FDE8A71D0590_1*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_E4A9494EEBEA725D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A9494EEBEA725D_EXECUTE_OFFSET))(this);
	}
};
