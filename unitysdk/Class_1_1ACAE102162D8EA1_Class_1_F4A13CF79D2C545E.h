#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_638;
class Class_1_1ACAE102162D8EA1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_ENTER_OFFSET UNITYSDK_OFFSET(0x982E270)
#define CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_EXIT_OFFSET UNITYSDK_OFFSET(0x982F060)
#define CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_METHOD_1_607A9A50C0D880BE_OFFSET UNITYSDK_OFFSET(0x982E8D0)
#define CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_TICK_OFFSET UNITYSDK_OFFSET(0x982E320)
#define CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E__CTOR_OFFSET UNITYSDK_OFFSET(0x982BCD0)

inline static constexpr unsigned int Class_1_1ACAE102162D8EA1_Class_1_F4A13CF79D2C545E_TypeDefinitionIndex = 57457;

class Class_1_1ACAE102162D8EA1_Class_1_F4A13CF79D2C545E : public ::System::Object
{
public:
	::Class_1_1ACAE102162D8EA1* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_638*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::Class_1_1ACAE102162D8EA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ACAE102162D8EA1*))((::PBYTE)hIl2Cpp + CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_1ACAE102162D8EA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ACAE102162D8EA1*))((::PBYTE)hIl2Cpp + CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_EXIT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Method_1_607A9A50C0D880BE(::Class_0_16E4307DCC419505_638* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_0_16E4307DCC419505_638*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_1ACAE102162D8EA1_CLASS_1_F4A13CF79D2C545E_METHOD_1_607A9A50C0D880BE_OFFSET))(this, a1, a2);
	}
};
