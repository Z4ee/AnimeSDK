#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_1F2C5148E76670EB_OFFSET UNITYSDK_OFFSET(0x19556660)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET UNITYSDK_OFFSET(0x195564C0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_C06DD73B8852ECD3_OFFSET UNITYSDK_OFFSET(0x195566E0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_FE43C45240E2DD98_OFFSET UNITYSDK_OFFSET(0x195563E0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19556460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTimelinePerform_TypeDefinitionIndex = 22033;

	class ByInTimelinePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean OnlyCloseupShot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FE43C45240E2DD98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_FE43C45240E2DD98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30D96221BE09F8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F2C5148E76670EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_1F2C5148E76670EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C06DD73B8852ECD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_C06DD73B8852ECD3_OFFSET))(a1, a2);
		}
	};
}
