#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_15DFF46E0F762A37_OFFSET UNITYSDK_OFFSET(0x1E16E380)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_2F95CABC1547A0EA_OFFSET UNITYSDK_OFFSET(0x1E16E360)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET UNITYSDK_OFFSET(0x1E16E300)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_F5CD0924A19DC2F6_OFFSET UNITYSDK_OFFSET(0x1E16E280)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16E2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectEnter_TypeDefinitionIndex = 23685;

	class TargetFetchDataViewUISelectEnter : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F5CD0924A19DC2F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_F5CD0924A19DC2F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B6EE849938F4D67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F95CABC1547A0EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_2F95CABC1547A0EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15DFF46E0F762A37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_15DFF46E0F762A37_OFFSET))(a1, a2);
		}
	};
}
