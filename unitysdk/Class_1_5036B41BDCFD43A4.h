#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5036B41BDCFD43A4_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1D6CF170)
#define CLASS_1_5036B41BDCFD43A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CF480)

inline static constexpr unsigned int Class_1_5036B41BDCFD43A4_TypeDefinitionIndex = 13852;

class Class_1_5036B41BDCFD43A4 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* KCJAICDOHPN; // 0x10
	::System::UInt32 LIIBNDIFNDO; // 0x18
	::System::UInt32 AEONKNDCDKN; // 0x1C
	::RPG::Client::TextID BBOHFMDPCJP; // 0x20
	::RPG::Client::TextID KFCJIAKLCFD; // 0x30
	::RPG::Client::TextID OIHMMHAJHHB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5036B41BDCFD43A4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5036B41BDCFD43A4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5036B41BDCFD43A4*&))((::PBYTE)hIl2Cpp + CLASS_1_5036B41BDCFD43A4_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
