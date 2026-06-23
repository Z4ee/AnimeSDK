#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1259.h"

class Class_0_16E4307DCC419505_7;
class Class_2_208CC9941471731A_1113;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_56775D686C1C3EBB_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E2D2F50)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1E2D2B50)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1E2D3000)
#define CLASS_2_56775D686C1C3EBB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E2D2A80)
#define CLASS_2_56775D686C1C3EBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D2AC0)

inline static constexpr unsigned int Class_2_56775D686C1C3EBB_TypeDefinitionIndex = 28979;

class Class_2_56775D686C1C3EBB : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1259 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1113*>* Field_2_1; // 0x30
	::Class_0_16E4307DCC419505_7* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1113* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1113*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56775D686C1C3EBB_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}
};
