#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_A3A0E1849FB6587D_OFFSET UNITYSDK_OFFSET(0x1DA998B0)
#define RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_B614BCAF6525F994_OFFSET UNITYSDK_OFFSET(0x1DA998F0)
#define RPG_GAMECORE_SETTEAMROOTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA998E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamRootOffset_TypeDefinitionIndex = 22498;

	class SetTeamRootOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Boolean Reset; // 0x1C
		::RPG::GameCore::TargetEvaluator* OriginPosTargetType; // 0x20
		::RPG::MVector3 Offset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3A0E1849FB6587D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamRootOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamRootOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_A3A0E1849FB6587D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B614BCAF6525F994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_B614BCAF6525F994_OFFSET))(a1, a2);
		}
	};
}
