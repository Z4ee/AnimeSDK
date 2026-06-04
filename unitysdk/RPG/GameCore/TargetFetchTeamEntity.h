#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_0DCB201B079071AB_OFFSET UNITYSDK_OFFSET(0x19D0F230)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_63AC109185A678FF_OFFSET UNITYSDK_OFFSET(0x19D0F1C0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_B563B0EC32426EED_OFFSET UNITYSDK_OFFSET(0x19D07560)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_DF28F6B6D53B0833_OFFSET UNITYSDK_OFFSET(0x19CFC830)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFC7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTeamEntity_TypeDefinitionIndex = 22595;

	class TargetFetchTeamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63AC109185A678FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_63AC109185A678FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF28F6B6D53B0833(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_DF28F6B6D53B0833_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B563B0EC32426EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_B563B0EC32426EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DCB201B079071AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_0DCB201B079071AB_OFFSET))(a1, a2);
		}
	};
}
