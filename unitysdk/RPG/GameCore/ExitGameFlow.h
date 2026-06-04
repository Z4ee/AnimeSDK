#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_9622DD342725DCCC_OFFSET UNITYSDK_OFFSET(0x197003C0)
#define RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_F1CD6625A72C375D_OFFSET UNITYSDK_OFFSET(0x19700340)
#define RPG_GAMECORE_EXITGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19700390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitGameFlow_TypeDefinitionIndex = 22741;

	class ExitGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1CD6625A72C375D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitGameFlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitGameFlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_F1CD6625A72C375D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9622DD342725DCCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitGameFlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_METHOD_3_9622DD342725DCCC_OFFSET))(a1, a2);
		}
	};
}
