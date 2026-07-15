#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0x1ABDACC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1ABDAC10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD7A80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TraitOnlyDressRule_TypeDefinitionIndex = 61707;

	class GridFightGameFormationEditor_TraitOnlyDressRule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE_GET_REASON_OFFSET))(this);
		}

		::System::Boolean CanDress(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE_CANDRESS_OFFSET))(this, a1, a2);
		}
	};
}
