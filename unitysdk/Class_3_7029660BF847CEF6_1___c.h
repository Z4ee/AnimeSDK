#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_7029660BF847CEF6_1___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xD86F2E0)
#define CLASS_3_7029660BF847CEF6_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD86F290)
#define CLASS_3_7029660BF847CEF6_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD86F2D0)

inline static constexpr unsigned int Class_3_7029660BF847CEF6_1___c_TypeDefinitionIndex = 76849;

class Class_3_7029660BF847CEF6_1___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7029660BF847CEF6_1___c_TypeDefinitionIndex)->GetStaticField(0x4C770);
	}
	static ::Class_3_7029660BF847CEF6_1___c** StaticGet___9()
	{
		return (::Class_3_7029660BF847CEF6_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7029660BF847CEF6_1___c_TypeDefinitionIndex)->GetStaticField(0x4C778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6_1___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
