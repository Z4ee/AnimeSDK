#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_3_3ADD79DB2D01EF6B_OFFSET UNITYSDK_OFFSET(0x1974B3F0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_3_E88CAE17EE4AE0DF_OFFSET UNITYSDK_OFFSET(0x19730700)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x197306E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMutePlayerInputAction_TypeDefinitionIndex = 17858;

	class FiveDimMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ADD79DB2D01EF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_3_3ADD79DB2D01EF6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E88CAE17EE4AE0DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_METHOD_3_E88CAE17EE4AE0DF_OFFSET))(a1, a2);
		}
	};
}
