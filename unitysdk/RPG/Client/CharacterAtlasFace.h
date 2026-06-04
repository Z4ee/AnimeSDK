#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CharacterAtlasFaceBehaviour; }

#define RPG_CLIENT_CHARACTERATLASFACE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB580120)
#define RPG_CLIENT_CHARACTERATLASFACE_GET_ORIGINALEMOTIONINDEX_OFFSET UNITYSDK_OFFSET(0xB5806C0)
#define RPG_CLIENT_CHARACTERATLASFACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB5803E0)
#define RPG_CLIENT_CHARACTERATLASFACE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB580190)
#define RPG_CLIENT_CHARACTERATLASFACE_ONMATERIALRESET_OFFSET UNITYSDK_OFFSET(0xB5805E0)
#define RPG_CLIENT_CHARACTERATLASFACE_REFRESHFACERENDERANDMAT_OFFSET UNITYSDK_OFFSET(0xB580520)
#define RPG_CLIENT_CHARACTERATLASFACE_SET_ORIGINALEMOTIONINDEX_OFFSET UNITYSDK_OFFSET(0xB5806D0)
#define RPG_CLIENT_CHARACTERATLASFACE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB5802C0)
#define RPG_CLIENT_CHARACTERATLASFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5806E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterAtlasFace_TypeDefinitionIndex = 65697;

	class CharacterAtlasFace : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 EmotionIndex; // 0x18
		::System::Int32 _OriginalEmotionIndex_k__BackingField; // 0x1C
		::RPG::Client::CharacterAtlasFaceBehaviour* _Behavior; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshFaceRenderAndMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_REFRESHFACERENDERANDMAT_OFFSET))(this);
		}

		::System::Void OnMaterialReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_ONMATERIALRESET_OFFSET))(this);
		}

		::System::Int32 get_OriginalEmotionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_GET_ORIGINALEMOTIONINDEX_OFFSET))(this);
		}

		::System::Void set_OriginalEmotionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_SET_ORIGINALEMOTIONINDEX_OFFSET))(this, a1);
		}
	};
}
