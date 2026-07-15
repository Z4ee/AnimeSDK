#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraPeriodRandomTalkData; }
namespace RPG::Client { class ChimeraTalkData; }
namespace RPG::GameCore { class ChimeraTalk; }

#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETIDLETALKCONTENT_OFFSET UNITYSDK_OFFSET(0x1ADE6790)
#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x1ADE6350)
#define RPG_CLIENT_CHIMERATALKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE6880)
#define RPG_CLIENT_CHIMERATALKMANAGER__ISTALKCONDITIONVALID_OFFSET UNITYSDK_OFFSET(0x1ADE66E0)
#define RPG_CLIENT_CHIMERATALKMANAGER__TRYGETBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x1ADE6420)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTalkManager_TypeDefinitionIndex = 60708;

	class ChimeraTalkManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraTalkData* TryGetTalkContent(::RPG::Client::ChimeraData* a1, ::RPG::GameCore::ChimeraTalkConditionType a2)
		{
			return ((::RPG::Client::ChimeraTalkData*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER_TRYGETTALKCONTENT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChimeraTalk* _TryGetBubbleTalk(::RPG::Client::ChimeraData* a1, ::RPG::GameCore::ChimeraTalkConditionType a2)
		{
			return ((::RPG::GameCore::ChimeraTalk*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__TRYGETBUBBLETALK_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsTalkConditionValid(::RPG::GameCore::ChimeraTalk* a1, ::RPG::GameCore::ChimeraTalkConditionType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraTalk*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__ISTALKCONDITIONVALID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChimeraPeriodRandomTalkData* TryGetIdleTalkContent(::RPG::Client::ChimeraData* a1, ::RPG::GameCore::ChimeraTalkConditionType a2)
		{
			return ((::RPG::Client::ChimeraPeriodRandomTalkData*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER_TRYGETIDLETALKCONTENT_OFFSET))(this, a1, a2);
		}
	};
}
