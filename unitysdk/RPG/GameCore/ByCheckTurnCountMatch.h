#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_0D65CCDE7FA63E4A;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_00DEDFD03A29182A_OFFSET UNITYSDK_OFFSET(0x170016C0)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_B71F6D5F839ED98D_OFFSET UNITYSDK_OFFSET(0x17001790)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17001740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTurnCountMatch_TypeDefinitionIndex = 21670;

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

		static ::System::Void Method_4_00DEDFD03A29182A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_00DEDFD03A29182A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B71F6D5F839ED98D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_METHOD_4_B71F6D5F839ED98D_OFFSET))(a1, a2);
		}
	};
}
