#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_482;

#define CLASS_2_2B69BCB161EF3587___C_METHOD_1_442A8AE2B57F869B_OFFSET UNITYSDK_OFFSET(0x12F9ED30)
#define CLASS_2_2B69BCB161EF3587___C_METHOD_1_B2BC3E5BC0477E2F_OFFSET UNITYSDK_OFFSET(0x12F9EB80)
#define CLASS_2_2B69BCB161EF3587___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F9EB30)
#define CLASS_2_2B69BCB161EF3587___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F9EB70)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587___c_TypeDefinitionIndex = 75496;

class Class_2_2B69BCB161EF3587___c : public ::System::Object
{
public:
	static ::Class_2_2B69BCB161EF3587___c** StaticGet___9()
	{
		return (::Class_2_2B69BCB161EF3587___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B69BCB161EF3587___c_TypeDefinitionIndex)->GetStaticField(0x47FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_B2BC3E5BC0477E2F(::Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5 a1, ::Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5, ::Class_2_2B69BCB161EF3587_Struct_2_DB5525EE5C1DAFE5))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587___C_METHOD_1_B2BC3E5BC0477E2F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_442A8AE2B57F869B(::Class_0_16E4307DCC419505_482* a1, ::Class_0_16E4307DCC419505_482* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_482*, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587___C_METHOD_1_442A8AE2B57F869B_OFFSET))(this, a1, a2);
	}
};
