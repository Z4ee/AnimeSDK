#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180F49B0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS63_0__THENSEQUENCE_B__0_OFFSET UNITYSDK_OFFSET(0x180F5D60)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass63_0_TypeDefinitionIndex = 8671;

	class Promise___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*>* chain; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ThenSequence_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS63_0__THENSEQUENCE_B__0_OFFSET))(this);
		}
	};
}
