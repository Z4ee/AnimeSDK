#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0xA4B5470)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0xA4B53C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5B80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_AllSlotEmptyDressRule_TypeDefinitionIndex = 59489;

	class GridFightGameFormationEditor_AllSlotEmptyDressRule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE_GET_REASON_OFFSET))(this);
		}

		::System::Boolean CanDress(::Class_2_181F61C600ECA68B* role, ::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE_CANDRESS_OFFSET))(this, role, equipID);
		}
	};
}
