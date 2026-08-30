#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_1D21305067D4C51F_OFFSET UNITYSDK_OFFSET(0x1D5AC5F0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET UNITYSDK_OFFSET(0x1D5AC6C0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D7293E1A7BD3CACF_OFFSET UNITYSDK_OFFSET(0x1D5AC750)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D730CAEB0F601599_OFFSET UNITYSDK_OFFSET(0x1D5AC7A0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMonsterByID_TypeDefinitionIndex = 23687;

	class TargetFetchMonsterByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MonsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D21305067D4C51F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_1D21305067D4C51F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5770113543797A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7293E1A7BD3CACF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D7293E1A7BD3CACF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D730CAEB0F601599(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_D730CAEB0F601599_OFFSET))(a1, a2);
		}
	};
}
