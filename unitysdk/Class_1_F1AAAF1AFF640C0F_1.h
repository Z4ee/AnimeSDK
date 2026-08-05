#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1515.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1292;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1F4849E0)
#define CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1F484A90)
#define CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1F484EC0)
#define CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1F484910)
#define CLASS_1_F1AAAF1AFF640C0F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F484950)

inline static constexpr unsigned int Class_1_F1AAAF1AFF640C0F_1_TypeDefinitionIndex = 93523;

class Class_1_F1AAAF1AFF640C0F_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1292*>* Field_1_0; // 0x10
	::Struct_2_1862835F8661A21F_1515 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1292* Method_1_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1292*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_1_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}
};
