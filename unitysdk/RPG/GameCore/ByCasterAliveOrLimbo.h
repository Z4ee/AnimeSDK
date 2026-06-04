#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_606995558352C5E0_OFFSET UNITYSDK_OFFSET(0x194F6600)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_8277AEA3348B140D_OFFSET UNITYSDK_OFFSET(0x194F6580)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_BF213933AEEFBB70_OFFSET UNITYSDK_OFFSET(0x194F6400)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_CC86FE61A137416E_OFFSET UNITYSDK_OFFSET(0x194F6330)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x194F63B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCasterAliveOrLimbo_TypeDefinitionIndex = 22207;

	class ByCasterAliveOrLimbo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC86FE61A137416E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_CC86FE61A137416E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF213933AEEFBB70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_BF213933AEEFBB70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8277AEA3348B140D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_8277AEA3348B140D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_606995558352C5E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_METHOD_4_606995558352C5E0_OFFSET))(a1, a2);
		}
	};
}
