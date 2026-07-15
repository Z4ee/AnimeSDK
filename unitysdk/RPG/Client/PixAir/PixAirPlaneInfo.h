#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::PixAir { class PixAirPlaneData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A0D8380)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETALLPLANEDATA_OFFSET UNITYSDK_OFFSET(0x1A0D33C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETPLANEDATA_OFFSET UNITYSDK_OFFSET(0x1A0D3500)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETSELECTABLEPLANEDATA_OFFSET UNITYSDK_OFFSET(0x1A0D0AA0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0D8260)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1A0D4D00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_SYNCUNLOCKEDPLANES_OFFSET UNITYSDK_OFFSET(0x1A0D0670)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_TRYGETPLANEDATA_OFFSET UNITYSDK_OFFSET(0x1A0D82B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D4CF0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneInfo_TypeDefinitionIndex = 75342;

	class PixAirPlaneInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirPlaneData*>* _planeDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirPlaneData* GetPlaneData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETPLANEDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPlaneData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirPlaneData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirPlaneData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_TRYGETPLANEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SyncUnlockedPlanes(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_SYNCUNLOCKEDPLANES_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirPlaneData*>* GetAllPlaneData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirPlaneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETALLPLANEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirPlaneData*>* GetSelectablePlaneData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirPlaneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_GETSELECTABLEPLANEDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINFO_INIT_OFFSET))(this);
		}
	};
}
