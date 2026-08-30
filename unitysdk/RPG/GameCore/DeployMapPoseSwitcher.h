#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_METHOD_3_89BC49258C2DCC17_OFFSET UNITYSDK_OFFSET(0x1D815D00)
#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_METHOD_3_FDEB56FB7DFFF35C_OFFSET UNITYSDK_OFFSET(0x1D815CC0)
#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D815CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployMapPoseSwitcher_TypeDefinitionIndex = 20681;

	class DeployMapPoseSwitcher : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FDEB56FB7DFFF35C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployMapPoseSwitcher*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployMapPoseSwitcher*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_METHOD_3_FDEB56FB7DFFF35C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89BC49258C2DCC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_METHOD_3_89BC49258C2DCC17_OFFSET))(a1, a2);
		}
	};
}
