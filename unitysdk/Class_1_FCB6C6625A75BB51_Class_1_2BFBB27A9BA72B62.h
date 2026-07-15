#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_697;
class Class_1_FCB6C6625A75BB51;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_ENTER_OFFSET UNITYSDK_OFFSET(0x1624AFB0)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_EXIT_OFFSET UNITYSDK_OFFSET(0x1624C060)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_METHOD_1_03DA479A87E484C7_OFFSET UNITYSDK_OFFSET(0x1624B550)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_TICK_OFFSET UNITYSDK_OFFSET(0x1624B060)
#define CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62__CTOR_OFFSET UNITYSDK_OFFSET(0x16248920)

inline static constexpr unsigned int Class_1_FCB6C6625A75BB51_Class_1_2BFBB27A9BA72B62_TypeDefinitionIndex = 59531;

class Class_1_FCB6C6625A75BB51_Class_1_2BFBB27A9BA72B62 : public ::System::Object
{
public:
	::Class_1_FCB6C6625A75BB51* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_697*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::Class_1_FCB6C6625A75BB51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCB6C6625A75BB51*))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_FCB6C6625A75BB51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCB6C6625A75BB51*))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_EXIT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Method_1_03DA479A87E484C7(::Class_0_16E4307DCC419505_697* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_0_16E4307DCC419505_697*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_FCB6C6625A75BB51_CLASS_1_2BFBB27A9BA72B62_METHOD_1_03DA479A87E484C7_OFFSET))(this, a1, a2);
	}
};
