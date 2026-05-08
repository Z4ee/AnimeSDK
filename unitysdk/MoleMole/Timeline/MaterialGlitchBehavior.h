#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1C4464B0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1C446AA0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C4464C0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C446CE0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C446760)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_SETCLONEGAMEOBJECTPARAMS_OFFSET UNITYSDK_OFFSET(0x1C446610)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_SETGLITCHPARAMS_OFFSET UNITYSDK_OFFSET(0x1C4468B0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C446FA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialGlitchBehavior_TypeDefinitionIndex = 30660;

	class MaterialGlitchBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::String* GlitchMaterialPath; // 0x0
		// static const ::System::String* _blockMaskTex; // 0x0
		// static const ::System::String* _blockColorA; // 0x0
		// static const ::System::String* _blockColorB; // 0x0
		// static const ::System::String* _blockColorC; // 0x0
		// static const ::System::String* _blockColorD; // 0x0
		// static const ::System::String* _screenScale; // 0x0
		// static const ::System::String* _blockMoveSpeed; // 0x0
		::UnityEngine::GameObject* bindObj; // 0x10
		::System::Boolean enableMaskTex; // 0x18
		::UnityEngine::Texture* BlockMaskTex; // 0x20
		::System::Boolean enableScreenScale; // 0x28
		::System::Single ScreenScale; // 0x2C
		::System::Boolean enableBlockColorA; // 0x30
		::UnityEngine::Color BlockColorA; // 0x34
		::System::Boolean enableBlockColorB; // 0x44
		::UnityEngine::Color BlockColorB; // 0x48
		::System::Boolean enableBlockColorC; // 0x58
		::UnityEngine::Color BlockColorC; // 0x5C
		::System::Boolean enableBlockColorD; // 0x6C
		::UnityEngine::Color BlockColorD; // 0x70
		::System::Boolean enableMoveSpeed; // 0x80
		::UnityEngine::Vector2 MoveSpeed; // 0x84
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* cachedMaterials; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* bindObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_INITDATA_OFFSET))(this, bindObj);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void SetCloneGameObjectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_SETCLONEGAMEOBJECTPARAMS_OFFSET))(this);
		}

		::System::Void SetGlitchParams(::UnityEngine::SkinnedMeshRenderer* renderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_SETGLITCHPARAMS_OFFSET))(this, renderer, index);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
