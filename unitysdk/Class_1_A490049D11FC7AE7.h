#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A490049D11FC7AE7_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D0E89C0)
#define CLASS_1_A490049D11FC7AE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E8CD0)

inline static constexpr unsigned int Class_1_A490049D11FC7AE7_TypeDefinitionIndex = 11265;

class Class_1_A490049D11FC7AE7 : public ::System::Object
{
public:
	::System::String* BIDDPFIKJLN; // 0x10
	::Il2CppArray<::System::UInt32>* GBJGDOAAEKL; // 0x18
	::System::String* NJINPDOKGPM; // 0x20
	::System::String* NBKAKPMNIDF; // 0x28
	::Il2CppArray<::System::UInt32>* KECPLLBNNNA; // 0x30
	::System::UInt32 LIIPLGLNPGB; // 0x38
	::System::UInt32 KFNMJCJPNBK; // 0x3C
	::RPG::Client::TextID PLGOICOBHGA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A490049D11FC7AE7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A490049D11FC7AE7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A490049D11FC7AE7*&))((::PBYTE)hIl2Cpp + CLASS_1_A490049D11FC7AE7_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
