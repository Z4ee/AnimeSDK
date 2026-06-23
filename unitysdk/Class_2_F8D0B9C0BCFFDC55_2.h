#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"

class Class_1_D81DF5412653B7EF;
class Class_2_208CC9941471731A_131;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8D0B9C0BCFFDC55_2_METHOD_2_9C463C4ADC837230_OFFSET UNITYSDK_OFFSET(0x1CC14890)
#define CLASS_2_F8D0B9C0BCFFDC55_2_METHOD_2_E9C066403E434502_OFFSET UNITYSDK_OFFSET(0x1CC14800)
#define CLASS_2_F8D0B9C0BCFFDC55_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC14790)

inline static constexpr unsigned int Class_2_F8D0B9C0BCFFDC55_2_TypeDefinitionIndex = 48626;

class Class_2_F8D0B9C0BCFFDC55_2 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E9C066403E434502(::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>*))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_2_METHOD_2_E9C066403E434502_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_9C463C4ADC837230()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_2_METHOD_2_9C463C4ADC837230_OFFSET))(this);
	}
};
