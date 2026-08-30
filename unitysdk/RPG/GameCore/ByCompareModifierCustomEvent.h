#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_13C8E48BF571509D_OFFSET UNITYSDK_OFFSET(0x1CEE6AC0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_BF4F8ED37D2527BA_OFFSET UNITYSDK_OFFSET(0x1CEE6A90)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_E933C8F3CE18E498_OFFSET UNITYSDK_OFFSET(0x1CEE68B0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_EFFEAE04FBFE50B9_OFFSET UNITYSDK_OFFSET(0x1CEE68F0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE68E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCustomEvent_TypeDefinitionIndex = 22790;

	class ByCompareModifierCustomEvent : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* EventType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E933C8F3CE18E498(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_E933C8F3CE18E498_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFFEAE04FBFE50B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_EFFEAE04FBFE50B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF4F8ED37D2527BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_BF4F8ED37D2527BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13C8E48BF571509D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_METHOD_4_13C8E48BF571509D_OFFSET))(a1, a2);
		}
	};
}
