#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEVSTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D270BF0)
#define RPG_GAMECORE_MATCHTHREEVSTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D270E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeVsTalkRow_TypeDefinitionIndex = 11900;

	class MatchThreeVsTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OpponentTalk; // 0x10
		::RPG::Client::TextID MyTalk; // 0x20
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVSTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeVsTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeVsTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVSTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
