#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C768A21A845C0D;
class Class_1_621F9F61E125BB0A;
class Class_1_91B6D33FD5BD3A1D;

#define CLASS_1_ED57AC46E41CFDF2_METHOD_1_32079E1158738D7B_OFFSET UNITYSDK_OFFSET(0x1C67E4D0)
#define CLASS_1_ED57AC46E41CFDF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C67EB10)
#define CLASS_1_ED57AC46E41CFDF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67EB00)

inline static constexpr unsigned int Class_1_ED57AC46E41CFDF2_TypeDefinitionIndex = 88089;

class Class_1_ED57AC46E41CFDF2 : public ::System::Object
{
public:
	static ::Class_1_ED57AC46E41CFDF2** StaticGet_Field_1_0()
	{
		return (::Class_1_ED57AC46E41CFDF2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED57AC46E41CFDF2_TypeDefinitionIndex)->GetStaticField(0x4DD60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_32079E1158738D7B(::Class_1_621F9F61E125BB0A* a1, ::Class_1_45C768A21A845C0D* a2, ::Class_1_91B6D33FD5BD3A1D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_621F9F61E125BB0A*, ::Class_1_45C768A21A845C0D*, ::Class_1_91B6D33FD5BD3A1D*))((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2_METHOD_1_32079E1158738D7B_OFFSET))(this, a1, a2, a3);
	}
};
