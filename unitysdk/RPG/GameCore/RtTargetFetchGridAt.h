#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_04C92C8614883312_OFFSET UNITYSDK_OFFSET(0x19BF34C0)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_8524A1C54702E6C5_OFFSET UNITYSDK_OFFSET(0x19BF3290)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_D5C82FE573414BD1_OFFSET UNITYSDK_OFFSET(0x19BF3530)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_F8B69ACDB642CA14_OFFSET UNITYSDK_OFFSET(0x19BF3350)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF3300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchGridAt_TypeDefinitionIndex = 22917;

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

		static ::System::Void Method_4_8524A1C54702E6C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_8524A1C54702E6C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8B69ACDB642CA14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_F8B69ACDB642CA14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_04C92C8614883312(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_04C92C8614883312_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5C82FE573414BD1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_D5C82FE573414BD1_OFFSET))(a1, a2);
		}
	};
}
