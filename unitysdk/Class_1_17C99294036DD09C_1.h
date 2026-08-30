#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_360C00D6092F4D31;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_17C99294036DD09C_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A7CD1D0)
#define CLASS_1_17C99294036DD09C_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7CD180)
#define CLASS_1_17C99294036DD09C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CD040)

inline static constexpr unsigned int Class_1_17C99294036DD09C_1_TypeDefinitionIndex = 77312;

class Class_1_17C99294036DD09C_1 : public ::System::Object
{
public:
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x10
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* JPKEBGGDFPL; // 0x18
	::Class_2_360C00D6092F4D31* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_17C99294036DD09C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C99294036DD09C_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C99294036DD09C_1_EXECUTE_OFFSET))(this);
	}
};
