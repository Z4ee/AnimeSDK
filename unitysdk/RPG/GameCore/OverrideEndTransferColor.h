#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_METHOD_3_2CCB4E5B58247310_OFFSET UNITYSDK_OFFSET(0x1D40C020)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_METHOD_3_D883FB5A4FE02523_OFFSET UNITYSDK_OFFSET(0x1D40C070)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEndTransferColor_TypeDefinitionIndex = 21672;

	class OverrideEndTransferColor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferType Color; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CCB4E5B58247310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferColor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferColor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_METHOD_3_2CCB4E5B58247310_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D883FB5A4FE02523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferColor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_METHOD_3_D883FB5A4FE02523_OFFSET))(a1, a2);
		}
	};
}
