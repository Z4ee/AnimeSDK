#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1315.h"

class Class_0_16E4307DCC419505_13;
class Class_2_208CC9941471731A_1029;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_56775D686C1C3EBB_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C2B5EE0)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1C2B5AD0)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1C2B59F0)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C2B5920)
#define CLASS_2_56775D686C1C3EBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B5960)

inline static constexpr unsigned int Class_2_56775D686C1C3EBB_TypeDefinitionIndex = 26117;

class Class_2_56775D686C1C3EBB : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1029*>* Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_13* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_1315 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1029* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1029*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
