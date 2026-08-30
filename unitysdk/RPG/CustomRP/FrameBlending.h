#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class FrameBlending_IFrameBlendingEndOP; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMEBLENDING_ENDBLENDING_OFFSET UNITYSDK_OFFSET(0x1C6AA810)
#define RPG_CUSTOMRP_FRAMEBLENDING_STARTBLENDING_OFFSET UNITYSDK_OFFSET(0x1C6AA7C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameBlending_TypeDefinitionIndex = 36922;

	class FrameBlending : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP** StaticGet__Op()
		{
			return (::RPG::CustomRP::FrameBlending_IFrameBlendingEndOP**)Il2CppClass::FromTypeDefinitionIndex(FrameBlending_TypeDefinitionIndex)->GetStaticField(0x3ACA0);
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
