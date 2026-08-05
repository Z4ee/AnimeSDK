#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;
class Class_1_621F9F61E125BB0A;
class Class_1_F50CC8D9599D41DE;

#define CLASS_1_9A30592FBA49311E_METHOD_1_0C18E5A9F6890D1D_OFFSET UNITYSDK_OFFSET(0x175013C0)
#define CLASS_1_9A30592FBA49311E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17501700)
#define CLASS_1_9A30592FBA49311E__CTOR_OFFSET UNITYSDK_OFFSET(0x175013B0)

inline static constexpr unsigned int Class_1_9A30592FBA49311E_TypeDefinitionIndex = 47929;

class Class_1_9A30592FBA49311E : public ::System::Object
{
public:
	static ::Class_1_9A30592FBA49311E** StaticGet_Field_1_0()
	{
		return (::Class_1_9A30592FBA49311E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A30592FBA49311E_TypeDefinitionIndex)->GetStaticField(0x38A00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0C18E5A9F6890D1D(::Class_1_621F9F61E125BB0A* a1, ::Class_1_F50CC8D9599D41DE* a2, ::Class_1_34A82ADD3D230E95* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_621F9F61E125BB0A*, ::Class_1_F50CC8D9599D41DE*, ::Class_1_34A82ADD3D230E95*))((::PBYTE)hIl2Cpp + CLASS_1_9A30592FBA49311E_METHOD_1_0C18E5A9F6890D1D_OFFSET))(this, a1, a2, a3);
	}
};
