#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7291C38274750BA2_1.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2B79C11DB75E38CD_METHOD_2_02185B83E012F8BC_OFFSET UNITYSDK_OFFSET(0xBC757A0)
#define CLASS_2_2B79C11DB75E38CD_METHOD_2_0C4A9FFAFD5CDB1D_OFFSET UNITYSDK_OFFSET(0xBC756E0)
#define CLASS_2_2B79C11DB75E38CD_METHOD_2_3F32421ABCC20361_OFFSET UNITYSDK_OFFSET(0xBC75D60)
#define CLASS_2_2B79C11DB75E38CD_METHOD_2_CB54FB15851F420D_OFFSET UNITYSDK_OFFSET(0xBC75730)
#define CLASS_2_2B79C11DB75E38CD_METHOD_2_CC32CC4149BFCFB6_OFFSET UNITYSDK_OFFSET(0xBC75680)
#define CLASS_2_2B79C11DB75E38CD__CTOR_OFFSET UNITYSDK_OFFSET(0xBC75670)

inline static constexpr unsigned int Class_2_2B79C11DB75E38CD_TypeDefinitionIndex = 49519;

class Class_2_2B79C11DB75E38CD : public ::Class_1_7291C38274750BA2_1
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD__CTOR_OFFSET))(this, a1);
	}

	::ScenenLightManager::LightInstanceID Method_2_CC32CC4149BFCFB6(::System::String* a1)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD_METHOD_2_CC32CC4149BFCFB6_OFFSET))(this, a1);
	}

	::ScenenLightManager::LightInstanceID Method_2_0C4A9FFAFD5CDB1D(::UnityEngine::GameObject* a1, ::SimpleJSON::JSONClass* a2)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::UnityEngine::GameObject*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD_METHOD_2_0C4A9FFAFD5CDB1D_OFFSET))(this, a1, a2);
	}

	::ScenenLightManager::LightInstanceID Method_2_CB54FB15851F420D(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD_METHOD_2_CB54FB15851F420D_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Int64 Method_2_02185B83E012F8BC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::SimpleJSON::JSONClass* a5)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD_METHOD_2_02185B83E012F8BC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int64 Method_2_3F32421ABCC20361(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B79C11DB75E38CD_METHOD_2_3F32421ABCC20361_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
