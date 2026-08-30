#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEROBOTINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D24ECF0)
#define RPG_GAMECORE_MATCHTHREEROBOTINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D24EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRobotInfoRow_TypeDefinitionIndex = 11896;

	class MatchThreeRobotInfoRow : public ::System::Object
	{
	public:
		::System::String* HeadIcon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 Level; // 0x28
		::System::UInt32 RobotID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROBOTINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeRobotInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeRobotInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROBOTINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
