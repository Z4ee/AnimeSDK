#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuidePhaseData; }
namespace RPG::GameCore { class MonsterGuideConfigRow; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERGUIDEDATA_GETAVAILABLETAGLIST_OFFSET UNITYSDK_OFFSET(0xD8BD250)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xD8BCD90)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_PHASELIST_OFFSET UNITYSDK_OFFSET(0xD8BCDD0)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD8BCDF0)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0xD8BCDB0)
#define RPG_CLIENT_MONSTERGUIDEDATA_INITPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD8BD060)
#define RPG_CLIENT_MONSTERGUIDEDATA_INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xD8BCE70)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xD8BCDA0)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_PHASELIST_OFFSET UNITYSDK_OFFSET(0xD8BCDE0)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xD8BCE00)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0xD8BCDC0)
#define RPG_CLIENT_MONSTERGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BCE10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterGuideData_TypeDefinitionIndex = 63210;

	class MonsterGuideData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* _TagList_k__BackingField; // 0x10
		::RPG::GameCore::MonsterGuideConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* _PhaseList_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* get_TagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void set_TagList(::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_TAGLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* get_PhaseList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_PHASELIST_OFFSET))(this);
		}

		::System::Void set_PhaseList(::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_PHASELIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterGuideConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterGuideConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonsterGuideConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Void InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_INITTAGDATA_OFFSET))(this);
		}

		::System::Void InitPhaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_INITPHASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* GetAvailableTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GETAVAILABLETAGLIST_OFFSET))(this);
		}
	};
}
