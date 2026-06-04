#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_A1197913075FB798_METHOD_1_3B582C3184B940C2_OFFSET UNITYSDK_OFFSET(0xA9AC080)
#define CLASS_1_A1197913075FB798_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0xA9ABF30)
#define CLASS_1_A1197913075FB798__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AC070)

inline static constexpr unsigned int Class_1_A1197913075FB798_TypeDefinitionIndex = 72255;

class Class_1_A1197913075FB798 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1197913075FB798__CTOR_OFFSET))(this);
	}

	static ::Class_1_A1197913075FB798* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_A1197913075FB798*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1197913075FB798_METHOD_1_A917AC671DF6CB2D_OFFSET))(a1);
	}

	static ::Class_1_A1197913075FB798* Method_1_3B582C3184B940C2(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::Class_1_A1197913075FB798*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A1197913075FB798_METHOD_1_3B582C3184B940C2_OFFSET))(a1);
	}
};
