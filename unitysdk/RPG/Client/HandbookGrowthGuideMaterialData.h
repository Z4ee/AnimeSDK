#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarFarmGuideData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x98FC980)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_GET_MATERIALGUIDEDATALIST_OFFSET UNITYSDK_OFFSET(0x98FCF40)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_SET_MATERIALGUIDEDATALIST_OFFSET UNITYSDK_OFFSET(0x98FCF50)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98FCAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideMaterialData_TypeDefinitionIndex = 53283;

	class HandbookGrowthGuideMaterialData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* _MaterialGuideDataList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookGrowthGuideMaterialData* Create(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::HandbookGrowthGuideMaterialData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_CREATE_OFFSET))(avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* get_MaterialGuideDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_GET_MATERIALGUIDEDATALIST_OFFSET))(this);
		}

		::System::Void set_MaterialGuideDataList(::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEMATERIALDATA_SET_MATERIALGUIDEDATALIST_OFFSET))(this, value);
		}
	};
}
