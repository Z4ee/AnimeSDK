#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipChangeEvent; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5AC180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamChangeEvent_TypeDefinitionIndex = 59978;

	class GridFightTeamChangeEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipChangeEvent*>* EquipChanges; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* StarChangeRoles; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* ChangeRoles; // 0x20
		::System::Action* returnCallback; // 0x28
		::System::String* ImgPath; // 0x30
		::System::Boolean ShowTalk; // 0x38
		::RPG::Client::TextID TalkText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
