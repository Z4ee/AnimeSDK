#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_2_ED1120CC51863E25___C_METHOD_1_D79F446AA30C0E6E_OFFSET UNITYSDK_OFFSET(0x17A7A560)
#define CLASS_2_ED1120CC51863E25___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7A510)
#define CLASS_2_ED1120CC51863E25___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A550)

inline static constexpr unsigned int Class_2_ED1120CC51863E25___c_TypeDefinitionIndex = 64847;

class Class_2_ED1120CC51863E25___c : public ::System::Object
{
public:
	static ::Class_2_ED1120CC51863E25___c** StaticGet___9()
	{
		return (::Class_2_ED1120CC51863E25___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED1120CC51863E25___c_TypeDefinitionIndex)->GetStaticField(0x41750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D79F446AA30C0E6E(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25___C_METHOD_1_D79F446AA30C0E6E_OFFSET))(this, a1);
	}
};
