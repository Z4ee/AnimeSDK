#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPlanarReflection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_05745C45E3425330_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F8C5D0)
#define CLASS_2_05745C45E3425330_METHOD_2_068EAB519635314A_OFFSET UNITYSDK_OFFSET(0x8F8CCB0)
#define CLASS_2_05745C45E3425330_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x8F8CD00)
#define CLASS_2_05745C45E3425330_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x8F8D330)
#define CLASS_2_05745C45E3425330_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8F8D4E0)
#define CLASS_2_05745C45E3425330_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x8F8D020)
#define CLASS_2_05745C45E3425330_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x8F8C560)
#define CLASS_2_05745C45E3425330_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8F8C6C0)
#define CLASS_2_05745C45E3425330_METHOD_2_E467305BD4E10D76_OFFSET UNITYSDK_OFFSET(0x8F8D100)
#define CLASS_2_05745C45E3425330__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8D4A0)
#define CLASS_2_05745C45E3425330___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F8D550)

inline static constexpr unsigned int Class_2_05745C45E3425330_TypeDefinitionIndex = 64424;

class Class_2_05745C45E3425330 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_E467305BD4E10D76(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_E467305BD4E10D76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginPlanarReflection* Method_2_068EAB519635314A()
	{
		return ((::RPG::Client::MonoEffectPluginPlanarReflection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_068EAB519635314A_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
