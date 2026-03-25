#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHESSWAITANIMEVENT_METHOD_3_5311F2B9DDC18903_OFFSET UNITYSDK_OFFSET(0x1708F8B0)
#define RPG_GAMECORE_CHESSWAITANIMEVENT_METHOD_3_D04720DB7860FF7A_OFFSET UNITYSDK_OFFSET(0x1708F930)
#define RPG_GAMECORE_CHESSWAITANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessWaitAnimEvent_TypeDefinitionIndex = 21986;

	class ChessWaitAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITANIMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5311F2B9DDC18903(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitAnimEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitAnimEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITANIMEVENT_METHOD_3_5311F2B9DDC18903_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D04720DB7860FF7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitAnimEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITANIMEVENT_METHOD_3_D04720DB7860FF7A_OFFSET))(a1, a2);
		}
	};
}
