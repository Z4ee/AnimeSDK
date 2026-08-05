#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28F0414D4F296993;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_D1C26A113ABF8501___C_METHOD_1_0CDC5B33CD98608F_OFFSET UNITYSDK_OFFSET(0x1588D340)
#define CLASS_1_D1C26A113ABF8501___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1588D2F0)
#define CLASS_1_D1C26A113ABF8501___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1588D330)

inline static constexpr unsigned int Class_1_D1C26A113ABF8501___c_TypeDefinitionIndex = 62184;

class Class_1_D1C26A113ABF8501___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1C26A113ABF8501___c_TypeDefinitionIndex)->GetStaticField(0x3F1E0);
	}
	static ::Class_1_D1C26A113ABF8501___c** StaticGet___9()
	{
		return (::Class_1_D1C26A113ABF8501___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1C26A113ABF8501___c_TypeDefinitionIndex)->GetStaticField(0x3F1E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1C26A113ABF8501___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1C26A113ABF8501___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CDC5B33CD98608F(::Class_1_28F0414D4F296993* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_D1C26A113ABF8501___C_METHOD_1_0CDC5B33CD98608F_OFFSET))(this, a1, a2);
	}
};
