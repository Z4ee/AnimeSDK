#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_4_8E1351E5F1D3BD82_OFFSET UNITYSDK_OFFSET(0x1D6CEAB0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_4_D8902245DC5296BF_OFFSET UNITYSDK_OFFSET(0x1D6CE9D0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CEAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMutePlayerInputAction_TypeDefinitionIndex = 18768;

	class FiveDimMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D8902245DC5296BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_4_D8902245DC5296BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E1351E5F1D3BD82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_4_8E1351E5F1D3BD82_OFFSET))(a1, a2);
		}
	};
}
