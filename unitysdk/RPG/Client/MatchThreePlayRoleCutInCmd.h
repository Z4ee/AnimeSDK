#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET UNITYSDK_OFFSET(0xA843E60)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA844000)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA843EE0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__CTOR_OFFSET UNITYSDK_OFFSET(0xA8440F0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA843FB0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA844160)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA844100)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayRoleCutInCmd_TypeDefinitionIndex = 60634;

	class MatchThreePlayRoleCutInCmd : public ::Class_2_E408E6D7F3D1822C
	{
	public:
		::System::String* ImagePath; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::LittleGame::Match3::OpponentRole Role; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreePlayRoleCutInCmd* Create(::RPG::Client::MatchThreeBoard* board)
		{
			return ((::RPG::Client::MatchThreePlayRoleCutInCmd*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET))(board);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnCutInCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
		}
	};
}
