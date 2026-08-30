#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_METHOD_3_7338ED8115883021_OFFSET UNITYSDK_OFFSET(0x1D9BA300)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_METHOD_3_D270753D1DAC46A4_OFFSET UNITYSDK_OFFSET(0x1D9BA230)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BA2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMoveCurrTurnOption_TypeDefinitionIndex = 21593;

	class ConvinceMoveCurrTurnOption : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D270753D1DAC46A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_METHOD_3_D270753D1DAC46A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7338ED8115883021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_METHOD_3_7338ED8115883021_OFFSET))(a1, a2);
		}
	};
}
