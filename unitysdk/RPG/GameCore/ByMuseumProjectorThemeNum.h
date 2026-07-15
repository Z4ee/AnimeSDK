#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_217730BDDA66FFFE_OFFSET UNITYSDK_OFFSET(0x1B2AF130)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_25B874263C7A1DAC_OFFSET UNITYSDK_OFFSET(0x1B2AEF50)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_C4927A9BE1AE9AF0_OFFSET UNITYSDK_OFFSET(0x1B2AF100)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_C8E7C089C86DD9ED_OFFSET UNITYSDK_OFFSET(0x1B2AEF10)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AEF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMuseumProjectorThemeNum_TypeDefinitionIndex = 19768;

	class ByMuseumProjectorThemeNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 ThemeNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8E7C089C86DD9ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_C8E7C089C86DD9ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25B874263C7A1DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_25B874263C7A1DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4927A9BE1AE9AF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_C4927A9BE1AE9AF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_217730BDDA66FFFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_217730BDDA66FFFE_OFFSET))(a1, a2);
		}
	};
}
