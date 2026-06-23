#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_113.h"

class Class_1_43BD383C98B4C0C5_58;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FFB447330BDBA334_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13D20330)
#define CLASS_2_FFB447330BDBA334_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x13D20340)
#define CLASS_2_FFB447330BDBA334__CTOR_OFFSET UNITYSDK_OFFSET(0x13D202A0)

inline static constexpr unsigned int Class_2_FFB447330BDBA334_TypeDefinitionIndex = 71884;

class Class_2_FFB447330BDBA334 : public ::Class_1_43BD383C98B4C0C5_113
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_58*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_58*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}
};
