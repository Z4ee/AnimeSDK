#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_607;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_ED163CCD8716BD10_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x16001250)
#define CLASS_1_ED163CCD8716BD10_METHOD_1_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x16001020)
#define CLASS_1_ED163CCD8716BD10_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x16000EF0)
#define CLASS_1_ED163CCD8716BD10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16001480)
#define CLASS_1_ED163CCD8716BD10__CTOR_OFFSET UNITYSDK_OFFSET(0x16000EE0)

inline static constexpr unsigned int Class_1_ED163CCD8716BD10_TypeDefinitionIndex = 56630;

class Class_1_ED163CCD8716BD10 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_607* Field_1_0; // 0x10
	::RPG::Client::IAssetOperation* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_607* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_607*))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Boolean Method_1_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10_METHOD_1_D67046CBB357BF79_OFFSET))(this);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10_TOSTRING_OFFSET))(this);
	}
};
