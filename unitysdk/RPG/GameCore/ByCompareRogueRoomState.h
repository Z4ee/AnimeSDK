#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_METHOD_4_EC848F924E419344_OFFSET UNITYSDK_OFFSET(0x17015400)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_METHOD_4_ED5CF0421C325FCD_OFFSET UNITYSDK_OFFSET(0x17015330)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170153B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRoomState_TypeDefinitionIndex = 19122;

	class ByCompareRogueRoomState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED5CF0421C325FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_METHOD_4_ED5CF0421C325FCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC848F924E419344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_METHOD_4_EC848F924E419344_OFFSET))(a1, a2);
		}
	};
}
