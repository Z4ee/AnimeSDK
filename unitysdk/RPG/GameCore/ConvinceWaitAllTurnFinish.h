#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_METHOD_3_1B95EB620359E3D1_OFFSET UNITYSDK_OFFSET(0x1BC37040)
#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_METHOD_3_76ABF7FAF82DED94_OFFSET UNITYSDK_OFFSET(0x1BC37110)
#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC37100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitAllTurnFinish_TypeDefinitionIndex = 21036;

	class ConvinceWaitAllTurnFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B95EB620359E3D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_METHOD_3_1B95EB620359E3D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76ABF7FAF82DED94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_METHOD_3_76ABF7FAF82DED94_OFFSET))(a1, a2);
		}
	};
}
