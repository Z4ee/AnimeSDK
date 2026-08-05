#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_0_16E4307DCC419505_448;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_1E725F834BE760E8_OFFSET UNITYSDK_OFFSET(0x1682F3F0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1682F4A0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x1682F160)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET UNITYSDK_OFFSET(0x1682F6A0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1682F690)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_65A78C555487D0E9_OFFSET UNITYSDK_OFFSET(0x1682F7A0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_AE94FFFFB07FF2D0_OFFSET UNITYSDK_OFFSET(0x1682F1B0)
#define CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1682F5A0)

inline static constexpr unsigned int Class_1_FE36FFEA87DC93BA_TypeDefinitionIndex = 51392;

class Class_1_FE36FFEA87DC93BA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_448*, ::System::Action_1<::Class_0_16E4307DCC419505_301*>*>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_448* Field_1_0; // 0x18
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_448*>* Field_1_1; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_301*>* Field_1_6; // 0x28
	::System::Boolean Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_1E725F834BE760E8(::System::Action_1<::Class_0_16E4307DCC419505_301*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_301*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_1E725F834BE760E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_448* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_448*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_AE94FFFFB07FF2D0(::Class_0_16E4307DCC419505_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_AE94FFFFB07FF2D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57598E1E990D49D0(::Class_0_16E4307DCC419505_448* a1, ::System::Action_1<::Class_0_16E4307DCC419505_301*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::System::Action_1<::Class_0_16E4307DCC419505_301*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_65A78C555487D0E9(::Class_0_16E4307DCC419505_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_65A78C555487D0E9_OFFSET))(this, a1);
	}
};
