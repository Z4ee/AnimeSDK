#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_718B8238EA10D3FF;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1200_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0E70)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1200_0___REQUESTSERVERDISPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xC2E0E80)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1200_0_TypeDefinitionIndex = 64860;

	class NetworkManager___c__DisplayClass1200_0 : public ::System::Object
	{
	public:
		::Class_1_718B8238EA10D3FF* handleResult; // 0x10
		::System::Action_1<::Class_1_718B8238EA10D3FF*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1200_0__CTOR_OFFSET))(this);
		}

		::System::Void __RequestServerDispatch_b__0(::Class_1_718B8238EA10D3FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_718B8238EA10D3FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1200_0___REQUESTSERVERDISPATCH_B__0_OFFSET))(this, a1);
		}
	};
}
