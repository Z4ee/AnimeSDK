#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_24AA7F878570CD94___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x14C9E550)
#define CLASS_2_24AA7F878570CD94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C9E500)
#define CLASS_2_24AA7F878570CD94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C9E540)

inline static constexpr unsigned int Class_2_24AA7F878570CD94___c_TypeDefinitionIndex = 81434;

class Class_2_24AA7F878570CD94___c : public ::System::Object
{
public:
	static ::Class_2_24AA7F878570CD94___c** StaticGet___9()
	{
		return (::Class_2_24AA7F878570CD94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24AA7F878570CD94___c_TypeDefinitionIndex)->GetStaticField(0x35E90);
	}
	static ::System::Comparison_1<::Class_1_1B26407BD81502D9*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::Class_1_1B26407BD81502D9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24AA7F878570CD94___c_TypeDefinitionIndex)->GetStaticField(0x35E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_1B26407BD81502D9* a1, ::Class_1_1B26407BD81502D9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1B26407BD81502D9*, ::Class_1_1B26407BD81502D9*))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
