#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1E9F6DAAE25A016F.h"
#include "unitysdk/Enum_3_DB663931210BBC27_47.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"

class Class_1_4CE63FCF9609E6DB;
class Class_1_782D7B640E2E81AE;
class Class_3_8675658B1FBE887E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2874BE670AE934F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11386C60)
#define CLASS_2_2874BE670AE934F7_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x11387DD0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_10C048ACE04A2930_OFFSET UNITYSDK_OFFSET(0x113871B0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x113876B0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11387050)
#define CLASS_2_2874BE670AE934F7_METHOD_2_4D9D198FC5DFECA9_OFFSET UNITYSDK_OFFSET(0x11387490)
#define CLASS_2_2874BE670AE934F7_METHOD_2_6620D85FFBC4256B_OFFSET UNITYSDK_OFFSET(0x11386DF0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_68323496EF31DF87_OFFSET UNITYSDK_OFFSET(0x113873D0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_6A34EBFF5E9EF5A2_OFFSET UNITYSDK_OFFSET(0x11387810)
#define CLASS_2_2874BE670AE934F7_METHOD_2_8FF354B64B657510_1_OFFSET UNITYSDK_OFFSET(0x11387E30)
#define CLASS_2_2874BE670AE934F7_METHOD_2_8FF354B64B657510_OFFSET UNITYSDK_OFFSET(0x11387990)
#define CLASS_2_2874BE670AE934F7_METHOD_2_ED34DCC6F6541B09_1_OFFSET UNITYSDK_OFFSET(0x11387B70)
#define CLASS_2_2874BE670AE934F7_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x11386CE0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_EFC8C9A529A09180_OFFSET UNITYSDK_OFFSET(0x11387AF0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_F0EDD45507078A04_OFFSET UNITYSDK_OFFSET(0x11387C80)
#define CLASS_2_2874BE670AE934F7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11386BE0)
#define CLASS_2_2874BE670AE934F7__CTOR_OFFSET UNITYSDK_OFFSET(0x11386CC0)

inline static constexpr unsigned int Class_2_2874BE670AE934F7_TypeDefinitionIndex = 72295;

class Class_2_2874BE670AE934F7 : public ::Foundation::SingletonDisposable_1<::Class_2_2874BE670AE934F7*>
{
public:
	::Class_1_782D7B640E2E81AE* Field_2_1; // 0x10
	::Class_3_8675658B1FBE887E* Field_2_2; // 0x18
	::Class_1_4CE63FCF9609E6DB* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_10C048ACE04A2930(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_10C048ACE04A2930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68323496EF31DF87(::Class_3_8675658B1FBE887E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8675658B1FBE887E*))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_68323496EF31DF87_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D9D198FC5DFECA9(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_4D9D198FC5DFECA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_6A34EBFF5E9EF5A2(::MoleMole::MiniGame::TartarusHounds::Direction a1, ::System::Boolean a2, ::Enum_3_1E9F6DAAE25A016F a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean, ::Enum_3_1E9F6DAAE25A016F))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_6A34EBFF5E9EF5A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6620D85FFBC4256B(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_6620D85FFBC4256B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8FF354B64B657510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_8FF354B64B657510_OFFSET))(this, a1);
	}

	::System::Void Method_2_EFC8C9A529A09180(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_EFC8C9A529A09180_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ED34DCC6F6541B09_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_ED34DCC6F6541B09_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0EDD45507078A04(::Enum_3_DB663931210BBC27_47 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_47))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_F0EDD45507078A04_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_782D7B640E2E81AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_782D7B640E2E81AE*))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FF354B64B657510_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_8FF354B64B657510_1_OFFSET))(this, a1);
	}
};
