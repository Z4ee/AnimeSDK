#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_413;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_342C8260013D3499_METHOD_1_3544DE82549493A9_OFFSET UNITYSDK_OFFSET(0xED7C1F0)
#define CLASS_1_342C8260013D3499_METHOD_1_BC3DC4F0CC25EA0A_OFFSET UNITYSDK_OFFSET(0xED7C080)
#define CLASS_1_342C8260013D3499__CTOR_OFFSET UNITYSDK_OFFSET(0xED7C280)

inline static constexpr unsigned int Class_1_342C8260013D3499_TypeDefinitionIndex = 76094;

class Class_1_342C8260013D3499 : public ::System::Object
{
public:
	::System::Action* EDHFCGNFFBF; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* GKCIFCIHJBK; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* IHAPLODILIG; // 0x20
	::System::Func_3<::System::UInt32, ::System::Boolean, ::Class_0_16E4307DCC419505_413*>* BKEGFOPHOKL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_342C8260013D3499__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC3DC4F0CC25EA0A(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_342C8260013D3499_METHOD_1_BC3DC4F0CC25EA0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3544DE82549493A9(::System::Boolean a1, ::Class_0_16E4307DCC419505_413* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_342C8260013D3499_METHOD_1_3544DE82549493A9_OFFSET))(this, a1, a2);
	}
};
