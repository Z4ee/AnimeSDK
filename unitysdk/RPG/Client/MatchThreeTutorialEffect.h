#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B518C0)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_METHOD_5_C1062F26C50C07EE_OFFSET UNITYSDK_OFFSET(0x9B51B80)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B51C40)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9B51A20)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SETARROWVISIBLE_OFFSET UNITYSDK_OFFSET(0x9B51D00)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9B51900)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B51880)
#define RPG_CLIENT_MATCHTHREETUTORIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B51D90)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeTutorialEffect_TypeDefinitionIndex = 53588;

	class MatchThreeTutorialEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		::RPG::Client::MatchThreeBoard* Field_5_0; // 0x18
		::UnityEngine::Animation* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_PLAY_OFFSET))(this, a1);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetArrowVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_SETARROWVISIBLE_OFFSET))(this, a1);
		}

		::System::String* Method_5_C1062F26C50C07EE(::UnityEngine::Vector2Int a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETUTORIALEFFECT_METHOD_5_C1062F26C50C07EE_OFFSET))(this, a1);
		}
	};
}
