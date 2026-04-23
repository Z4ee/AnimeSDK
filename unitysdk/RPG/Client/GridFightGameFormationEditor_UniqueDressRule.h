#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0xA4B7F20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0xA4B7E70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_UniqueDressRule_TypeDefinitionIndex = 59487;

	class GridFightGameFormationEditor_UniqueDressRule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_GET_REASON_OFFSET))(this);
		}

		::System::Boolean CanDress(::Class_2_181F61C600ECA68B* role, ::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CANDRESS_OFFSET))(this, role, equipID);
		}
	};
}
