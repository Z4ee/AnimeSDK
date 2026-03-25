#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20E6EF0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD__COMPARETO_G__PASSTAGIDTOINDEX_7_0_OFFSET UNITYSDK_OFFSET(0x16A5D6B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectHelper_DrawCmd_TypeDefinitionIndex = 29210;

	struct alignas(8) AvatarEffectHelper_DrawCmd
	{
		::UnityEngine::Renderer* render; // 0x10
		::UnityEngine::Material* mat; // 0x18
		::System::Int32 subMesh; // 0x20
		::System::Int32 shaderPass; // 0x24
		::System::Int32 index; // 0x28
		::System::UInt32 RLM; // 0x2C
		::System::Boolean ignoreMpb; // 0x30

		::System::Int32 CompareTo(::RPG::CustomRP::AvatarEffectHelper_DrawCmd other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::AvatarEffectHelper_DrawCmd))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Int32 _CompareTo_g__PassTagIDToIndex_7_0(::System::Int32 passTagID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD__COMPARETO_G__PASSTAGIDTOINDEX_7_0_OFFSET))(passTagID);
		}
	};
}
