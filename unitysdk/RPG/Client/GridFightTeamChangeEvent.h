#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipChangeEvent; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD2A3B00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamChangeEvent_TypeDefinitionIndex = 65151;

	class GridFightTeamChangeEvent : public ::System::Object
	{
	public:
		::System::Action* returnCallback; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipChangeEvent*>* EquipChanges; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* ChangeRoles; // 0x20
		::System::String* ImgPath; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* StarChangeRoles; // 0x30
		::RPG::Client::TextID TalkText; // 0x38
		::System::Boolean ShowTalk; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
