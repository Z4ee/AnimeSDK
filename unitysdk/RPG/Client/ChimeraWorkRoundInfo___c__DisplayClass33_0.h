#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client { class ChimeraWorkRoundInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF6480)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS33_0__GETCURRENTDISPLAYROUNDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1BBF7DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass33_0_TypeDefinitionIndex = 63570;

	class ChimeraWorkRoundInfo___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::ChimeraWorkRoundData*>* promise; // 0x10
		::RPG::Client::ChimeraWorkRoundInfo* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCurrentDisplayRoundData_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS33_0__GETCURRENTDISPLAYROUNDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
