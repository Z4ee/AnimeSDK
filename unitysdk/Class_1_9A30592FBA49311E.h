#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C768A21A845C0D;
class Class_1_621F9F61E125BB0A;
class Class_1_91B6D33FD5BD3A1D;

#define CLASS_1_9A30592FBA49311E_METHOD_1_0C18E5A9F6890D1D_OFFSET UNITYSDK_OFFSET(0x14831620)
#define CLASS_1_9A30592FBA49311E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14831950)
#define CLASS_1_9A30592FBA49311E__CTOR_OFFSET UNITYSDK_OFFSET(0x14831610)

inline static constexpr unsigned int Class_1_9A30592FBA49311E_TypeDefinitionIndex = 63165;

class Class_1_9A30592FBA49311E : public ::System::Object
{
public:
	static ::Class_1_9A30592FBA49311E** StaticGet_Field_1_0()
	{
		return (::Class_1_9A30592FBA49311E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A30592FBA49311E_TypeDefinitionIndex)->GetStaticField(0x3BCC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0C18E5A9F6890D1D(::Class_1_621F9F61E125BB0A* a1, ::Class_1_45C768A21A845C0D* a2, ::Class_1_91B6D33FD5BD3A1D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_621F9F61E125BB0A*, ::Class_1_45C768A21A845C0D*, ::Class_1_91B6D33FD5BD3A1D*))((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E_METHOD_1_0C18E5A9F6890D1D_OFFSET))(this, a1, a2, a3);
	}
};
