#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_2AC622968FE2BFAB_OFFSET UNITYSDK_OFFSET(0x19533B60)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET UNITYSDK_OFFSET(0x195338F0)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_5F6C4253873DABBE_OFFSET UNITYSDK_OFFSET(0x19533AE0)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_DB250444F20A9FBE_OFFSET UNITYSDK_OFFSET(0x19533820)
#define RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET UNITYSDK_OFFSET(0x195338A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageID_TypeDefinitionIndex = 21338;

	class ByCompareStageID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB250444F20A9FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_DB250444F20A9FBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3947FBDA61BDB682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F6C4253873DABBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_5F6C4253873DABBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AC622968FE2BFAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_2AC622968FE2BFAB_OFFSET))(a1, a2);
		}
	};
}
