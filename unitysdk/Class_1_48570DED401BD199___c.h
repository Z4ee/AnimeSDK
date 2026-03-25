#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48570DED401BD199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class AsyncOperation; }

#define CLASS_1_48570DED401BD199___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D0ED0)
#define CLASS_1_48570DED401BD199___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164D0F00)
#define CLASS_1_48570DED401BD199___C___CTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x164D0F10)

inline static constexpr unsigned int Class_1_48570DED401BD199___c_TypeDefinitionIndex = 32133;

class Class_1_48570DED401BD199___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_48570DED401BD199*, ::UnityEngine::AsyncOperation*>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::Class_1_48570DED401BD199*, ::UnityEngine::AsyncOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48570DED401BD199___c_TypeDefinitionIndex)->GetStaticField(0x40C00);
	}
	static ::Class_1_48570DED401BD199___c** StaticGet___9()
	{
		return (::Class_1_48570DED401BD199___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48570DED401BD199___c_TypeDefinitionIndex)->GetStaticField(0x40C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199___C__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__68_0(::Class_1_48570DED401BD199* self, ::UnityEngine::AsyncOperation* opt)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48570DED401BD199*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199___C___CTOR_B__68_0_OFFSET))(this, self, opt);
	}
};
