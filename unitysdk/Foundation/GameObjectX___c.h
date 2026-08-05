#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_GAMEOBJECTX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED8CF10)
#define FOUNDATION_GAMEOBJECTX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8CF50)
#define FOUNDATION_GAMEOBJECTX___C__GETCHILDBYABSPATH_B__8_0_OFFSET UNITYSDK_OFFSET(0x1ED8CF60)

namespace Foundation
{
	inline static constexpr unsigned int GameObjectX___c_TypeDefinitionIndex = 8184;

	class GameObjectX___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GameObjectX___c_TypeDefinitionIndex)->GetStaticField(0x6B20);
		}
		static ::Foundation::GameObjectX___c** StaticGet___9()
		{
			return (::Foundation::GameObjectX___c**)Il2CppClass::FromTypeDefinitionIndex(GameObjectX___c_TypeDefinitionIndex)->GetStaticField(0x6B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChildByAbsPath_b__8_0(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX___C__GETCHILDBYABSPATH_B__8_0_OFFSET))(this, scene);
		}
	};
}
