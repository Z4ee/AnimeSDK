#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/LanguageType.h"

class Class_0_16E4307DCC419505_188;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define CLASS_2_860CDD39DD0BA983_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14793180)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x14793D90)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x14793520)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x14793310)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_6A084FF170EAA22F_OFFSET UNITYSDK_OFFSET(0x14793CF0)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0x14793C40)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_C72E166768E296E3_OFFSET UNITYSDK_OFFSET(0x14793680)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14793CE0)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_E5D94302BAAA7B24_OFFSET UNITYSDK_OFFSET(0x14793510)
#define CLASS_2_860CDD39DD0BA983_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14793C30)
#define CLASS_2_860CDD39DD0BA983_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14793260)
#define CLASS_2_860CDD39DD0BA983__CTOR_OFFSET UNITYSDK_OFFSET(0x14793490)

inline static constexpr unsigned int Class_2_860CDD39DD0BA983_TypeDefinitionIndex = 39486;

class Class_2_860CDD39DD0BA983 : public ::Foundation::SingletonDisposable_1<::Class_2_860CDD39DD0BA983*>
{
public:
	::System::Globalization::CultureInfo* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_188*>* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_ONCREATE_OFFSET))(this);
	}

	::System::Globalization::CultureInfo* Method_2_E5D94302BAAA7B24()
	{
		return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_E5D94302BAAA7B24_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_188* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_188*))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_C72E166768E296E3(::MoleMole::LanguageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_C72E166768E296E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_2_2FED925376FD83FF(::Class_0_16E4307DCC419505_188* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_188*))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A084FF170EAA22F(::MoleMole::LanguageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + CLASS_2_860CDD39DD0BA983_METHOD_2_6A084FF170EAA22F_OFFSET))(this, a1);
	}
};
