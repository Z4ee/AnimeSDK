#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DESTROYVIRTUALTEAM_METHOD_3_4967865323846857_OFFSET UNITYSDK_OFFSET(0x1969B8C0)
#define RPG_GAMECORE_DESTROYVIRTUALTEAM_METHOD_3_D68BEA3301726547_OFFSET UNITYSDK_OFFSET(0x1969B950)
#define RPG_GAMECORE_DESTROYVIRTUALTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1969B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyVirtualTeam_TypeDefinitionIndex = 20393;

	class DestroyVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4967865323846857(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyVirtualTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyVirtualTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM_METHOD_3_4967865323846857_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D68BEA3301726547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyVirtualTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM_METHOD_3_D68BEA3301726547_OFFSET))(a1, a2);
		}
	};
}
