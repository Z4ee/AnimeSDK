#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_25DCE92F15A36C9B_OFFSET UNITYSDK_OFFSET(0x1D5AA800)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_AB68CA1DB44A7F37_OFFSET UNITYSDK_OFFSET(0x1D5AA7C0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_B283A6EC3AE66323_OFFSET UNITYSDK_OFFSET(0x1D5AA760)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_F750882A3DE2FBA2_OFFSET UNITYSDK_OFFSET(0x1D5AA6C0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageDefender_TypeDefinitionIndex = 23736;

	class TargetFetchCurrentDamageDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F750882A3DE2FBA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_F750882A3DE2FBA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B283A6EC3AE66323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_B283A6EC3AE66323_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB68CA1DB44A7F37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_AB68CA1DB44A7F37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25DCE92F15A36C9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_25DCE92F15A36C9B_OFFSET))(a1, a2);
		}
	};
}
