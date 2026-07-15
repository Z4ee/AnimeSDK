#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLEVELFINISH_METHOD_3_1D4D3C2D15F80A1E_OFFSET UNITYSDK_OFFSET(0x1C5FE4C0)
#define RPG_GAMECORE_SETLEVELFINISH_METHOD_3_583F9A56FB369D1B_OFFSET UNITYSDK_OFFSET(0x1C5FE3F0)
#define RPG_GAMECORE_SETLEVELFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevelFinish_TypeDefinitionIndex = 22587;

	class SetLevelFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_583F9A56FB369D1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevelFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevelFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH_METHOD_3_583F9A56FB369D1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D4D3C2D15F80A1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevelFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevelFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH_METHOD_3_1D4D3C2D15F80A1E_OFFSET))(a1, a2);
		}
	};
}
