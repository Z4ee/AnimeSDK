#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6B107D57C1E3D84E_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x10DCFF50)
#define CLASS_2_6B107D57C1E3D84E_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x10DCFDC0)
#define CLASS_2_6B107D57C1E3D84E__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCFE50)

inline static constexpr unsigned int Class_2_6B107D57C1E3D84E_TypeDefinitionIndex = 75520;

class Class_2_6B107D57C1E3D84E : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
