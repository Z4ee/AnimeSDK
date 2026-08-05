#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_63.h"

class Class_1_43BD383C98B4C0C5_71;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FFB447330BDBA334_FINALIZE_OFFSET UNITYSDK_OFFSET(0x175C30A0)
#define CLASS_2_FFB447330BDBA334_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x175C30B0)
#define CLASS_2_FFB447330BDBA334__CTOR_OFFSET UNITYSDK_OFFSET(0x175C3010)

inline static constexpr unsigned int Class_2_FFB447330BDBA334_TypeDefinitionIndex = 61358;

class Class_2_FFB447330BDBA334 : public ::Class_1_43BD383C98B4C0C5_63
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_71*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_71*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_71*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFB447330BDBA334_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}
};
