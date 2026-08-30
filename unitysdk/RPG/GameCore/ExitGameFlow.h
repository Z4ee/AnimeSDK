#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_40F4CD8C7BBFBB95_OFFSET UNITYSDK_OFFSET(0x1D7D8B40)
#define RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_5A8006FACB5410FE_OFFSET UNITYSDK_OFFSET(0x1D7D8B00)
#define RPG_GAMECORE_EXITGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D8B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitGameFlow_TypeDefinitionIndex = 23788;

	class ExitGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A8006FACB5410FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitGameFlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitGameFlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_5A8006FACB5410FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40F4CD8C7BBFBB95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitGameFlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_40F4CD8C7BBFBB95_OFFSET))(a1, a2);
		}
	};
}
