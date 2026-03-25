#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE_METHOD_4_0F17730DDFA22E68_OFFSET UNITYSDK_OFFSET(0x17695240)
#define RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE_METHOD_4_B1BE89CDFE20C042_OFFSET UNITYSDK_OFFSET(0x17695310)
#define RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176952C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByHasTargetInAlertRange_TypeDefinitionIndex = 22002;

	class ST_Chess_ByHasTargetInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F17730DDFA22E68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE_METHOD_4_0F17730DDFA22E68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B1BE89CDFE20C042(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASTARGETINALERTRANGE_METHOD_4_B1BE89CDFE20C042_OFFSET))(a1, a2);
		}
	};
}
