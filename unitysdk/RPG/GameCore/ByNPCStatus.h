#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_1F062DE0625D1B99_OFFSET UNITYSDK_OFFSET(0x19576AB0)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_7B7EB4D6E5D3DD9A_OFFSET UNITYSDK_OFFSET(0x19576A30)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_977051FB2530E9BB_OFFSET UNITYSDK_OFFSET(0x19576760)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_A2031675BF4F6A77_OFFSET UNITYSDK_OFFSET(0x19576830)
#define RPG_GAMECORE_BYNPCSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x195767E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByNPCStatus_TypeDefinitionIndex = 18912;

	class ByNPCStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCStatus NPCStatus; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_977051FB2530E9BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNPCStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_977051FB2530E9BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2031675BF4F6A77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_A2031675BF4F6A77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B7EB4D6E5D3DD9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_7B7EB4D6E5D3DD9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F062DE0625D1B99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_1F062DE0625D1B99_OFFSET))(a1, a2);
		}
	};
}
