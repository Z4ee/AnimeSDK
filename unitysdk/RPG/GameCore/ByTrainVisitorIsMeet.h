#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_0E02D54FC9FA56C8_OFFSET UNITYSDK_OFFSET(0x1CF680D0)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_1D0414B28B547B9A_OFFSET UNITYSDK_OFFSET(0x1CF67E80)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_46408169AA11FCC4_OFFSET UNITYSDK_OFFSET(0x1CF68080)
#define RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_C159910D9C7847B2_OFFSET UNITYSDK_OFFSET(0x1CF67F00)
#define RPG_GAMECORE_BYTRAINVISITORISMEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF67ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTrainVisitorIsMeet_TypeDefinitionIndex = 21433;

	class ByTrainVisitorIsMeet : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D0414B28B547B9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_1D0414B28B547B9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C159910D9C7847B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_C159910D9C7847B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46408169AA11FCC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_46408169AA11FCC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E02D54FC9FA56C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTRAINVISITORISMEET_METHOD_4_0E02D54FC9FA56C8_OFFSET))(a1, a2);
		}
	};
}
