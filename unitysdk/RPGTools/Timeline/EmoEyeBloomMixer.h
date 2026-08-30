#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class RendererMaterialCache; }
namespace RPGTools::Timeline { class EyeBloomData; }
namespace System { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_49B17BDAFA3D54D9_OFFSET UNITYSDK_OFFSET(0x1B5701B0)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_7C95720B8B9EAE7D_OFFSET UNITYSDK_OFFSET(0x1B570670)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_823FA1EEB61BCA73_OFFSET UNITYSDK_OFFSET(0x1B5709C0)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B56FBD0)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B570B50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeBloomMixer_TypeDefinitionIndex = 48573;

	class EmoEyeBloomMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* Renderer; // 0x10
		::System::Boolean _FirstFrame; // 0x18
		::RPGTools::Timeline::EyeBloomData* _OriginData; // 0x20
		::System::Int32 _FaceMatIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_2_49B17BDAFA3D54D9(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_49B17BDAFA3D54D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_7C95720B8B9EAE7D(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_7C95720B8B9EAE7D_OFFSET))(this, a1);
		}

		::System::Void Method_2_823FA1EEB61BCA73(::RPG::Client::RendererMaterialCache* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RendererMaterialCache*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_METHOD_2_823FA1EEB61BCA73_OFFSET))(this, a1, a2);
		}
	};
}
