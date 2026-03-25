#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class StepConfig; }

#define RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_METHOD_2_F4472489FE641A3A_OFFSET UNITYSDK_OFFSET(0x16FED530)
#define RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEE5F0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SpreadStepConfig_TypeDefinitionIndex = 22806;

	class SpreadStepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* StepList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4472489FE641A3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SpreadStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SpreadStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_METHOD_2_F4472489FE641A3A_OFFSET))(a1, a2);
		}
	};
}
