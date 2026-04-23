#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET UNITYSDK_OFFSET(0x18DC9CB0)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D6628B31A81CF8CD_OFFSET UNITYSDK_OFFSET(0x18DC9BE0)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsTriggeredBlockDamage_TypeDefinitionIndex = 23168;

	class RtByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6628B31A81CF8CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D6628B31A81CF8CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B0C78932702C627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_METHOD_4_1B0C78932702C627_OFFSET))(a1, a2);
		}
	};
}
