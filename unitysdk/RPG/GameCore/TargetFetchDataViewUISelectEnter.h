#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_15DFF46E0F762A37_OFFSET UNITYSDK_OFFSET(0x19D0C840)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET UNITYSDK_OFFSET(0x19CF8D20)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_D4631ADD40EC9C09_OFFSET UNITYSDK_OFFSET(0x19D0C780)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_E39CF249B65BEAC7_OFFSET UNITYSDK_OFFSET(0x19D05430)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF8CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectEnter_TypeDefinitionIndex = 22642;

	class TargetFetchDataViewUISelectEnter : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D4631ADD40EC9C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_D4631ADD40EC9C09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B6EE849938F4D67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E39CF249B65BEAC7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_E39CF249B65BEAC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15DFF46E0F762A37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_15DFF46E0F762A37_OFFSET))(a1, a2);
		}
	};
}
