#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_144_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC3910)
#define CLASS_1_43BD383C98B4C0C5_144_METHOD_1_990B1BC80BA518B7_OFFSET UNITYSDK_OFFSET(0x12CC3950)
#define CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC3D90)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_144_TypeDefinitionIndex = 60313;

class Class_1_43BD383C98B4C0C5_144 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_990B1BC80BA518B7()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144_METHOD_1_990B1BC80BA518B7_OFFSET))(this);
	}
};
