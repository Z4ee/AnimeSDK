#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PEROBJECTSHADOWGIZMOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F11F0)
#define PEROBJECTSHADOWGIZMOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F1230)
#define PEROBJECTSHADOWGIZMOS___C__DRAWGIZMOS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A2F1240)
#define PEROBJECTSHADOWGIZMOS___C__DRAWGIZMOS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1A2F1270)

inline static constexpr unsigned int PerObjectShadowGizmos___c_TypeDefinitionIndex = 29628;

class PerObjectShadowGizmos___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>** StaticGet___9__10_1()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowGizmos___c_TypeDefinitionIndex)->GetStaticField(0x23370);
	}
	static ::PerObjectShadowGizmos___c** StaticGet___9()
	{
		return (::PerObjectShadowGizmos___c**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowGizmos___c_TypeDefinitionIndex)->GetStaticField(0x23378);
	}
	static ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>** StaticGet___9__10_0()
	{
		return (::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowGizmos___c_TypeDefinitionIndex)->GetStaticField(0x23380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 _DrawGizmos_b__10_0(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS___C__DRAWGIZMOS_B__10_0_OFFSET))(this, a, b);
	}

	::UnityEngine::Vector3 _DrawGizmos_b__10_1(::UnityEngine::Vector3 x)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS___C__DRAWGIZMOS_B__10_1_OFFSET))(this, x);
	}
};
