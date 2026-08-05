#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_2_8EB75F7DCE6C3DAB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_FED83336157CDABE_METHOD_1_C0FB66136620655B_OFFSET UNITYSDK_OFFSET(0x14FCF1B0)
#define CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_FED83336157CDABE__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCF1A0)

inline static constexpr unsigned int Class_2_8EB75F7DCE6C3DAB_Class_1_FED83336157CDABE_TypeDefinitionIndex = 57680;

class Class_2_8EB75F7DCE6C3DAB_Class_1_FED83336157CDABE : public ::System::Object
{
public:
	::Class_2_8EB75F7DCE6C3DAB* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_1824EF69C8E376A3*, ::System::Int32>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_FED83336157CDABE__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C0FB66136620655B(::Class_2_1824EF69C8E376A3* a1, ::Class_2_1824EF69C8E376A3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_FED83336157CDABE_METHOD_1_C0FB66136620655B_OFFSET))(this, a1, a2);
	}
};
