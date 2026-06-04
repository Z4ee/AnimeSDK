#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise___c__DisplayClass62_0; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__ALL_B__1_OFFSET UNITYSDK_OFFSET(0x18E989A0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__ALL_B__2_OFFSET UNITYSDK_OFFSET(0x18E98A10)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E98960)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass62_1_TypeDefinitionIndex = 9573;

	class Promise___c__DisplayClass62_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise___c__DisplayClass62_0* CS___8__locals1; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__CTOR_OFFSET))(this);
		}

		::System::Void _All_b__1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__ALL_B__1_OFFSET))(this, a1);
		}

		::System::Void _All_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS62_1__ALL_B__2_OFFSET))(this);
		}
	};
}
