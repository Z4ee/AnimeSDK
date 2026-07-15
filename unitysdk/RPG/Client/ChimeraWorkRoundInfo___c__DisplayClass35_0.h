#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADED6C0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_0__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1ADEE470)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass35_0_TypeDefinitionIndex = 60718;

	class ChimeraWorkRoundInfo___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::UInt32>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetCurrentRoundOptionMainMissionData_b__0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_0__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__0_OFFSET))(this, a1);
		}
	};
}
