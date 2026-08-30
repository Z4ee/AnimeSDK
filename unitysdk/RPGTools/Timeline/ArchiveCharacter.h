#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1B5313B0)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1B531340)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_METHOD_4_784C221F8D8DF4FC_OFFSET UNITYSDK_OFFSET(0x1B5313D0)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1B5313C0)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5314A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveCharacter_TypeDefinitionIndex = 48957;

	class ArchiveCharacter : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		::System::String* UniqueName; // 0x20
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ISPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_784C221F8D8DF4FC(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_METHOD_4_784C221F8D8DF4FC_OFFSET))(this, a1);
		}
	};
}
