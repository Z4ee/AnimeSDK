#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_024E6EAD5C6B6EE6_OFFSET UNITYSDK_OFFSET(0x1D0BB080)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET UNITYSDK_OFFSET(0x1D0BAFF0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_C272453067BB5436_OFFSET UNITYSDK_OFFSET(0x1D0BAF40)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D730CAEB0F601599_OFFSET UNITYSDK_OFFSET(0x1D0BB0B0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BAFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMonsterByID_TypeDefinitionIndex = 23107;

	class TargetFetchMonsterByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MonsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C272453067BB5436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_C272453067BB5436_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5770113543797A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_024E6EAD5C6B6EE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_024E6EAD5C6B6EE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D730CAEB0F601599(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D730CAEB0F601599_OFFSET))(a1, a2);
		}
	};
}
