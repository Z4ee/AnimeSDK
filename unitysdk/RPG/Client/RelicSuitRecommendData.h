#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_49;
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSUITRECOMMENDDATA_CHECKISFETCHAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA2BDCF0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2BE090)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xA2BDCB0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0xA2BDC50)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETSHOWLIST_OFFSET UNITYSDK_OFFSET(0xA2BDD30)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GET_SETID_OFFSET UNITYSDK_OFFSET(0xA2BDC30)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_SET_SETID_OFFSET UNITYSDK_OFFSET(0xA2BDC40)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA2BDE90)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BDB10)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicSuitRecommendData_TypeDefinitionIndex = 54414;

	class RelicSuitRecommendData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* RecommendAvatarList; // 0x10
		::System::String* _IconPath; // 0x18
		::System::UInt32 _SetID_k__BackingField; // 0x20
		::System::Boolean IsFetchAvatarList; // 0x24
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor(::System::UInt32 setID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA__CTOR_OFFSET))(this, setID);
		}

		::System::UInt32 get_SetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GET_SETID_OFFSET))(this);
		}

		::System::Void set_SetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_SET_SETID_OFFSET))(this, value);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETICONPATH_OFFSET))(this);
		}

		::System::Boolean CheckIsFetchAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_CHECKISFETCHAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* GetShowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETSHOWLIST_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_99BD961747420BEB_49* relicAvatarRecommendData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_SYNC_OFFSET))(this, relicAvatarRecommendData);
		}

		static ::RPG::Client::RelicSuitRecommendData* Create(::System::UInt32 setID)
		{
			return ((::RPG::Client::RelicSuitRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_CREATE_OFFSET))(setID);
		}
	};
}
