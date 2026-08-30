#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A490049D11FC7AE7_1_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1C8CD370)
#define CLASS_1_A490049D11FC7AE7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8CD660)

inline static constexpr unsigned int Class_1_A490049D11FC7AE7_1_TypeDefinitionIndex = 13865;

class Class_1_A490049D11FC7AE7_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* JBJJIOFBBCN; // 0x10
	::System::String* EGCJJGJJLOE; // 0x18
	::System::String* EDFFEFOCCBN; // 0x20
	::System::UInt32 LPNBEANGIGE; // 0x28
	::System::UInt32 PBAOJGFDKDG; // 0x2C
	::System::UInt32 EKJGBBEIHMD; // 0x30
	::System::UInt32 ELGNMHLEEEH; // 0x34
	::RPG::Client::TextID KNFOBJPKBPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A490049D11FC7AE7_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A490049D11FC7AE7_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A490049D11FC7AE7_1*&))((::PBYTE)hIl2Cpp + CLASS_1_A490049D11FC7AE7_1_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
