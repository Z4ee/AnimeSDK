#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_3_32202389B6EC4514_OFFSET UNITYSDK_OFFSET(0x19C33E90)
#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_3_6C8099CC4DEE9CB6_OFFSET UNITYSDK_OFFSET(0x19C33F60)
#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C33F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicAttachPointEffectAdaptionConfig_TypeDefinitionIndex = 19134;

	class SetDynamicAttachPointEffectAdaptionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* ScaleAdaptTypes; // 0x20
		::System::String* EffectPathRule; // 0x28
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* AttachPointEffectAdaptionList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32202389B6EC4514(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_3_32202389B6EC4514_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C8099CC4DEE9CB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_3_6C8099CC4DEE9CB6_OFFSET))(a1, a2);
		}
	};
}
