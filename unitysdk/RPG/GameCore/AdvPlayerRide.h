#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERRIDE_METHOD_3_24B40D77DE3F13BE_OFFSET UNITYSDK_OFFSET(0x1D6C3E20)
#define RPG_GAMECORE_ADVPLAYERRIDE_METHOD_3_690B3F91DEA02848_OFFSET UNITYSDK_OFFSET(0x1D6C3EC0)
#define RPG_GAMECORE_ADVPLAYERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerRide_TypeDefinitionIndex = 20794;

	class AdvPlayerRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* AttachPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24B40D77DE3F13BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE_METHOD_3_24B40D77DE3F13BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_690B3F91DEA02848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE_METHOD_3_690B3F91DEA02848_OFFSET))(a1, a2);
		}
	};
}
