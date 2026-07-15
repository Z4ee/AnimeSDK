#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CharacterDissolveBehavior; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_CHARACTERDISSOLVE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x19202630)
#define RPG_CLIENT_CHARACTERDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19202680)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterDissolve_TypeDefinitionIndex = 67118;

	class CharacterDissolve : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CharacterDissolveBehavior*>
	{
	public:
		::Il2CppArray<::System::Int32>* TargetMatIndexes; // 0x30
		::System::Boolean _EnableDissolve; // 0x38
		::System::Boolean Toggle_DissolveMap; // 0x39
		::UnityEngine::Texture2D* _DissolveMap; // 0x40
		::System::Boolean Toggle_DissolveST; // 0x48
		::UnityEngine::Vector4 _DissolveST; // 0x4C
		::System::Boolean Toggle_DistortionST; // 0x5C
		::UnityEngine::Vector4 _DistortionST; // 0x60
		::System::Boolean Toggle_DissolveRate; // 0x70
		::System::Single _DissolveRate; // 0x74
		::System::Boolean Toggle_DissolveUV; // 0x78
		::System::Single _DissolveUV; // 0x7C
		::System::Boolean Toggle_DissolveDistortionIntensity; // 0x80
		::System::Single _DissolveDistortionIntensity; // 0x84
		::System::Boolean Toggle_DissolveOutlineSize1; // 0x88
		::System::Single _DissolveOutlineSize1; // 0x8C
		::System::Boolean Toggle_DissolveOutlineSize2; // 0x90
		::System::Single _DissolveOutlineSize2; // 0x94
		::System::Boolean Toggle_DissolveOutlineEmission; // 0x98
		::System::Single _DissolveOutlineEmission; // 0x9C
		::System::Boolean Toggle_DissolveMapAdd; // 0xA0
		::System::Single _DissolveMapAdd; // 0xA4
		::System::Boolean Toggle_DissolveOutlineColor1; // 0xA8
		::UnityEngine::Color _DissolveOutlineColor1; // 0xAC
		::System::Boolean Toggle_DissolveOutlineColor2; // 0xBC
		::UnityEngine::Color _DissolveOutlineColor2; // 0xC0
		::System::Boolean Toggle_DissoveDirecMask; // 0xD0
		::System::Single _DissoveDirecMask; // 0xD4
		::System::Boolean Toggle_DissolveUVSpeed; // 0xD8
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0xDC
		::System::Boolean Toggle_DissolveOutlineSmoothStep; // 0xEC
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0xF0
		::System::Boolean Toggle_DissolveMask; // 0xF8
		::UnityEngine::Texture2D* _DissolveMask; // 0x100
		::System::Boolean Toggle_DissolveMaskUVSet; // 0x108
		::System::Single _DissolveMaskUVSet; // 0x10C
		::System::Boolean Toggle_DissolveComponent; // 0x110
		::UnityEngine::Vector4 _DissolveComponent; // 0x114
		::System::Boolean Toggle_DissolvePosMaskOn; // 0x124
		::System::Single _DissolvePosMaskOn; // 0x128
		::System::Boolean Toggle_DissolvePosMaskWorldON; // 0x12C
		::System::Single _DissolvePosMaskWorldON; // 0x130
		::System::Boolean Toggle_DissolvePosMaskFilpOn; // 0x134
		::System::Single _DissolvePosMaskFilpOn; // 0x138
		::System::Boolean Toggle_DissolvePosMaskRootOffset; // 0x13C
		::UnityEngine::Vector3 _DissolvePosMaskRootOffset; // 0x140
		::System::Boolean Toggle_DissolvePosTarget; // 0x14C
		::UnityEngine::GameObject* _DissolvePosTarget; // 0x150
		::System::Boolean Toggle_DissolvePosRange; // 0x158
		::System::Single _DissolvePosMaskRange; // 0x15C
		::System::Boolean Toggle_UseDither; // 0x160
		::System::Boolean _UseDither; // 0x161
		::System::Boolean Toggle_DitherAlpha; // 0x162
		::System::Single _DitherAlpha; // 0x164
		::System::Boolean Toggle_DissolveShadowOff; // 0x168
		::System::Int32 _DissolveShadowOff; // 0x16C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
