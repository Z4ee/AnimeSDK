#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93DC9B0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS41_0___ISROUNDALLSUBMISSIONFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x93DCF40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass41_0_TypeDefinitionIndex = 51582;

	class ChimeraWorkRoundInfo___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void __IsRoundAllSubMissionFinished_b__0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS41_0___ISROUNDALLSUBMISSIONFINISHED_B__0_OFFSET))(this, subMissionDataList);
		}
	};
}
