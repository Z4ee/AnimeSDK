#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_109.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1294;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1EBFF0B0)
#define CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1EBFF240)
#define CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1EBFF160)
#define CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1EBFF070)
#define CLASS_1_F1AAAF1AFF640C0F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFEFC0)

inline static constexpr unsigned int Class_1_F1AAAF1AFF640C0F_3_TypeDefinitionIndex = 93547;

class Class_1_F1AAAF1AFF640C0F_3 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_109 Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1294*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1294* Method_1_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1294*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_1_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_3_METHOD_1_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
