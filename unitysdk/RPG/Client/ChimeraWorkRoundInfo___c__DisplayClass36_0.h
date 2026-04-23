#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA089B00)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__ISCURRENTROUNDMISSIONOPTIONFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xA08A720)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass36_0_TypeDefinitionIndex = 58519;

	class ChimeraWorkRoundInfo___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsCurrentRoundMissionOptionFinish_b__0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* conditionSatisfyList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__ISCURRENTROUNDMISSIONOPTIONFINISH_B__0_OFFSET))(this, conditionSatisfyList);
		}
	};
}
