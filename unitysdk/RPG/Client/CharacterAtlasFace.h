#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CharacterAtlasFaceBehaviour; }

#define RPG_CLIENT_CHARACTERATLASFACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x92FC540)
#define RPG_CLIENT_CHARACTERATLASFACE_GET_ORIGINALEMOTIONINDEX_OFFSET UNITYSDK_OFFSET(0x92FCAD0)
#define RPG_CLIENT_CHARACTERATLASFACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x92FC7F0)
#define RPG_CLIENT_CHARACTERATLASFACE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x92FC5B0)
#define RPG_CLIENT_CHARACTERATLASFACE_ONMATERIALRESET_OFFSET UNITYSDK_OFFSET(0x92FC9F0)
#define RPG_CLIENT_CHARACTERATLASFACE_REFRESHFACERENDERANDMAT_OFFSET UNITYSDK_OFFSET(0x92FC930)
#define RPG_CLIENT_CHARACTERATLASFACE_SET_ORIGINALEMOTIONINDEX_OFFSET UNITYSDK_OFFSET(0x92FCAE0)
#define RPG_CLIENT_CHARACTERATLASFACE_UPDATE_OFFSET UNITYSDK_OFFSET(0x92FC6E0)
#define RPG_CLIENT_CHARACTERATLASFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x92FCAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterAtlasFace_TypeDefinitionIndex = 57512;

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

		::System::Void set_OriginalEmotionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACE_SET_ORIGINALEMOTIONINDEX_OFFSET))(this, value);
		}
	};
}
