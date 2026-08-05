#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_F371A089E2CCAF5E___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12D853F0)
#define CLASS_3_F371A089E2CCAF5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D853A0)
#define CLASS_3_F371A089E2CCAF5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D853E0)

inline static constexpr unsigned int Class_3_F371A089E2CCAF5E___c_TypeDefinitionIndex = 87175;

class Class_3_F371A089E2CCAF5E___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F371A089E2CCAF5E___c_TypeDefinitionIndex)->GetStaticField(0x35F50);
	}
	static ::Class_3_F371A089E2CCAF5E___c** StaticGet___9()
	{
		return (::Class_3_F371A089E2CCAF5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F371A089E2CCAF5E___c_TypeDefinitionIndex)->GetStaticField(0x35F58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
