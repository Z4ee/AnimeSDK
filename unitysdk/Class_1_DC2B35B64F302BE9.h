#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D7B82CFD3ED1219_2;
class Class_2_E541610CE7338ECE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DC2B35B64F302BE9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x189B2610)
#define CLASS_1_DC2B35B64F302BE9__CTOR_OFFSET UNITYSDK_OFFSET(0x189B2540)

inline static constexpr unsigned int Class_1_DC2B35B64F302BE9_TypeDefinitionIndex = 34862;

class Class_1_DC2B35B64F302BE9 : public ::System::Object
{
public:
	::Class_2_E541610CE7338ECE* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_2_1D7B82CFD3ED1219_2*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_1_DC2B35B64F302BE9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC2B35B64F302BE9_EXECUTE_OFFSET))(this);
	}
};
