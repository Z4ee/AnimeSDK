#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MAZEBUFF_METHOD_2_F258D0F13080EFDC_OFFSET UNITYSDK_OFFSET(0x1D272E50)
#define RPG_GAMECORE_MAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D272F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuff_TypeDefinitionIndex = 20179;

	class MazeBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BuffID; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F258D0F13080EFDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFF_METHOD_2_F258D0F13080EFDC_OFFSET))(a1, a2);
		}
	};
}
