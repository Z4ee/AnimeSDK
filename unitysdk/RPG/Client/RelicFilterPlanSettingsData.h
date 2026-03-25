#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA2A08E0)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2A0700)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xA2A0C30)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A13C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanSettingsData_TypeDefinitionIndex = 54407;

	class RelicFilterPlanSettingsData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BodyMainPropertyList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* HeadMainPropertyList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* SubPropertyList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* FootMainPropertyList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* HandMainPropertyList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* RelicSetList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* RopeMainPropertyList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* SphereMainPropertyList; // 0x48
		::System::UInt32 SubPropertyNum; // 0x50
		::System::Boolean IsIncludeFilterSubProperty; // 0x54
		::System::UInt32 RarityBitset; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanSettingsData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanSettingsData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanSettingsData* Create_1(::Class_1_1DC52A0BEDF50632* severData)
		{
			return ((::RPG::Client::RelicFilterPlanSettingsData*(*)(::Class_1_1DC52A0BEDF50632*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_1_OFFSET))(severData);
		}

		::System::Void FillToServerData(::Class_1_1DC52A0BEDF50632* severData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_FILLTOSERVERDATA_OFFSET))(this, severData);
		}
	};
}
