#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_42D2D4BEC447E5A1_METHOD_1_6990AE4D09B03418_OFFSET UNITYSDK_OFFSET(0xB6497F0)
#define CLASS_1_42D2D4BEC447E5A1_METHOD_1_B04996D2FD276384_OFFSET UNITYSDK_OFFSET(0xB649840)
#define CLASS_1_42D2D4BEC447E5A1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6498E0)
#define CLASS_1_42D2D4BEC447E5A1__CTOR_OFFSET UNITYSDK_OFFSET(0xB6497E0)

inline static constexpr unsigned int Class_1_42D2D4BEC447E5A1_TypeDefinitionIndex = 51995;

class Class_1_42D2D4BEC447E5A1 : public ::System::Object
{
public:
	static ::Class_1_42D2D4BEC447E5A1** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_42D2D4BEC447E5A1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42D2D4BEC447E5A1_TypeDefinitionIndex)->GetStaticField(0x2DD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D2D4BEC447E5A1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42D2D4BEC447E5A1__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_6990AE4D09B03418(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_42D2D4BEC447E5A1_METHOD_1_6990AE4D09B03418_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_B04996D2FD276384()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D2D4BEC447E5A1_METHOD_1_B04996D2FD276384_OFFSET))(this);
	}
};
