#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_BF47008A0EACEC9C_OFFSET UNITYSDK_OFFSET(0x18AA1D00)
#define RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_C28FDF29C3FAEF2D_OFFSET UNITYSDK_OFFSET(0x18AA1D80)
#define RPG_GAMECORE_MARBLEPAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA1D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePauseGame_TypeDefinitionIndex = 23306;

	class MarblePauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF47008A0EACEC9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_BF47008A0EACEC9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C28FDF29C3FAEF2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_METHOD_3_C28FDF29C3FAEF2D_OFFSET))(a1, a2);
		}
	};
}
