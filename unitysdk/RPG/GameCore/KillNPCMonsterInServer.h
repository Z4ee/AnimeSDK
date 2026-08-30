#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_KILLNPCMONSTERINSERVER_METHOD_3_0D47B74A18A95FAC_OFFSET UNITYSDK_OFFSET(0x1C10A850)
#define RPG_GAMECORE_KILLNPCMONSTERINSERVER_METHOD_3_7E360FB06BCB39B0_OFFSET UNITYSDK_OFFSET(0x1C10A800)
#define RPG_GAMECORE_KILLNPCMONSTERINSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int KillNPCMonsterInServer_TypeDefinitionIndex = 20083;

	class KillNPCMonsterInServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E360FB06BCB39B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::KillNPCMonsterInServer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::KillNPCMonsterInServer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER_METHOD_3_7E360FB06BCB39B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D47B74A18A95FAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::KillNPCMonsterInServer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::KillNPCMonsterInServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER_METHOD_3_0D47B74A18A95FAC_OFFSET))(a1, a2);
		}
	};
}
