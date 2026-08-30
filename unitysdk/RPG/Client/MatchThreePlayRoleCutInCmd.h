#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET UNITYSDK_OFFSET(0x1C987450)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1C987620)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9874D0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C987740)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C9875D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayRoleCutInCmd_TypeDefinitionIndex = 65915;

	class MatchThreePlayRoleCutInCmd : public ::Class_2_980BB27C20DEC196
	{
	public:
		::System::String* ImagePath; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::LittleGame::Match3::OpponentRole Role; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreePlayRoleCutInCmd* Create(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::RPG::Client::MatchThreePlayRoleCutInCmd*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnCutInCompleted(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET))(this);
		}
	};
}
