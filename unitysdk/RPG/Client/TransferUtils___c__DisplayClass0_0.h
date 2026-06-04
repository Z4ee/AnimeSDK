#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCACBB00)
#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xCACBB10)
#define RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__1_OFFSET UNITYSDK_OFFSET(0xCACBB30)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferUtils___c__DisplayClass0_0_TypeDefinitionIndex = 63794;

	class TransferUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferCheck_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__0_OFFSET))(this, a1);
		}

		::System::Void _TransferCheck_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS___C__DISPLAYCLASS0_0__TRANSFERCHECK_B__1_OFFSET))(this, a1);
		}
	};
}
