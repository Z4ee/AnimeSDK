#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleAdventureCameraLookAtConfigTemplateEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE_METHOD_3_0BEB03EF22EEC647_OFFSET UNITYSDK_OFFSET(0x16F50890)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE_METHOD_3_36C9E2B85247B0DC_OFFSET UNITYSDK_OFFSET(0x16F50810)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F50860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAtTemplate_TypeDefinitionIndex = 20325;

	class AdventureCameraLookAtTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x20
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x28
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x30
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x38
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x40
		::RPG::GameCore::SingleAdventureCameraLookAtConfigTemplateEnum TemplateName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36C9E2B85247B0DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAtTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE_METHOD_3_36C9E2B85247B0DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BEB03EF22EEC647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAtTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATTEMPLATE_METHOD_3_0BEB03EF22EEC647_OFFSET))(a1, a2);
		}
	};
}
