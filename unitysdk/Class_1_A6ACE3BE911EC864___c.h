#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6CFD545CB9F30D6;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A6ACE3BE911EC864___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x17136490)
#define CLASS_1_A6ACE3BE911EC864___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17136440)
#define CLASS_1_A6ACE3BE911EC864___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17136480)

inline static constexpr unsigned int Class_1_A6ACE3BE911EC864___c_TypeDefinitionIndex = 57774;

class Class_1_A6ACE3BE911EC864___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_C6CFD545CB9F30D6*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_C6CFD545CB9F30D6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6ACE3BE911EC864___c_TypeDefinitionIndex)->GetStaticField(0x47D90);
	}
	static ::Class_1_A6ACE3BE911EC864___c** StaticGet___9()
	{
		return (::Class_1_A6ACE3BE911EC864___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6ACE3BE911EC864___c_TypeDefinitionIndex)->GetStaticField(0x47D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6ACE3BE911EC864___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6ACE3BE911EC864___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_C6CFD545CB9F30D6* a1, ::Class_1_C6CFD545CB9F30D6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C6CFD545CB9F30D6*, ::Class_1_C6CFD545CB9F30D6*))((::PBYTE)hIl2Cpp + CLASS_1_A6ACE3BE911EC864___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
