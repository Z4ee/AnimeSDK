#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::CaseBoard { class GrailViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWGRAILPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF7E80)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardShowGrailParams_TypeDefinitionIndex = 79481;

	class CaseBoardShowGrailParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* EffectList; // 0x10
		::RPG::Client::FateRin::CaseBoard::GrailViewModel* Grail; // 0x18
		::System::Boolean NeedWaitFinish; // 0x20
		::System::Boolean IsShow; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWGRAILPARAMS__CTOR_OFFSET))(this);
		}
	};
}
