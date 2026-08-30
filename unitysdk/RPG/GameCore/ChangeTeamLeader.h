#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_408D85C59FCA14BB_OFFSET UNITYSDK_OFFSET(0x1D1198B0)
#define RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_9C1F47BF547DCFD7_OFFSET UNITYSDK_OFFSET(0x1D119860)
#define RPG_GAMECORE_CHANGETEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1198A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTeamLeader_TypeDefinitionIndex = 21361;

	class ChangeTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C1F47BF547DCFD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_9C1F47BF547DCFD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_408D85C59FCA14BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_408D85C59FCA14BB_OFFSET))(a1, a2);
		}
	};
}
