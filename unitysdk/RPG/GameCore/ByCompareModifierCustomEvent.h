#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_28865CAFB703FEE3_OFFSET UNITYSDK_OFFSET(0x1951FF20)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_B4FF6245B7942C82_OFFSET UNITYSDK_OFFSET(0x1951FFA0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_CB3CEE0FC00186DB_OFFSET UNITYSDK_OFFSET(0x1951FCB0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_EFFEAE04FBFE50B9_OFFSET UNITYSDK_OFFSET(0x1951FD80)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1951FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCustomEvent_TypeDefinitionIndex = 21795;

	class ByCompareModifierCustomEvent : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* EventType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB3CEE0FC00186DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_CB3CEE0FC00186DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFFEAE04FBFE50B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_EFFEAE04FBFE50B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28865CAFB703FEE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_28865CAFB703FEE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4FF6245B7942C82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_B4FF6245B7942C82_OFFSET))(a1, a2);
		}
	};
}
