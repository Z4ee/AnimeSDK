#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0xA4B7650)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0xA4B75A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_MaxEquipDressRule_TypeDefinitionIndex = 59491;

	class GridFightGameFormationEditor_MaxEquipDressRule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_GET_REASON_OFFSET))(this);
		}

		::System::Boolean CanDress(::Class_2_181F61C600ECA68B* role, ::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_CANDRESS_OFFSET))(this, role, equipID);
		}
	};
}
