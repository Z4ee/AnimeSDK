#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8C3326BB658EF7C4_Struct_2_6CE6006DDB65AB5A.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0710A4430D4188B5_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1378D010)
#define CLASS_1_0710A4430D4188B5_METHOD_1_8369DB75F9B5B4B6_OFFSET UNITYSDK_OFFSET(0x1378D1B0)
#define CLASS_1_0710A4430D4188B5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1378CFC0)
#define CLASS_1_0710A4430D4188B5_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x1378D120)
#define CLASS_1_0710A4430D4188B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1378CF70)

inline static constexpr unsigned int Class_1_0710A4430D4188B5_TypeDefinitionIndex = 64653;

class Class_1_0710A4430D4188B5 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_1_8C3326BB658EF7C4_Struct_2_6CE6006DDB65AB5A Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0710A4430D4188B5__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0710A4430D4188B5_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0710A4430D4188B5_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0710A4430D4188B5_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8369DB75F9B5B4B6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0710A4430D4188B5_METHOD_1_8369DB75F9B5B4B6_OFFSET))(this);
	}
};
