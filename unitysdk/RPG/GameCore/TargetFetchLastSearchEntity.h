#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SearchEntityType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_63BE2E2004A04615_OFFSET UNITYSDK_OFFSET(0x1D0BA5D0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_91267E0F4290A1F5_OFFSET UNITYSDK_OFFSET(0x1D0BA4F0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_CEFEC49CBAB8DA9C_OFFSET UNITYSDK_OFFSET(0x1D0BA600)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET UNITYSDK_OFFSET(0x1D0BA530)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BA520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 23031;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::SearchEntityType SearchType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_91267E0F4290A1F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_91267E0F4290A1F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF51959009FCDFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63BE2E2004A04615(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_63BE2E2004A04615_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEFEC49CBAB8DA9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_CEFEC49CBAB8DA9C_OFFSET))(a1, a2);
		}
	};
}
