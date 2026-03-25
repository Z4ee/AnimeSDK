#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise___c__DisplayClass65_0; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18348820)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__SEQUENCE_B__1_OFFSET UNITYSDK_OFFSET(0x18348830)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__SEQUENCE_B__2_OFFSET UNITYSDK_OFFSET(0x18348890)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass65_1_TypeDefinitionIndex = 9625;

	class Promise___c__DisplayClass65_1 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* fn; // 0x10
		::RPG::Client::Promises::Promise___c__DisplayClass65_0* CS___8__locals1; // 0x18
		::System::Int32 itemSequence; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _Sequence_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__SEQUENCE_B__1_OFFSET))(this);
		}

		::System::Void _Sequence_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS65_1__SEQUENCE_B__2_OFFSET))(this, v);
		}
	};
}
