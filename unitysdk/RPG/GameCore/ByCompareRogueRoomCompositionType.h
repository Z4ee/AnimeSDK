#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_617827872EE327EA_OFFSET UNITYSDK_OFFSET(0x1952D280)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_629EBBEE52598FA3_OFFSET UNITYSDK_OFFSET(0x1952D350)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRoomCompositionType_TypeDefinitionIndex = 19658;

	class ByCompareRogueRoomCompositionType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_617827872EE327EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_617827872EE327EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_629EBBEE52598FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_629EBBEE52598FA3_OFFSET))(a1, a2);
		}
	};
}
