#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_413;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2D2D4A639FB13B87_METHOD_1_3544DE82549493A9_OFFSET UNITYSDK_OFFSET(0x171188C0)
#define CLASS_1_2D2D4A639FB13B87_METHOD_1_BC3DC4F0CC25EA0A_OFFSET UNITYSDK_OFFSET(0x17118750)
#define CLASS_1_2D2D4A639FB13B87__CTOR_OFFSET UNITYSDK_OFFSET(0x17118950)

inline static constexpr unsigned int Class_1_2D2D4A639FB13B87_TypeDefinitionIndex = 76095;

class Class_1_2D2D4A639FB13B87 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* GKCIFCIHJBK; // 0x10
	::System::Action* EDHFCGNFFBF; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* IHAPLODILIG; // 0x20
	::System::Func_2<::System::UInt32, ::Class_0_16E4307DCC419505_413*>* BKEGFOPHOKL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D2D4A639FB13B87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC3DC4F0CC25EA0A(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_2D2D4A639FB13B87_METHOD_1_BC3DC4F0CC25EA0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3544DE82549493A9(::System::Boolean a1, ::Class_0_16E4307DCC419505_413* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_2D2D4A639FB13B87_METHOD_1_3544DE82549493A9_OFFSET))(this, a1, a2);
	}
};
