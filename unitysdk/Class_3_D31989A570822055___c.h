#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_D31989A570822055___C_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA936650)
#define CLASS_3_D31989A570822055___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA936600)
#define CLASS_3_D31989A570822055___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA936640)

inline static constexpr unsigned int Class_3_D31989A570822055___c_TypeDefinitionIndex = 47397;

class Class_3_D31989A570822055___c : public ::System::Object
{
public:
	static ::Class_3_D31989A570822055___c** StaticGet___9()
	{
		return (::Class_3_D31989A570822055___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x46E90);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x46E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C_METHOD_1_218124418542E081_OFFSET))(this);
	}
};
