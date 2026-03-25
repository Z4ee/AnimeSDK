#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_ED163CCD8716BD10_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x114516B0)
#define CLASS_1_ED163CCD8716BD10_METHOD_1_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x11451520)
#define CLASS_1_ED163CCD8716BD10_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x11451440)
#define CLASS_1_ED163CCD8716BD10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11451840)
#define CLASS_1_ED163CCD8716BD10__CTOR_OFFSET UNITYSDK_OFFSET(0x11451430)
#define CLASS_1_ED163CCD8716BD10___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11451BA0)

inline static constexpr unsigned int Class_1_ED163CCD8716BD10_TypeDefinitionIndex = 47923;

class Class_1_ED163CCD8716BD10 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_471* Field_1_0; // 0x10
	::RPG::Client::IAssetOperation* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_471*))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10__CTOR_OFFSET))(this, a1);
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

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED163CCD8716BD10___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
