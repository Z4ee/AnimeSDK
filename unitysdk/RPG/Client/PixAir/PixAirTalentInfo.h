#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirTalentData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0xDB24990)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GETALLTALENTDATA_OFFSET UNITYSDK_OFFSET(0xDB24A20)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GETTALENTDATA_OFFSET UNITYSDK_OFFSET(0xDB24810)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xDB247C0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xDB24B50)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_TRYGETTALENTDATA_OFFSET UNITYSDK_OFFSET(0xDB248C0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDB24C20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTalentInfo_TypeDefinitionIndex = 78899;

	class PixAirTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirTalentData*>* _talentDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirTalentData* GetTalentData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirTalentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GETTALENTDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetTalentData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirTalentData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirTalentData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_TRYGETTALENTDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTalentData*>* GetAllTalentData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTalentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_GETALLTALENTDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTINFO_INIT_OFFSET))(this);
		}
	};
}
