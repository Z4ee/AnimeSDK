#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x93DC020)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__1_OFFSET UNITYSDK_OFFSET(0x93DCBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass35_1_TypeDefinitionIndex = 51580;

	class ChimeraWorkRoundInfo___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::UInt32>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetCurrentRoundOptionMainMissionData_b__1(::RPG::Client::SubMissionData* missionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__1_OFFSET))(this, missionData);
		}
	};
}
