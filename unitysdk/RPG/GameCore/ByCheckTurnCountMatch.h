#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_0D65CCDE7FA63E4A;
class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_34AFEC22291E59E3_OFFSET UNITYSDK_OFFSET(0x1CEAE8F0)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_7F61FA6F25773A0C_OFFSET UNITYSDK_OFFSET(0x1CEAE8C0)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_960D4C86CAE9D48C_OFFSET UNITYSDK_OFFSET(0x1CEAE680)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_B71F6D5F839ED98D_OFFSET UNITYSDK_OFFSET(0x1CEAE6C0)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAE6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTurnCountMatch_TypeDefinitionIndex = 23176;

	class ByCheckTurnCountMatch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 RoundCount; // 0x20
		::RPG::GameCore::TeamType TeamType; // 0x24
		::System::UInt32 TargetID; // 0x28
		::Class_1_0D65CCDE7FA63E4A* OverrideConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_960D4C86CAE9D48C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_960D4C86CAE9D48C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B71F6D5F839ED98D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_B71F6D5F839ED98D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F61FA6F25773A0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_7F61FA6F25773A0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34AFEC22291E59E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_34AFEC22291E59E3_OFFSET))(a1, a2);
		}
	};
}
