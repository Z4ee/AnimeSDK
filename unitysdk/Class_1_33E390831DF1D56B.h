#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_2;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_33E390831DF1D56B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x167310B0)
#define CLASS_1_33E390831DF1D56B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16731070)
#define CLASS_1_33E390831DF1D56B_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x16731470)
#define CLASS_1_33E390831DF1D56B_METHOD_1_4D38898116B75561_OFFSET UNITYSDK_OFFSET(0x16731710)
#define CLASS_1_33E390831DF1D56B_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x167311D0)
#define CLASS_1_33E390831DF1D56B__CTOR_OFFSET UNITYSDK_OFFSET(0x16731060)

inline static constexpr unsigned int Class_1_33E390831DF1D56B_TypeDefinitionIndex = 29093;

class Class_1_33E390831DF1D56B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_2; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_3; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_4; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor(::Class_2_099B78418029B3B1_2* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_099B78418029B3B1_2*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_1_4D38898116B75561()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_4D38898116B75561_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}
};
