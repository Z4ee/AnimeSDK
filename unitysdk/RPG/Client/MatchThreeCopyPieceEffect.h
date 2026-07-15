#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreePiece; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A897F40)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A898550)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A898460)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_B71F1B35165C7818_OFFSET UNITYSDK_OFFSET(0x1A897B90)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A897F80)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A890EE0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A897F00)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A898670)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeCopyPieceEffect_TypeDefinitionIndex = 62990;

	class MatchThreeCopyPieceEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::RPG::Client::MatchThreeBoard* Field_5_1; // 0x18
		::System::Single Field_5_2; // 0x20
		::UnityEngine::Transform* Field_5_3; // 0x28
		::UnityEngine::Transform* Field_5_4; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
		::RPG::Client::MatchThreePiece* Field_5_6; // 0x40
		::RPG::Client::UIPrefabLoader* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::Class_1_1D65C84443DC695F* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_B71F1B35165C7818(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_1D65C84443DC695F* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_1D65C84443DC695F*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_B71F1B35165C7818_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
