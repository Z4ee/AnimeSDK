#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_2428D18D8B2FC900_OFFSET UNITYSDK_OFFSET(0x1954EBE0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_5C35EF84C1B12BC5_OFFSET UNITYSDK_OFFSET(0x1954EDF0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET UNITYSDK_OFFSET(0x1954ECB0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_FCBA46FFC36DD959_OFFSET UNITYSDK_OFFSET(0x1954EE70)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1954EC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPlayerMoveInput_TypeDefinitionIndex = 19118;

	class ByHasPlayerMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2428D18D8B2FC900(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_2428D18D8B2FC900_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEC3E6BB528B93AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C35EF84C1B12BC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_5C35EF84C1B12BC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCBA46FFC36DD959(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_FCBA46FFC36DD959_OFFSET))(a1, a2);
		}
	};
}
