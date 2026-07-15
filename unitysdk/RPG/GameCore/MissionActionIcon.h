#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONACTIONICON_METHOD_2_5AD2C437A98BBBED_OFFSET UNITYSDK_OFFSET(0x1AF66A20)
#define RPG_GAMECORE_MISSIONACTIONICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF66BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionActionIcon_TypeDefinitionIndex = 18216;

	class MissionActionIcon : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::RPG::Client::TextID BtnText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONACTIONICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5AD2C437A98BBBED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionActionIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionActionIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONACTIONICON_METHOD_2_5AD2C437A98BBBED_OFFSET))(a1, a2);
		}
	};
}
