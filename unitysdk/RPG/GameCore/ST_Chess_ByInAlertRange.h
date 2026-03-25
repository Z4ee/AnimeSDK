#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_CHESS_BYINALERTRANGE_METHOD_4_9B619CD56B52898C_OFFSET UNITYSDK_OFFSET(0x17695520)
#define RPG_GAMECORE_ST_CHESS_BYINALERTRANGE_METHOD_4_9B70E089A1214D42_OFFSET UNITYSDK_OFFSET(0x17695450)
#define RPG_GAMECORE_ST_CHESS_BYINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176954D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByInAlertRange_TypeDefinitionIndex = 22004;

	class ST_Chess_ByInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9B70E089A1214D42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINALERTRANGE_METHOD_4_9B70E089A1214D42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B619CD56B52898C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINALERTRANGE_METHOD_4_9B619CD56B52898C_OFFSET))(a1, a2);
		}
	};
}
