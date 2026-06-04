#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_0CECAC2F0569B9C0_OFFSET UNITYSDK_OFFSET(0x19559EA0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8E725B961A09D94E_OFFSET UNITYSDK_OFFSET(0x19559BC0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_B9AEF24FEE40376D_OFFSET UNITYSDK_OFFSET(0x19559E20)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET UNITYSDK_OFFSET(0x19559CA0)
#define RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19559C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAutoBattle_TypeDefinitionIndex = 21334;

	class ByIsAutoBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E725B961A09D94E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8E725B961A09D94E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF98E74910E89850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9AEF24FEE40376D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_B9AEF24FEE40376D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CECAC2F0569B9C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_0CECAC2F0569B9C0_OFFSET))(a1, a2);
		}
	};
}
