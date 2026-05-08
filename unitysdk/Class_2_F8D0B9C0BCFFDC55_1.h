#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"

class Class_1_BAF3B1E12B7EBB99;
class Class_2_208CC9941471731A_131;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8D0B9C0BCFFDC55_1_METHOD_2_9C463C4ADC837230_OFFSET UNITYSDK_OFFSET(0x13A415C0)
#define CLASS_2_F8D0B9C0BCFFDC55_1_METHOD_2_E9C066403E434502_OFFSET UNITYSDK_OFFSET(0x13A41530)
#define CLASS_2_F8D0B9C0BCFFDC55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A414C0)

inline static constexpr unsigned int Class_2_F8D0B9C0BCFFDC55_1_TypeDefinitionIndex = 40705;

class Class_2_F8D0B9C0BCFFDC55_1 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E9C066403E434502(::System::Collections::Generic::List_1<::Class_1_BAF3B1E12B7EBB99*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BAF3B1E12B7EBB99*>*))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_1_METHOD_2_E9C066403E434502_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_9C463C4ADC837230()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_1_METHOD_2_9C463C4ADC837230_OFFSET))(this);
	}
};
