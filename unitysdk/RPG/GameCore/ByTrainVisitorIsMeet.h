#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_065AA43062F5A99D_OFFSET UNITYSDK_OFFSET(0x195DF680)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_84CBAA5A2A140879_OFFSET UNITYSDK_OFFSET(0x195DF360)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_B234BEB3D6D8BA86_OFFSET UNITYSDK_OFFSET(0x195DF760)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_C159910D9C7847B2_OFFSET UNITYSDK_OFFSET(0x195DF500)
#define RPG_GAMECORE_BYTRAINVISITORISMEET__CTOR_OFFSET UNITYSDK_OFFSET(0x195DF440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTrainVisitorIsMeet_TypeDefinitionIndex = 20462;

	class ByTrainVisitorIsMeet : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_84CBAA5A2A140879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_84CBAA5A2A140879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C159910D9C7847B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_C159910D9C7847B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_065AA43062F5A99D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_065AA43062F5A99D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B234BEB3D6D8BA86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_B234BEB3D6D8BA86_OFFSET))(a1, a2);
		}
	};
}
