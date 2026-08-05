#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_97F4CB13AAF72DAF___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xF7BA7E0)
#define CLASS_2_97F4CB13AAF72DAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7BA790)
#define CLASS_2_97F4CB13AAF72DAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7BA7D0)

inline static constexpr unsigned int Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex = 52096;

class Class_2_97F4CB13AAF72DAF___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__20_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex)->GetStaticField(0x30EE0);
	}
	static ::Class_2_97F4CB13AAF72DAF___c** StaticGet___9()
	{
		return (::Class_2_97F4CB13AAF72DAF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex)->GetStaticField(0x30EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_97F4CB13AAF72DAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97F4CB13AAF72DAF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97F4CB13AAF72DAF___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
