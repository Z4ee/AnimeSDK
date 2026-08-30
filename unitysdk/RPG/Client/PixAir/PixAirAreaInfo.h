#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C82BA80)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GETALLAREADATA_OFFSET UNITYSDK_OFFSET(0x1C82BB10)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GETAREADATA_OFFSET UNITYSDK_OFFSET(0x1C82B900)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C82B8B0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C82BC30)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_TRYGETAREADATA_OFFSET UNITYSDK_OFFSET(0x1C82B9B0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82BE80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirAreaInfo_TypeDefinitionIndex = 78818;

	class PixAirAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirAreaData*>* _areaDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirAreaData* GetAreaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GETAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetAreaData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirAreaData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirAreaData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_TRYGETAREADATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirAreaData*>* GetAllAreaData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_GETALLAREADATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINFO_INIT_OFFSET))(this);
		}
	};
}
