#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_3_1A9D32B2B1D681B8;

#define CLASS_1_51C55E077A7C58CF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16839590)
#define CLASS_1_51C55E077A7C58CF_METHOD_1_741A41CE0A023F45_OFFSET UNITYSDK_OFFSET(0x1683A050)
#define CLASS_1_51C55E077A7C58CF_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x16839760)
#define CLASS_1_51C55E077A7C58CF__CTOR_OFFSET UNITYSDK_OFFSET(0x168394C0)

inline static constexpr unsigned int Class_1_51C55E077A7C58CF_TypeDefinitionIndex = 32778;

class Class_1_51C55E077A7C58CF : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Boolean Method_1_741A41CE0A023F45(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_METHOD_1_741A41CE0A023F45_OFFSET))(this, a1, a2);
	}
};
