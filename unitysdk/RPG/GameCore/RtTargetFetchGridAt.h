#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_4A847605CF9EC49F_OFFSET UNITYSDK_OFFSET(0x1B76BE40)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_BAAEFDEADA629EED_OFFSET UNITYSDK_OFFSET(0x1B76BFF0)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_BAF1EC6006D7054B_OFFSET UNITYSDK_OFFSET(0x1B76C020)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_F8B69ACDB642CA14_OFFSET UNITYSDK_OFFSET(0x1B76BE80)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchGridAt_TypeDefinitionIndex = 23384;

	class RtTargetFetchGridAt : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* BasePos; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* x; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* y; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A847605CF9EC49F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_4A847605CF9EC49F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8B69ACDB642CA14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_F8B69ACDB642CA14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAAEFDEADA629EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_BAAEFDEADA629EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAF1EC6006D7054B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_BAF1EC6006D7054B_OFFSET))(a1, a2);
		}
	};
}
