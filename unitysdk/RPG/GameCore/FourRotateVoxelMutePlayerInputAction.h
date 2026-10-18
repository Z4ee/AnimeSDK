#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_4_0E65CDF46E249AA7_OFFSET UNITYSDK_OFFSET(0x1D6C3040)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_4_B58AEFF41FBB220A_OFFSET UNITYSDK_OFFSET(0x1D6C2F60)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMutePlayerInputAction_TypeDefinitionIndex = 16767;

	class FourRotateVoxelMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B58AEFF41FBB220A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_4_B58AEFF41FBB220A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E65CDF46E249AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_METHOD_4_0E65CDF46E249AA7_OFFSET))(a1, a2);
		}
	};
}
