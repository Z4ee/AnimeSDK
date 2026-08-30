#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_718B8238EA10D3FF;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1230_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20DC00)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1230_0___REQUESTSERVERDISPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1A20DC10)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1230_0_TypeDefinitionIndex = 69338;

	class NetworkManager___c__DisplayClass1230_0 : public ::System::Object
	{
	public:
		::Class_1_718B8238EA10D3FF* handleResult; // 0x10
		::System::Action_1<::Class_1_718B8238EA10D3FF*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1230_0__CTOR_OFFSET))(this);
		}

		::System::Void __RequestServerDispatch_b__0(::Class_1_718B8238EA10D3FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_718B8238EA10D3FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1230_0___REQUESTSERVERDISPATCH_B__0_OFFSET))(this, a1);
		}
	};
}
