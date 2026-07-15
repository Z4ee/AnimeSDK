#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_31DCD7724FE9141B_OFFSET UNITYSDK_OFFSET(0x1B2C4A30)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_98BB681ACB64367E_OFFSET UNITYSDK_OFFSET(0x1B2C4BB0)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_B97FC72BF527FB78_OFFSET UNITYSDK_OFFSET(0x1B2C4A70)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_FD0646149EEB0A93_OFFSET UNITYSDK_OFFSET(0x1B2C4BE0)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C4A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerActionPhaseEnd_TypeDefinitionIndex = 22639;

	class ByTurnOwnerActionPhaseEnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_31DCD7724FE9141B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_31DCD7724FE9141B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B97FC72BF527FB78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_B97FC72BF527FB78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98BB681ACB64367E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_98BB681ACB64367E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD0646149EEB0A93(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_FD0646149EEB0A93_OFFSET))(a1, a2);
		}
	};
}
