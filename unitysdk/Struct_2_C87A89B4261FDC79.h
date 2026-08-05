#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_337;
namespace System { class Object; }

#define STRUCT_2_C87A89B4261FDC79_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6D90B0)
#define STRUCT_2_C87A89B4261FDC79_EQUALS_OFFSET UNITYSDK_OFFSET(0x6D9000)
#define STRUCT_2_C87A89B4261FDC79_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6D90C0)
#define STRUCT_2_C87A89B4261FDC79_METHOD_2_4815DC3FA2B6C02F_OFFSET UNITYSDK_OFFSET(0x10B241D0)
#define STRUCT_2_C87A89B4261FDC79_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0x6D9200)
#define STRUCT_2_C87A89B4261FDC79_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x10B24150)
#define STRUCT_2_C87A89B4261FDC79_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x6D9130)
#define STRUCT_2_C87A89B4261FDC79_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6D91A0)
#define STRUCT_2_C87A89B4261FDC79__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B240E0)

inline static constexpr unsigned int Struct_2_C87A89B4261FDC79_TypeDefinitionIndex = 45773;

struct alignas(8) Struct_2_C87A89B4261FDC79
{
	static ::Struct_2_C87A89B4261FDC79* StaticGet_Field_2_2()
	{
		return (::Struct_2_C87A89B4261FDC79*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C87A89B4261FDC79_TypeDefinitionIndex)->GetStaticField(0x3C650);
	}
	::MoleMole::ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType Field_2_1; // 0x10
	::Class_0_16E4307DCC419505_337* Field_2_0; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_C87A89B4261FDC79 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C87A89B4261FDC79))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_C87A89B4261FDC79 a1, ::Struct_2_C87A89B4261FDC79 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_C87A89B4261FDC79, ::Struct_2_C87A89B4261FDC79))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_4815DC3FA2B6C02F(::Struct_2_C87A89B4261FDC79 a1, ::Struct_2_C87A89B4261FDC79 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_C87A89B4261FDC79, ::Struct_2_C87A89B4261FDC79))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_METHOD_2_4815DC3FA2B6C02F_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C87A89B4261FDC79_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}
};
