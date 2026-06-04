#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_662;
class Class_1_FCB6C6625A75BB51;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_ENTER_OFFSET UNITYSDK_OFFSET(0x13C905A0)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_EXIT_OFFSET UNITYSDK_OFFSET(0x13C911F0)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_METHOD_1_607A9A50C0D880BE_OFFSET UNITYSDK_OFFSET(0x13C90AE0)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_TICK_OFFSET UNITYSDK_OFFSET(0x13C90650)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8E200)

inline static constexpr unsigned int Class_1_FCB6C6625A75BB51_Class_1_F4A13CF79D2C545E_TypeDefinitionIndex = 58269;

class Class_1_FCB6C6625A75BB51_Class_1_F4A13CF79D2C545E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_0; // 0x10
	::Class_1_FCB6C6625A75BB51* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_662*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::Class_1_FCB6C6625A75BB51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCB6C6625A75BB51*))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_FCB6C6625A75BB51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCB6C6625A75BB51*))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_EXIT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Method_1_607A9A50C0D880BE(::Class_0_16E4307DCC419505_662* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_0_16E4307DCC419505_662*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_F4A13CF79D2C545E_METHOD_1_607A9A50C0D880BE_OFFSET))(this, a1, a2);
	}
};
