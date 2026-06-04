#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0xBB5B320)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0xBB5B270)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB46A50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_MaxEquipDressRule_TypeDefinitionIndex = 60426;

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

		::System::Boolean CanDress(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MAXEQUIPDRESSRULE_CANDRESS_OFFSET))(this, a1, a2);
		}
	};
}
