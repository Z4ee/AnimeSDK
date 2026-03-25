#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYUTILS_GETALLEYGOODANCHORCOUNTBYGOODID_OFFSET UNITYSDK_OFFSET(0x90BE050)
#define RPG_CLIENT_ALLEYUTILS_GETALLEYGOODTYPEBYGOODID_OFFSET UNITYSDK_OFFSET(0x90BE190)
#define RPG_CLIENT_ALLEYUTILS_ISEXISTINGURGENTEVENTMISSION_OFFSET UNITYSDK_OFFSET(0x90BDE00)
#define RPG_CLIENT_ALLEYUTILS_SHOWALLEYMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x90BDCB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyUtils_TypeDefinitionIndex = 50578;

	class AlleyUtils : public ::System::Object
	{
	public:
		static ::System::Void ShowAlleyMainEntrancePage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_SHOWALLEYMAINENTRANCEPAGE_OFFSET))(callback);
		}

		static ::System::Boolean IsExistingUrgentEventMission(::System::Collections::Generic::List_1<::RPG::Client::AlleyEventInfo>* inEvents, ::RPG::GameCore::EventTypeEnum eventType)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::AlleyEventInfo>*, ::RPG::GameCore::EventTypeEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_ISEXISTINGURGENTEVENTMISSION_OFFSET))(inEvents, eventType);
		}

		static ::System::UInt32 GetAlleyGoodAnchorCountByGoodID(::System::UInt32 goodID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_GETALLEYGOODANCHORCOUNTBYGOODID_OFFSET))(goodID);
		}

		static ::RPG::GameCore::AlleyPackGoodsTypeEnum GetAlleyGoodTypeByGoodID(::System::UInt32 goodID)
		{
			return ((::RPG::GameCore::AlleyPackGoodsTypeEnum(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_GETALLEYGOODTYPEBYGOODID_OFFSET))(goodID);
		}
	};
}
