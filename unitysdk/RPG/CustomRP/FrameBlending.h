#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class FrameBlending_IFrameBlendingEndOP; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMEBLENDING_ENDBLENDING_OFFSET UNITYSDK_OFFSET(0x16BEA220)
#define RPG_CUSTOMRP_FRAMEBLENDING_STARTBLENDING_OFFSET UNITYSDK_OFFSET(0x16BEA1D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameBlending_TypeDefinitionIndex = 36062;

	class FrameBlending : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP** StaticGet__Op()
		{
			return (::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP**)Il2CppClass::FromTypeDefinitionIndex(FrameBlending_TypeDefinitionIndex)->GetStaticField(0x600B0);
		}

		static ::System::Void StartBlending(::UnityEngine::RenderTexture* a1, ::System::Single a2, ::System::Single a3, ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP* a4)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Single, ::System::Single, ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEBLENDING_STARTBLENDING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EndBlending()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEBLENDING_ENDBLENDING_OFFSET))();
		}
	};
}
