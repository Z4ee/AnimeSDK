#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3B7F4C0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD__COMPARETO_G__PASSTAGIDTOINDEX_7_0_OFFSET UNITYSDK_OFFSET(0x1C668FF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectHelper_DrawCmd_TypeDefinitionIndex = 36905;

	struct alignas(8) AvatarEffectHelper_DrawCmd
	{
		::UnityEngine::Renderer* render; // 0x10
		::UnityEngine::Material* mat; // 0x18
		::System::Int32 subMesh; // 0x20
		::System::Int32 shaderPass; // 0x24
		::System::Int32 index; // 0x28
		::System::UInt32 RLM; // 0x2C
		::System::Boolean ignoreMpb; // 0x30

		::System::Int32 CompareTo(::RPG::CustomRP::AvatarEffectHelper_DrawCmd a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::AvatarEffectHelper_DrawCmd))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Int32 _CompareTo_g__PassTagIDToIndex_7_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_DRAWCMD__COMPARETO_G__PASSTAGIDTOINDEX_7_0_OFFSET))(a1);
		}
	};
}
