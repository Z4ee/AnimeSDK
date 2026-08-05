#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6B107D57C1E3D84E_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x166575E0)
#define CLASS_2_6B107D57C1E3D84E_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x16657770)
#define CLASS_2_6B107D57C1E3D84E__CTOR_OFFSET UNITYSDK_OFFSET(0x16657670)

inline static constexpr unsigned int Class_2_6B107D57C1E3D84E_TypeDefinitionIndex = 42076;

class Class_2_6B107D57C1E3D84E : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
