#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F21E00)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F21E70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_GETSUBPATHDATA_OFFSET UNITYSDK_OFFSET(0x9F21470)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_GET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F22D40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F21F20)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0x9F21F60)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F22550)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_SET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F22D50)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F21E60)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__GETDEPENDANTMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9F22820)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9F229D0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__REQUESTMISSIONDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x9F22D60)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleData_TypeDefinitionIndex = 53722;

	class PenaconyEndmostChronicleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PenaconyEndmostChroniclePathData*>* _SubPathDict; // 0x10
		::System::Boolean _IsMissionDataReady_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PenaconyEndmostChronicleData* Create(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PenaconyEndmostChroniclePathData*>* subPathDict)
		{
			return ((::RPG::Client::PenaconyEndmostChronicleData*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PenaconyEndmostChroniclePathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_CREATE_OFFSET))(subPathDict);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::PenaconyEndmostChroniclePathData* GetSubPathData(::System::UInt32 id)
		{
			return ((::RPG::Client::PenaconyEndmostChroniclePathData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_GETSUBPATHDATA_OFFSET))(this, id);
		}

		::System::Void RefreshEarlyAccessInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_REFRESHEARLYACCESSINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestMissionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__GETDEPENDANTMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean get_IsMissionDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_GET_ISMISSIONDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsMissionDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA_SET_ISMISSIONDATAREADY_OFFSET))(this, value);
		}

		::System::Void _RequestMissionData_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEDATA__REQUESTMISSIONDATA_B__5_0_OFFSET))(this);
		}
	};
}
