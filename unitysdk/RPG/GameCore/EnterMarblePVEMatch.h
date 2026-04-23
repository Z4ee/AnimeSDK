#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTERMARBLEPVEMATCH_METHOD_3_3D7C2C93380FBE7C_OFFSET UNITYSDK_OFFSET(0x188AC720)
#define RPG_GAMECORE_ENTERMARBLEPVEMATCH_METHOD_3_88A950E283CFD55F_OFFSET UNITYSDK_OFFSET(0x188AC7A0)
#define RPG_GAMECORE_ENTERMARBLEPVEMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x188AC770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterMarblePVEMatch_TypeDefinitionIndex = 20578;

	class EnterMarblePVEMatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MatchID; // 0x18
		::System::Boolean EnableTeamEdit; // 0x1C
		::Il2CppArray<::System::UInt32>* HeroTeamMarbleSealIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D7C2C93380FBE7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMarblePVEMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMarblePVEMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH_METHOD_3_3D7C2C93380FBE7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88A950E283CFD55F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMarblePVEMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMarblePVEMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH_METHOD_3_88A950E283CFD55F_OFFSET))(a1, a2);
		}
	};
}
