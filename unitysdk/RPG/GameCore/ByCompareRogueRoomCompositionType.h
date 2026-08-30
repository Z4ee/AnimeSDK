#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_629EBBEE52598FA3_OFFSET UNITYSDK_OFFSET(0x1CEF7910)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_A5F0A8E6AEDED19F_OFFSET UNITYSDK_OFFSET(0x1CEF78C0)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRoomCompositionType_TypeDefinitionIndex = 20564;

	class ByCompareRogueRoomCompositionType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A5F0A8E6AEDED19F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_A5F0A8E6AEDED19F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_629EBBEE52598FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_METHOD_4_629EBBEE52598FA3_OFFSET))(a1, a2);
		}
	};
}
