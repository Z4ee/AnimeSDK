#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_METHOD_2_11C05085C39B8404_OFFSET UNITYSDK_OFFSET(0x1885F7F0)
#define RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1885F920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEntityInteractOverride_TypeDefinitionIndex = 19344;

	class DialogueEntityInteractOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideVCamBlendConfig; // 0x10
		::RPG::GameCore::VCameraBlend* VCamBlendConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11C05085C39B8404(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEntityInteractOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEntityInteractOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_METHOD_2_11C05085C39B8404_OFFSET))(a1, a2);
		}
	};
}
