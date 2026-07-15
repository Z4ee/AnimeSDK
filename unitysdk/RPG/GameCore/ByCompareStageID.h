#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET UNITYSDK_OFFSET(0x1A8A6460)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_60F98CB5EAF79AF4_OFFSET UNITYSDK_OFFSET(0x1A8A6680)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_B26434305E57A36B_OFFSET UNITYSDK_OFFSET(0x1A8A6420)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_D5AFB104E4E1AD1B_OFFSET UNITYSDK_OFFSET(0x1A8A6650)
#define RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A6450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageID_TypeDefinitionIndex = 21756;

	class ByCompareStageID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B26434305E57A36B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_B26434305E57A36B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3947FBDA61BDB682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5AFB104E4E1AD1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_D5AFB104E4E1AD1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60F98CB5EAF79AF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_60F98CB5EAF79AF4_OFFSET))(a1, a2);
		}
	};
}
