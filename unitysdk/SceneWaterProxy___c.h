#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define SCENEWATERPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C232260)
#define SCENEWATERPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2322A0)
#define SCENEWATERPROXY___C__SETWAVECENTERPOS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C2322B0)

inline static constexpr unsigned int SceneWaterProxy___c_TypeDefinitionIndex = 36442;

class SceneWaterProxy___c : public ::System::Object
{
public:
	static ::SceneWaterProxy___c** StaticGet___9()
	{
		return (::SceneWaterProxy___c**)Il2CppClass::FromTypeDefinitionIndex(SceneWaterProxy___c_TypeDefinitionIndex)->GetStaticField(0x27170);
	}
	static ::System::Predicate_1<::UnityEngine::GameObject*>** StaticGet___9__7_0()
	{
		return (::System::Predicate_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneWaterProxy___c_TypeDefinitionIndex)->GetStaticField(0x27178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetWaveCenterPos_b__7_0(::UnityEngine::GameObject* go)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__SETWAVECENTERPOS_B__7_0_OFFSET))(this, go);
	}
};
