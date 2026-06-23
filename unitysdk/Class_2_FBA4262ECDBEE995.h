#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_973.h"

class Class_2_208CC9941471731A_1141;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FBA4262ECDBEE995_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1BF2A6D0)
#define CLASS_2_FBA4262ECDBEE995_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1BF29C10)
#define CLASS_2_FBA4262ECDBEE995_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF294C0)
#define CLASS_2_FBA4262ECDBEE995_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1BF29600)
#define CLASS_2_FBA4262ECDBEE995_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1BF299F0)
#define CLASS_2_FBA4262ECDBEE995_METHOD_2_F6F0032511BA914B_OFFSET UNITYSDK_OFFSET(0x1BF297E0)
#define CLASS_2_FBA4262ECDBEE995__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF29500)

inline static constexpr unsigned int Class_2_FBA4262ECDBEE995_TypeDefinitionIndex = 88083;

class Class_2_FBA4262ECDBEE995 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1141*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1141*>*>*>* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_973 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1141* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1141*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_1141* Method_2_F6F0032511BA914B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_208CC9941471731A_1141*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_F6F0032511BA914B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA4262ECDBEE995_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
