#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE49D2686B15EB31.h"
#include "unitysdk/System/Object.h"

class Class_1_15BDC0992978ED9A;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_9851908217E0FE0E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1653E170)
#define CLASS_1_9851908217E0FE0E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1653E180)
#define CLASS_1_9851908217E0FE0E_METHOD_1_831AD0EF7CEB650C_OFFSET UNITYSDK_OFFSET(0x1653E640)
#define CLASS_1_9851908217E0FE0E_METHOD_1_C98C394448CF7E35_OFFSET UNITYSDK_OFFSET(0x1653E990)
#define CLASS_1_9851908217E0FE0E_METHOD_1_CD57A3BCD10C8EC4_OFFSET UNITYSDK_OFFSET(0x1653E7E0)
#define CLASS_1_9851908217E0FE0E_METHOD_1_F40FAA6EE742C9B4_OFFSET UNITYSDK_OFFSET(0x16518620)
#define CLASS_1_9851908217E0FE0E_METHOD_1_FF7220C8094602C0_OFFSET UNITYSDK_OFFSET(0x1653E290)
#define CLASS_1_9851908217E0FE0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1653EB70)
#define CLASS_1_9851908217E0FE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x16517E50)

inline static constexpr unsigned int Class_1_9851908217E0FE0E_TypeDefinitionIndex = 32087;

class Class_1_9851908217E0FE0E : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_10()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9851908217E0FE0E_TypeDefinitionIndex)->GetStaticField(0x20E0);
	}
	static ::System::UInt32* StaticGet_Field_1_9()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9851908217E0FE0E_TypeDefinitionIndex)->GetStaticField(0x2480);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9851908217E0FE0E_TypeDefinitionIndex)->GetStaticField(0x2484);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9851908217E0FE0E_TypeDefinitionIndex)->GetStaticField(0x2488);
	}
	// static const ::System::Double Field_1_4; // 0x0
	::System::Collections::Generic::IList_1<::System::UInt64>* Field_1_1; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x18
	::Class_1_15BDC0992978ED9A* Field_1_11; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::UInt32 Field_1_6; // 0x2C
	::System::Double Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E__CCTOR_OFFSET))();
	}

	::Class_1_15BDC0992978ED9A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_15BDC0992978ED9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_FF7220C8094602C0(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_FF7220C8094602C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F40FAA6EE742C9B4(::System::Collections::Generic::IList_1<::System::UInt64>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_F40FAA6EE742C9B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_CD57A3BCD10C8EC4(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_CD57A3BCD10C8EC4_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_C98C394448CF7E35(::System::Int32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_C98C394448CF7E35_OFFSET))(this, a1);
	}

	::System::Void Method_1_831AD0EF7CEB650C(::System::Int32 a1, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>*))((::PBYTE)hIl2Cpp + CLASS_1_9851908217E0FE0E_METHOD_1_831AD0EF7CEB650C_OFFSET))(this, a1, a2);
	}
};
