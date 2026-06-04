#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_2E71548444E0FB04_OFFSET UNITYSDK_OFFSET(0x19D0C910)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET UNITYSDK_OFFSET(0x19CF8E90)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_B14E66FDC1D4AE06_OFFSET UNITYSDK_OFFSET(0x19D0C850)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_BF608B16759A8904_OFFSET UNITYSDK_OFFSET(0x19D054F0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF8E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectLeave_TypeDefinitionIndex = 22643;

	class TargetFetchDataViewUISelectLeave : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B14E66FDC1D4AE06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_B14E66FDC1D4AE06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95F94F6E5A6202C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_95F94F6E5A6202C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF608B16759A8904(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_BF608B16759A8904_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E71548444E0FB04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_METHOD_4_2E71548444E0FB04_OFFSET))(a1, a2);
		}
	};
}
