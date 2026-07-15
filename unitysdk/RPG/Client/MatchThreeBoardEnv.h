#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEBOARDENV_INIT_OFFSET UNITYSDK_OFFSET(0x1A8899A0)
#define RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1A897910)
#define RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_94BDBF2773396AF1_OFFSET UNITYSDK_OFFSET(0x1A897990)
#define RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_D27288CEC2E97673_OFFSET UNITYSDK_OFFSET(0x1A897800)
#define RPG_CLIENT_MATCHTHREEBOARDENV_SETGRIDTAG_OFFSET UNITYSDK_OFFSET(0x1A892310)
#define RPG_CLIENT_MATCHTHREEBOARDENV_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1A897680)
#define RPG_CLIENT_MATCHTHREEBOARDENV__CTOR_OFFSET UNITYSDK_OFFSET(0x1A897B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoardEnv_TypeDefinitionIndex = 62988;

	class MatchThreeBoardEnv : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		::RPG::Client::MatchThreeBoard* Field_5_2; // 0x18
		::System::Boolean Field_5_3; // 0x20
		::UnityEngine::Animation* Field_5_4; // 0x28
		::UnityEngine::Transform* Field_5_5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_INIT_OFFSET))(this, a1);
		}

		::System::Void SetGridTag(::RPG::Client::MatchThreeBoardEnvTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_SETGRIDTAG_OFFSET))(this, a1);
		}

		::System::Void SetSize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_SETSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D27288CEC2E97673(::RPG::Client::MatchThreeBoardEnvTag a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_D27288CEC2E97673_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_19B91D58E02869BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_19B91D58E02869BC_OFFSET))(this);
		}

		::System::Void Method_5_94BDBF2773396AF1(::RPG::Client::MatchThreeBoardEnvTag a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_METHOD_5_94BDBF2773396AF1_OFFSET))(this, a1, a2);
		}
	};
}
