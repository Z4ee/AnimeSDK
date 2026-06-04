#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraPeriodRandomTalkData; }
namespace RPG::Client { class ChimeraTalkData; }
namespace RPG::GameCore { class ChimeraTalk; }

#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETIDLETALKCONTENT_OFFSET UNITYSDK_OFFSET(0xB6C2810)
#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xB6C23D0)
#define RPG_CLIENT_CHIMERATALKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B2AC0)
#define RPG_CLIENT_CHIMERATALKMANAGER__ISTALKCONDITIONVALID_OFFSET UNITYSDK_OFFSET(0xB6C2760)
#define RPG_CLIENT_CHIMERATALKMANAGER__TRYGETBUBBLETALK_OFFSET UNITYSDK_OFFSET(0xB6C24A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTalkManager_TypeDefinitionIndex = 59437;

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
