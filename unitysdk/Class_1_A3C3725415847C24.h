#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_A3C3725415847C24_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0xBDF7620)
#define CLASS_1_A3C3725415847C24_METHOD_1_C976CD6E3449B2ED_OFFSET UNITYSDK_OFFSET(0xBDF7760)
#define CLASS_1_A3C3725415847C24__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF7750)

inline static constexpr unsigned int Class_1_A3C3725415847C24_TypeDefinitionIndex = 77265;

class Class_1_A3C3725415847C24 : public ::System::Object
{
public:
	::System::Int32 AALKFOHEIMI; // 0x10
	::System::Int32 KOPFHOPKFMH; // 0x14
	::System::Int32 ALMKIPNHAFM; // 0x18
	::System::Int32 MGLGPNNMKLH; // 0x1C
	::System::UInt32 PHFMCACHFIJ; // 0x20

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
