#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_97F4CB13AAF72DAF___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x14CECAF0)
#define CLASS_2_97F4CB13AAF72DAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CECAA0)
#define CLASS_2_97F4CB13AAF72DAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CECAE0)

inline static constexpr unsigned int Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex = 42199;

class Class_2_97F4CB13AAF72DAF___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__20_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex)->GetStaticField(0x2C040);
	}
	static ::Class_2_97F4CB13AAF72DAF___c** StaticGet___9()
	{
		return (::Class_2_97F4CB13AAF72DAF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97F4CB13AAF72DAF___c_TypeDefinitionIndex)->GetStaticField(0x2C048);
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
