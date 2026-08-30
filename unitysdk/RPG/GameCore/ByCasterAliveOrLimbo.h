#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_54E0377365185D05_OFFSET UNITYSDK_OFFSET(0x1C2F7130)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_6E37C832712EAC57_OFFSET UNITYSDK_OFFSET(0x1C2F7320)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_BF213933AEEFBB70_OFFSET UNITYSDK_OFFSET(0x1C2F7170)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_E6C8789FF13F3A00_OFFSET UNITYSDK_OFFSET(0x1C2F72F0)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F7160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCasterAliveOrLimbo_TypeDefinitionIndex = 23221;

	class ByCasterAliveOrLimbo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_54E0377365185D05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_54E0377365185D05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF213933AEEFBB70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_BF213933AEEFBB70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6C8789FF13F3A00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_E6C8789FF13F3A00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E37C832712EAC57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_6E37C832712EAC57_OFFSET))(a1, a2);
		}
	};
}
