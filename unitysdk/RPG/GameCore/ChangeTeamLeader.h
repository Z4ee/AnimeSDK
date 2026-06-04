#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_408D85C59FCA14BB_OFFSET UNITYSDK_OFFSET(0x19605B60)
#define RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_5DC8423F3999D3EB_OFFSET UNITYSDK_OFFSET(0x19605AD0)
#define RPG_GAMECORE_CHANGETEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19605B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTeamLeader_TypeDefinitionIndex = 20390;

	class ChangeTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DC8423F3999D3EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_5DC8423F3999D3EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_408D85C59FCA14BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_METHOD_3_408D85C59FCA14BB_OFFSET))(a1, a2);
		}
	};
}
