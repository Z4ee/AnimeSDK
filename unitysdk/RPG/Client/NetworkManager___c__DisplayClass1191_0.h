#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D8D891CDDE5DED;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1191_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABD3370)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1191_0___REQUESTSERVERDISPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xABD3380)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1191_0_TypeDefinitionIndex = 63939;

	class NetworkManager___c__DisplayClass1191_0 : public ::System::Object
	{
	public:
		::Class_1_D6D8D891CDDE5DED* handleResult; // 0x10
		::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1191_0__CTOR_OFFSET))(this);
		}

		::System::Void __RequestServerDispatch_b__0(::Class_1_D6D8D891CDDE5DED* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6D8D891CDDE5DED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1191_0___REQUESTSERVERDISPATCH_B__0_OFFSET))(this, result);
		}
	};
}
