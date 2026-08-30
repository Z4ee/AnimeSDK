#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVESHIELD_METHOD_3_C433C03D0519ADA7_OFFSET UNITYSDK_OFFSET(0x1D3A0350)
#define RPG_GAMECORE_REMOVESHIELD_METHOD_3_CB156A6D15D78D10_OFFSET UNITYSDK_OFFSET(0x1D3A0310)
#define RPG_GAMECORE_REMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveShield_TypeDefinitionIndex = 23331;

	class RemoveShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ShowText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB156A6D15D78D10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_METHOD_3_CB156A6D15D78D10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C433C03D0519ADA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_METHOD_3_C433C03D0519ADA7_OFFSET))(a1, a2);
		}
	};
}
