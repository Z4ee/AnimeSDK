#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF7CF0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS42_0___ISROUNDANYSUBMISSIONFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x1BBF85C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass42_0_TypeDefinitionIndex = 63575;

	class ChimeraWorkRoundInfo___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void __IsRoundAnySubMissionFinished_b__0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS42_0___ISROUNDANYSUBMISSIONFINISHED_B__0_OFFSET))(this, a1);
		}
	};
}
