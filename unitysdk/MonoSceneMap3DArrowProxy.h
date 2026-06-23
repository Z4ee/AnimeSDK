#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCENEMAP3DARROWPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12A2E020)
#define MONOSCENEMAP3DARROWPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2E070)

inline static constexpr unsigned int MonoSceneMap3DArrowProxy_TypeDefinitionIndex = 40573;

class MonoSceneMap3DArrowProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::MonoSceneMap3DArrowProxy** StaticGet_s_Map3dArrowProxy()
	{
		return (::MonoSceneMap3DArrowProxy**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DArrowProxy_TypeDefinitionIndex)->GetStaticField(0x34BC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DARROWPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DARROWPROXY_ONENABLE_OFFSET))(this);
	}
};
