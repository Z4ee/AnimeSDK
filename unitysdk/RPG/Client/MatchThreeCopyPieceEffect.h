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

#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C2691C0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1C2697D0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C2696E0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_METHOD_5_B71F1B35165C7818_OFFSET UNITYSDK_OFFSET(0x1C268E10)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C269200)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1C262170)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C269180)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2698F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeCopyPieceEffect_TypeDefinitionIndex = 65975;

	class MatchThreeCopyPieceEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* MEIDIGCOFMB; // 0x0
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::System::Single ALCEJGAKKIE; // 0x20
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x28
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x30
		::UnityEngine::Transform* JDCPIMPNJCD; // 0x38
		::RPG::Client::MatchThreePiece* IOABMCKDNNC; // 0x40
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x48

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
