#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVESHIELD_METHOD_3_C433C03D0519ADA7_OFFSET UNITYSDK_OFFSET(0x18CA5990)
#define RPG_GAMECORE_REMOVESHIELD_METHOD_3_EC78E1BACBBB3383_OFFSET UNITYSDK_OFFSET(0x18CA5910)
#define RPG_GAMECORE_REMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveShield_TypeDefinitionIndex = 22580;

	class RemoveShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ShowText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC78E1BACBBB3383(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_METHOD_3_EC78E1BACBBB3383_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C433C03D0519ADA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_METHOD_3_C433C03D0519ADA7_OFFSET))(a1, a2);
		}
	};
}
