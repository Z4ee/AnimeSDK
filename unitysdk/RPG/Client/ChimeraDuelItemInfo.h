#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELITEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBE4D80)
#define RPG_CLIENT_CHIMERADUELITEMINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0xCBE6560)
#define RPG_CLIENT_CHIMERADUELITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE4390)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemInfo_TypeDefinitionIndex = 63429;

	class ChimeraDuelItemInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelItemData*>* _DataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO_GETDATA_OFFSET))(this, a1);
		}
	};
}
