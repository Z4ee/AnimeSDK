#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_QUADRATICEQUATION_METHOD_2_89FADE33F34E4AE0_1_OFFSET UNITYSDK_OFFSET(0xDD180)
#define RPG_CLIENT_QUADRATICEQUATION_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xDD100)
#define RPG_CLIENT_QUADRATICEQUATION_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xDD1F0)
#define RPG_CLIENT_QUADRATICEQUATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDD240)
#define RPG_CLIENT_QUADRATICEQUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)
#define RPG_CLIENT_QUADRATICEQUATION___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDD250)

namespace RPG::Client
{
	inline static constexpr unsigned int QuadraticEquation_TypeDefinitionIndex = 67457;

	struct alignas(4) QuadraticEquation
	{
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single c; // 0x18
		::System::Single rSquared; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
		}

		::System::Single Method_2_89FADE33F34E4AE0_1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_METHOD_2_89FADE33F34E4AE0_1_OFFSET))(this, a1);
		}

		::System::Single Method_2_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
