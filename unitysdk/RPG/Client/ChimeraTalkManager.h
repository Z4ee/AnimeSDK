#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraPeriodRandomTalkData; }
namespace RPG::Client { class ChimeraTalkData; }
namespace RPG::GameCore { class ChimeraTalk; }

#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETIDLETALKCONTENT_OFFSET UNITYSDK_OFFSET(0x93D5840)
#define RPG_CLIENT_CHIMERATALKMANAGER_TRYGETTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x93D5450)
#define RPG_CLIENT_CHIMERATALKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x93D5930)
#define RPG_CLIENT_CHIMERATALKMANAGER__ISTALKCONDITIONVALID_OFFSET UNITYSDK_OFFSET(0x93D5790)
#define RPG_CLIENT_CHIMERATALKMANAGER__TRYGETBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x93D5520)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTalkManager_TypeDefinitionIndex = 51569;

	class ChimeraTalkManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraTalkData* TryGetTalkContent(::RPG::Client::ChimeraData* chimeraData, ::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::RPG::Client::ChimeraTalkData*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER_TRYGETTALKCONTENT_OFFSET))(this, chimeraData, conditionType);
		}

		::RPG::GameCore::ChimeraTalk* _TryGetBubbleTalk(::RPG::Client::ChimeraData* chimeraData, ::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::RPG::GameCore::ChimeraTalk*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__TRYGETBUBBLETALK_OFFSET))(this, chimeraData, conditionType);
		}

		::System::Boolean _IsTalkConditionValid(::RPG::GameCore::ChimeraTalk* talk, ::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraTalk*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER__ISTALKCONDITIONVALID_OFFSET))(this, talk, conditionType);
		}

		::RPG::Client::ChimeraPeriodRandomTalkData* TryGetIdleTalkContent(::RPG::Client::ChimeraData* chimeraData, ::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::RPG::Client::ChimeraPeriodRandomTalkData*(*)(::PVOID, ::RPG::Client::ChimeraData*, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKMANAGER_TRYGETIDLETALKCONTENT_OFFSET))(this, chimeraData, conditionType);
		}
	};
}
