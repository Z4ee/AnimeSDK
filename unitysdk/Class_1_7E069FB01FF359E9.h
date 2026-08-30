#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_35962C2B7535512E;
class Class_2_465A9E6CC2B0EF21;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_7E069FB01FF359E9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C1A2B50)
#define CLASS_1_7E069FB01FF359E9_METHOD_1_DDC4E7A0A5BE402D_OFFSET UNITYSDK_OFFSET(0x1C1A2E10)
#define CLASS_1_7E069FB01FF359E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A2A90)

inline static constexpr unsigned int Class_1_7E069FB01FF359E9_TypeDefinitionIndex = 36457;

class Class_1_7E069FB01FF359E9 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_465A9E6CC2B0EF21*>* DAAALPNCMNO; // 0x10
	::Class_2_35962C2B7535512E* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_2_35962C2B7535512E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_DDC4E7A0A5BE402D(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9_METHOD_1_DDC4E7A0A5BE402D_OFFSET))(this, a1);
	}
};
