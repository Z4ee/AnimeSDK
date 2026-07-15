#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_2E71548444E0FB04_OFFSET UNITYSDK_OFFSET(0x1D0B96A0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_8CF08C86B50E0671_OFFSET UNITYSDK_OFFSET(0x1D0B9680)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET UNITYSDK_OFFSET(0x1D0B9620)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_FEC2B752BA0E6D99_OFFSET UNITYSDK_OFFSET(0x1D0B95A0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B9610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectLeave_TypeDefinitionIndex = 23106;

	class TargetFetchDataViewUISelectLeave : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FEC2B752BA0E6D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_FEC2B752BA0E6D99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95F94F6E5A6202C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CF08C86B50E0671(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_8CF08C86B50E0671_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E71548444E0FB04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_2E71548444E0FB04_OFFSET))(a1, a2);
		}
	};
}
