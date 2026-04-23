#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class FrameBlending_IFrameBlendingEndOP; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMEBLENDING_ENDBLENDING_OFFSET UNITYSDK_OFFSET(0x1813DCC0)
#define RPG_CUSTOMRP_FRAMEBLENDING_STARTBLENDING_OFFSET UNITYSDK_OFFSET(0x1813DC40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameBlending_TypeDefinitionIndex = 34995;

	class FrameBlending : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP** StaticGet__Op()
		{
			return (::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP**)Il2CppClass::FromTypeDefinitionIndex(FrameBlending_TypeDefinitionIndex)->GetStaticField(0x66DD0);
		}

		static ::System::Void StartBlending(::UnityEngine::RenderTexture* rt, ::System::Single startWeight, ::System::Single durationSec, ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP* op)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Single, ::System::Single, ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEBLENDING_STARTBLENDING_OFFSET))(rt, startWeight, durationSec, op);
		}

		static ::System::Void EndBlending()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEBLENDING_ENDBLENDING_OFFSET))();
		}
	};
}
