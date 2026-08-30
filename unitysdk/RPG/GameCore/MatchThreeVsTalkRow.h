#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEVSTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D253290)
#define RPG_GAMECORE_MATCHTHREEVSTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2534A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeVsTalkRow_TypeDefinitionIndex = 11900;

	class MatchThreeVsTalkRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID MyTalk; // 0x18
		::RPG::Client::TextID OpponentTalk; // 0x28

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
