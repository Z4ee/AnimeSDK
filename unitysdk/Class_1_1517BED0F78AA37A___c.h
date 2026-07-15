#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_1517BED0F78AA37A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D1EAD0)
#define CLASS_1_1517BED0F78AA37A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1EB10)
#define CLASS_1_1517BED0F78AA37A___C___CTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x14D1EB20)

inline static constexpr unsigned int Class_1_1517BED0F78AA37A___c_TypeDefinitionIndex = 46007;

class Class_1_1517BED0F78AA37A___c : public ::System::Object
{
public:
	static ::Class_1_1517BED0F78AA37A___c** StaticGet___9()
	{
		return (::Class_1_1517BED0F78AA37A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1517BED0F78AA37A___c_TypeDefinitionIndex)->GetStaticField(0x6BC10);
	}
	static ::System::Func_2<::UnityEngine::Material*, ::UnityEngine::Material*>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::UnityEngine::Material*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1517BED0F78AA37A___c_TypeDefinitionIndex)->GetStaticField(0x6BC18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Material* __ctor_b__30_0(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A___C___CTOR_B__30_0_OFFSET))(this, a1);
	}
};
