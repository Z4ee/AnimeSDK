#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_4_2D1F46C3866CCE2A_OFFSET UNITYSDK_OFFSET(0x1D6D7740)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_4_92357AFCE614C50B_OFFSET UNITYSDK_OFFSET(0x1D6D77C0)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D77B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimResumeMusicAction_TypeDefinitionIndex = 18701;

	class FiveDimResumeMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D1F46C3866CCE2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResumeMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResumeMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_4_2D1F46C3866CCE2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92357AFCE614C50B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_4_92357AFCE614C50B_OFFSET))(a1, a2);
		}
	};
}
