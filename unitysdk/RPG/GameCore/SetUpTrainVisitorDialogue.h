#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_METHOD_3_E53F1949CBEDF678_OFFSET UNITYSDK_OFFSET(0x1D514F10)
#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_METHOD_3_FD8D57F6D3F38AB5_OFFSET UNITYSDK_OFFSET(0x1D514E40)
#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D514F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpTrainVisitorDialogue_TypeDefinitionIndex = 21348;

	class SetUpTrainVisitorDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD8D57F6D3F38AB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpTrainVisitorDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_METHOD_3_FD8D57F6D3F38AB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E53F1949CBEDF678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpTrainVisitorDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_METHOD_3_E53F1949CBEDF678_OFFSET))(a1, a2);
		}
	};
}
