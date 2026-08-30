#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FateRinCaseBoardSimpleTalkData; }
namespace System { class Action; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSIMPLETALKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF95E0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardSimpleTalkParams_TypeDefinitionIndex = 79486;

	class CaseBoardSimpleTalkParams : public ::System::Object
	{
	public:
		::System::Action* OnComplete; // 0x10
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardSimpleTalkData*>* TalkDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSIMPLETALKPARAMS__CTOR_OFFSET))(this);
		}
	};
}
