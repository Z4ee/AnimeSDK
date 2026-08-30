#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;

#define CLASS_1_51C55E077A7C58CF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BE2DA50)
#define CLASS_1_51C55E077A7C58CF_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x1BE2DC30)
#define CLASS_1_51C55E077A7C58CF_METHOD_1_F357F57C56651CFC_OFFSET UNITYSDK_OFFSET(0x1BE2E4B0)
#define CLASS_1_51C55E077A7C58CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2D980)

inline static constexpr unsigned int Class_1_51C55E077A7C58CF_TypeDefinitionIndex = 41023;

class Class_1_51C55E077A7C58CF : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x18
	::System::UInt32 CDBPBFBMKPP; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Boolean Method_1_F357F57C56651CFC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C55E077A7C58CF_METHOD_1_F357F57C56651CFC_OFFSET))(this, a1, a2);
	}
};
