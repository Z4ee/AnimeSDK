#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }

#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_METHOD_2_32BB4B7DC074E5C3_OFFSET UNITYSDK_OFFSET(0x1D3A6B70)
#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A6D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolutionAdaptionConfig_TypeDefinitionIndex = 16943;

	class ResolutionAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamFormationTemplateSingleConfig*>* TemplateSingleConfigList; // 0x10
		::System::Single InitFOV; // 0x18
		::RPG::MVector3 GamePreviewFixAnchorOffset; // 0x1C
		::RPG::MVector3 GamePreviewFixAimOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_32BB4B7DC074E5C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResolutionAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResolutionAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_METHOD_2_32BB4B7DC074E5C3_OFFSET))(a1, a2);
		}
	};
}
