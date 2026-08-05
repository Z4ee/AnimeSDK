#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;
class Class_1_621F9F61E125BB0A;
class Class_1_F50CC8D9599D41DE;

#define CLASS_1_ED57AC46E41CFDF2_METHOD_1_32079E1158738D7B_OFFSET UNITYSDK_OFFSET(0x1DB60480)
#define CLASS_1_ED57AC46E41CFDF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB60AA0)
#define CLASS_1_ED57AC46E41CFDF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB60A90)

inline static constexpr unsigned int Class_1_ED57AC46E41CFDF2_TypeDefinitionIndex = 92644;

class Class_1_ED57AC46E41CFDF2 : public ::System::Object
{
public:
	static ::Class_1_ED57AC46E41CFDF2** StaticGet_Field_1_0()
	{
		return (::Class_1_ED57AC46E41CFDF2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED57AC46E41CFDF2_TypeDefinitionIndex)->GetStaticField(0x51DD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_32079E1158738D7B(::Class_1_621F9F61E125BB0A* a1, ::Class_1_F50CC8D9599D41DE* a2, ::Class_1_34A82ADD3D230E95* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_621F9F61E125BB0A*, ::Class_1_F50CC8D9599D41DE*, ::Class_1_34A82ADD3D230E95*))((::PBYTE)hIl2Cpp + CLASS_1_ED57AC46E41CFDF2_METHOD_1_32079E1158738D7B_OFFSET))(this, a1, a2, a3);
	}
};
