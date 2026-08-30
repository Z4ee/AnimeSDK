#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_A75EFDFB089CFF33;
namespace RPG::Client { class BattleSilverWolf999BatteryUIData; }
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_62E0606796286B37_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCD16710)
#define CLASS_2_62E0606796286B37_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCD167E0)
#define CLASS_2_62E0606796286B37_METHOD_2_7835DD7D7F7FF1B7_1_OFFSET UNITYSDK_OFFSET(0xCD165A0)
#define CLASS_2_62E0606796286B37_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xCD16330)
#define CLASS_2_62E0606796286B37_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xCD162D0)
#define CLASS_2_62E0606796286B37_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xCD16380)
#define CLASS_2_62E0606796286B37_METHOD_2_C0A6A2378E4408C6_OFFSET UNITYSDK_OFFSET(0xCD165F0)
#define CLASS_2_62E0606796286B37_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xCD16650)
#define CLASS_2_62E0606796286B37__CTOR_OFFSET UNITYSDK_OFFSET(0xCD16880)
#define CLASS_2_62E0606796286B37__ONBIND_OFFSET UNITYSDK_OFFSET(0xCD160E0)

inline static constexpr unsigned int Class_2_62E0606796286B37_TypeDefinitionIndex = 71255;

class Class_2_62E0606796286B37 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::List_1<::Class_2_A75EFDFB089CFF33*>* AFNMLFJFNHL; // 0x60
	::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_7835DD7D7F7FF1B7_1_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::RPG::Client::BattleSilverWolf999BatteryUIData* Method_2_C0A6A2378E4408C6()
	{
		return ((::RPG::Client::BattleSilverWolf999BatteryUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_C0A6A2378E4408C6_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E0606796286B37_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
