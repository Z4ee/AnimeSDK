#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORSETUP_METHOD_3_2410D18C197DB778_OFFSET UNITYSDK_OFFSET(0x1D3656A0)
#define RPG_GAMECORE_PROPESCALATORSETUP_METHOD_3_30FF440008C54A7A_OFFSET UNITYSDK_OFFSET(0x1D365740)
#define RPG_GAMECORE_PROPESCALATORSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D365700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorSetup_TypeDefinitionIndex = 20778;

	class PropEscalatorSetup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicStringList* AnchorList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORSETUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2410D18C197DB778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorSetup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorSetup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORSETUP_METHOD_3_2410D18C197DB778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30FF440008C54A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorSetup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorSetup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORSETUP_METHOD_3_30FF440008C54A7A_OFFSET))(a1, a2);
		}
	};
}
