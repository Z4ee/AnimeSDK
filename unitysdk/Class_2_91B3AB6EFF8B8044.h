#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1347.h"

class Class_0_16E4307DCC419505_770;
class Class_2_208CC9941471731A_1068;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1B916310)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1B915FA0)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B915E80)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1B916620)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1B916400)
#define CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET UNITYSDK_OFFSET(0x1B915EC0)

inline static constexpr unsigned int Class_2_91B3AB6EFF8B8044_TypeDefinitionIndex = 83148;

class Class_2_91B3AB6EFF8B8044 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1068*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_770*>* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_1347 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1068* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1068*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}
};
