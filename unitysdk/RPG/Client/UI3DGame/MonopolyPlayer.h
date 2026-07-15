#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine::Unity { class SkeletonMecanim; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_GETWORLDPOS_OFFSET UNITYSDK_OFFSET(0x16FF5640)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_METHOD_7_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16FF55F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FF55A0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x16FF4060)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x16FF5440)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x16FF54B0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x16FF5530)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_START_OFFSET UNITYSDK_OFFSET(0x16FF56E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16FF5930)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF5A70)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyPlayer_TypeDefinitionIndex = 72091;

	class MonopolyPlayer : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::UnityEngine::Animator* Field_7_0; // 0x30
		::Spine::Unity::SkeletonMecanim* Field_7_1; // 0x38
		::UnityEngine::Animator* Field_7_2; // 0x40
		::System::String* Field_7_3; // 0x48
		::UnityEngine::Transform* AvatarGirlRoot; // 0x50
		::UnityEngine::Transform* AvatarBoyRoot; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_7_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_METHOD_7_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PLAYANIM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_GETWORLDPOS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_UPDATE_OFFSET))(this);
		}
	};
}
