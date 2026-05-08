#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_452;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_65CD671B98792583___C_METHOD_1_7519F151EAC666F9_OFFSET UNITYSDK_OFFSET(0x108106C0)
#define CLASS_1_65CD671B98792583___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10810670)
#define CLASS_1_65CD671B98792583___C__CTOR_OFFSET UNITYSDK_OFFSET(0x108106B0)

inline static constexpr unsigned int Class_1_65CD671B98792583___c_TypeDefinitionIndex = 54950;

class Class_1_65CD671B98792583___c : public ::System::Object
{
public:
	static ::Class_1_65CD671B98792583___c** StaticGet___9()
	{
		return (::Class_1_65CD671B98792583___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65CD671B98792583___c_TypeDefinitionIndex)->GetStaticField(0x3C020);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_452*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_452*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65CD671B98792583___c_TypeDefinitionIndex)->GetStaticField(0x3C028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7519F151EAC666F9(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583___C_METHOD_1_7519F151EAC666F9_OFFSET))(this, a1);
	}
};
