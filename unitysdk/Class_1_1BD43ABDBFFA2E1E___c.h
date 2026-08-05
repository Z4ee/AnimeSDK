#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916778923E38503B;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1BD43ABDBFFA2E1E___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0xF7B1BE0)
#define CLASS_1_1BD43ABDBFFA2E1E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7B1B90)
#define CLASS_1_1BD43ABDBFFA2E1E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B1BD0)

inline static constexpr unsigned int Class_1_1BD43ABDBFFA2E1E___c_TypeDefinitionIndex = 78870;

class Class_1_1BD43ABDBFFA2E1E___c : public ::System::Object
{
public:
	static ::Class_1_1BD43ABDBFFA2E1E___c** StaticGet___9()
	{
		return (::Class_1_1BD43ABDBFFA2E1E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1BD43ABDBFFA2E1E___c_TypeDefinitionIndex)->GetStaticField(0x30ED0);
	}
	static ::System::Comparison_1<::Class_1_916778923E38503B*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_916778923E38503B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1BD43ABDBFFA2E1E___c_TypeDefinitionIndex)->GetStaticField(0x30ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_916778923E38503B* a1, ::Class_1_916778923E38503B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_916778923E38503B*, ::Class_1_916778923E38503B*))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
