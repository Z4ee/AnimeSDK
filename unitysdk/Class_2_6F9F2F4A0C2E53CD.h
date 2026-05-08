#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1012.h"

class Class_0_16E4307DCC419505_13;
class Class_2_208CC9941471731A_1051;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B8B4830)
#define CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1B8B4420)
#define CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B8B4350)
#define CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1B8B48E0)
#define CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1B8B4AC0)
#define CLASS_2_6F9F2F4A0C2E53CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B4390)

inline static constexpr unsigned int Class_2_6F9F2F4A0C2E53CD_TypeDefinitionIndex = 83179;

class Class_2_6F9F2F4A0C2E53CD : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1051*>* Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_13* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_1012 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1051* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1051*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F9F2F4A0C2E53CD_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
