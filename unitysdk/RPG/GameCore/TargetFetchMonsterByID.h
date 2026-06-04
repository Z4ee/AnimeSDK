#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_28E8E37654A76612_OFFSET UNITYSDK_OFFSET(0x19D062E0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET UNITYSDK_OFFSET(0x19CFA6C0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_6E0EFFE1A2F28318_OFFSET UNITYSDK_OFFSET(0x19D0D930)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_A160624307D82978_OFFSET UNITYSDK_OFFSET(0x19D0D830)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFA670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMonsterByID_TypeDefinitionIndex = 22644;

	class TargetFetchMonsterByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MonsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A160624307D82978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_A160624307D82978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5770113543797A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28E8E37654A76612(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_28E8E37654A76612_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E0EFFE1A2F28318(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_6E0EFFE1A2F28318_OFFSET))(a1, a2);
		}
	};
}
