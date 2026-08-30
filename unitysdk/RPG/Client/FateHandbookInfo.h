#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookBuffCollection; }
namespace RPG::Client { class FateHandbookHouguCollection; }
namespace RPG::Client { class FateHandbookMasterCollection; }
namespace RPG::Client { class FateHandbookReijuCollection; }
namespace RPG::Client { class FateHandbookTraitCollection; }

#define RPG_CLIENT_FATEHANDBOOKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF4F070)
#define RPG_CLIENT_FATEHANDBOOKINFO_GET_BUFFCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCF4F540)
#define RPG_CLIENT_FATEHANDBOOKINFO_GET_HOUGUCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCF4F6E0)
#define RPG_CLIENT_FATEHANDBOOKINFO_GET_MASTERCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCF4F760)
#define RPG_CLIENT_FATEHANDBOOKINFO_GET_REIJUCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCF4F650)
#define RPG_CLIENT_FATEHANDBOOKINFO_GET_TRAITCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCF4F5C0)
#define RPG_CLIENT_FATEHANDBOOKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCF4F060)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookInfo_TypeDefinitionIndex = 64134;

	class FateHandbookInfo : public ::System::Object
	{
	public:
		::RPG::Client::FateHandbookHouguCollection* _HouguCollection; // 0x10
		::RPG::Client::FateHandbookTraitCollection* _TraitCollection; // 0x18
		::RPG::Client::FateHandbookBuffCollection* _BuffCollection; // 0x20
		::RPG::Client::FateHandbookReijuCollection* _ReijuCollection; // 0x28
		::RPG::Client::FateHandbookMasterCollection* _MasterCollection; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateHandbookBuffCollection* get_BuffCollection()
		{
			return ((::RPG::Client::FateHandbookBuffCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_GET_BUFFCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::FateHandbookTraitCollection* get_TraitCollection()
		{
			return ((::RPG::Client::FateHandbookTraitCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_GET_TRAITCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::FateHandbookReijuCollection* get_ReijuCollection()
		{
			return ((::RPG::Client::FateHandbookReijuCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_GET_REIJUCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::FateHandbookHouguCollection* get_HouguCollection()
		{
			return ((::RPG::Client::FateHandbookHouguCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_GET_HOUGUCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::FateHandbookMasterCollection* get_MasterCollection()
		{
			return ((::RPG::Client::FateHandbookMasterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKINFO_GET_MASTERCOLLECTION_OFFSET))(this);
		}
	};
}
