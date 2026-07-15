#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_A3C3725415847C24_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x16DBD230)
#define CLASS_1_A3C3725415847C24_METHOD_1_C976CD6E3449B2ED_OFFSET UNITYSDK_OFFSET(0x16DBD380)
#define CLASS_1_A3C3725415847C24__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBD370)

inline static constexpr unsigned int Class_1_A3C3725415847C24_TypeDefinitionIndex = 73780;

class Class_1_A3C3725415847C24 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C3725415847C24__CTOR_OFFSET))(this);
	}

	static ::Class_1_A3C3725415847C24* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_A3C3725415847C24*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C3725415847C24_METHOD_1_A917AC671DF6CB2D_OFFSET))(a1);
	}

	static ::Class_1_A3C3725415847C24* Method_1_C976CD6E3449B2ED(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::Class_1_A3C3725415847C24*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3C3725415847C24_METHOD_1_C976CD6E3449B2ED_OFFSET))(a1);
	}
};
