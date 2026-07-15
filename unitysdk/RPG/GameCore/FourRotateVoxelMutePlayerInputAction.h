#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_3_67661EE2651DFCCA_OFFSET UNITYSDK_OFFSET(0x1B97CE90)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_3_E0EE5451C5C9B967_OFFSET UNITYSDK_OFFSET(0x1B97CDB0)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97CE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMutePlayerInputAction_TypeDefinitionIndex = 16110;

	class FourRotateVoxelMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0EE5451C5C9B967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_3_E0EE5451C5C9B967_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67661EE2651DFCCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_3_67661EE2651DFCCA_OFFSET))(a1, a2);
		}
	};
}
