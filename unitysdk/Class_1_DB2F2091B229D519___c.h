#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_590;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_DB2F2091B229D519___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x15BFD750)
#define CLASS_1_DB2F2091B229D519___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BFD700)
#define CLASS_1_DB2F2091B229D519___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFD740)

inline static constexpr unsigned int Class_1_DB2F2091B229D519___c_TypeDefinitionIndex = 12538;

class Class_1_DB2F2091B229D519___c : public ::System::Object
{
public:
	static ::Class_1_DB2F2091B229D519___c** StaticGet___9()
	{
		return (::Class_1_DB2F2091B229D519___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB2F2091B229D519___c_TypeDefinitionIndex)->GetStaticField(0x8D80);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_590*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_590*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB2F2091B229D519___c_TypeDefinitionIndex)->GetStaticField(0x8D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB2F2091B229D519___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2091B229D519___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_590* a1, ::Class_2_208CC9941471731A_590* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_590*, ::Class_2_208CC9941471731A_590*))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2091B229D519___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
