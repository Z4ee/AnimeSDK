#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_2C598428CE8BE1F1_OFFSET UNITYSDK_OFFSET(0x1D5AC8C0)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_5C8D2A1C277BEB9C_OFFSET UNITYSDK_OFFSET(0x1D5AC940)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_620D272EA63DC9D9_OFFSET UNITYSDK_OFFSET(0x1D5AC9A0)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_63BD0030280AA40C_OFFSET UNITYSDK_OFFSET(0x1D5AC9C0)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNextSkillCaster_TypeDefinitionIndex = 23700;

	class TargetFetchNextSkillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2C598428CE8BE1F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_2C598428CE8BE1F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C8D2A1C277BEB9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextSkillCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_5C8D2A1C277BEB9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_620D272EA63DC9D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_620D272EA63DC9D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63BD0030280AA40C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_63BD0030280AA40C_OFFSET))(a1, a2);
		}
	};
}
