#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireWaveProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE_METHOD_4_BB1FA2A148A60C22_OFFSET UNITYSDK_OFFSET(0x1BAF76A0)
#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE_METHOD_4_F90B41F5A575862C_OFFSET UNITYSDK_OFFSET(0x1BAF76F0)
#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF76E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireWaveProjectile_TypeDefinitionIndex = 21769;

	class NewFireWaveProjectile : public ::RPG::GameCore::FireWaveProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB1FA2A148A60C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireWaveProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireWaveProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE_METHOD_4_BB1FA2A148A60C22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F90B41F5A575862C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE_METHOD_4_F90B41F5A575862C_OFFSET))(a1, a2);
		}
	};
}
