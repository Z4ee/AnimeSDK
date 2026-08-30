#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7A72E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A7220)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardData_TypeDefinitionIndex = 67735;

	class RogueTournPersonaRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaRoomCardData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardData*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDATA_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
