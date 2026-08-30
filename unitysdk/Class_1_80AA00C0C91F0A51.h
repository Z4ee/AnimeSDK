#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_80AA00C0C91F0A51_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154606B0)
#define CLASS_1_80AA00C0C91F0A51_METHOD_1_0C1D1D0673982C1F_OFFSET UNITYSDK_OFFSET(0x15460A00)
#define CLASS_1_80AA00C0C91F0A51_METHOD_1_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x15460810)
#define CLASS_1_80AA00C0C91F0A51__CTOR_OFFSET UNITYSDK_OFFSET(0x15460550)

inline static constexpr unsigned int Class_1_80AA00C0C91F0A51_TypeDefinitionIndex = 36756;

class Class_1_80AA00C0C91F0A51 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::Class_2_3616FDE8A71D0590_1* EEFMDEHLLFI; // 0x18
	::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* NCGEECDENGP; // 0x20
	::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* KGPHOAEPHHP; // 0x28
	::System::Int32 DNOAKANJKHB; // 0x30

	::System::Void _ctor(::Class_2_3616FDE8A71D0590_1* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3616FDE8A71D0590_1*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_80AA00C0C91F0A51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80AA00C0C91F0A51_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80AA00C0C91F0A51_METHOD_1_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Method_1_0C1D1D0673982C1F(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_1_80AA00C0C91F0A51_METHOD_1_0C1D1D0673982C1F_OFFSET))(this, a1);
	}
};
