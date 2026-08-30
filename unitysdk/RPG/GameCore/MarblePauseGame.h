#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_886A88847134A76E_OFFSET UNITYSDK_OFFSET(0x1D238AC0)
#define RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_C28FDF29C3FAEF2D_OFFSET UNITYSDK_OFFSET(0x1D238B00)
#define RPG_GAMECORE_MARBLEPAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D238AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePauseGame_TypeDefinitionIndex = 24019;

	class MarblePauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_886A88847134A76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_886A88847134A76E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C28FDF29C3FAEF2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_C28FDF29C3FAEF2D_OFFSET))(a1, a2);
		}
	};
}
