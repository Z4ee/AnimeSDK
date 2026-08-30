#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5036B41BDCFD43A4_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1DAE1BC0)
#define CLASS_1_5036B41BDCFD43A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1ED0)

inline static constexpr unsigned int Class_1_5036B41BDCFD43A4_TypeDefinitionIndex = 13852;

class Class_1_5036B41BDCFD43A4 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* KCJAICDOHPN; // 0x10
	::RPG::Client::TextID KFCJIAKLCFD; // 0x18
	::RPG::Client::TextID BBOHFMDPCJP; // 0x28
	::RPG::Client::TextID OIHMMHAJHHB; // 0x38
	::System::UInt32 AEONKNDCDKN; // 0x48
	::System::UInt32 LIIBNDIFNDO; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5036B41BDCFD43A4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5036B41BDCFD43A4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5036B41BDCFD43A4*&))((::PBYTE)hIl2Cpp + CLASS_1_5036B41BDCFD43A4_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
