#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_METHOD_2_8C9B53B7AC888692_OFFSET UNITYSDK_OFFSET(0x17657DB0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_METHOD_2_96E7EC1DC56DD81B_OFFSET UNITYSDK_OFFSET(0x17657960)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17657DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterBaseConfig_TypeDefinitionIndex = 18206;

	class RoguePersonaRoomCardFilterBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_96E7EC1DC56DD81B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_METHOD_2_96E7EC1DC56DD81B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_8C9B53B7AC888692(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_METHOD_2_8C9B53B7AC888692_OFFSET))(a1, a2);
		}
	};
}
