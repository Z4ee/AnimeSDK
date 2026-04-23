#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB36FF50)
#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xB36FF60)
#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__1_OFFSET UNITYSDK_OFFSET(0xB36FF80)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferUtils___c__DisplayClass0_0_TypeDefinitionIndex = 62859;

	class TransferUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferCheck_b__0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__0_OFFSET))(this, isOk);
		}

		::System::Void _TransferCheck_b__1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__1_OFFSET))(this, isOk);
		}
	};
}
