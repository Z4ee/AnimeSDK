#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A02042FDA59B37DA_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x11977430)
#define CLASS_1_A02042FDA59B37DA_GET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x119773D0)
#define CLASS_1_A02042FDA59B37DA_GET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x119773B0)
#define CLASS_1_A02042FDA59B37DA_GET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x11977410)
#define CLASS_1_A02042FDA59B37DA_GET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x119773F0)
#define CLASS_1_A02042FDA59B37DA_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11977360)
#define CLASS_1_A02042FDA59B37DA_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x11977450)
#define CLASS_1_A02042FDA59B37DA_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x11977440)
#define CLASS_1_A02042FDA59B37DA_SET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x119773E0)
#define CLASS_1_A02042FDA59B37DA_SET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x119773C0)
#define CLASS_1_A02042FDA59B37DA_SET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x11977420)
#define CLASS_1_A02042FDA59B37DA_SET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x11977400)

inline static constexpr unsigned int Class_1_A02042FDA59B37DA_TypeDefinitionIndex = 51788;

class Class_1_A02042FDA59B37DA : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet__LastInsertActionTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A20);
	}
	static ::System::UInt32* StaticGet__LastOneMoreTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A24);
	}
	static ::RPG::GameCore::TurnState* StaticGet__CurrentTurnState_k__BackingField()
	{
		return (::RPG::GameCore::TurnState*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A28);
	}
	static ::System::Int32* StaticGet__RandomCounter_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A2C);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A30);
	}
	static ::System::UInt32* StaticGet__OperationCounter_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02042FDA59B37DA_TypeDefinitionIndex)->GetStaticField(0x5A34);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::UInt32 get_LastOneMoreTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_GET_LASTONEMORETURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastOneMoreTurnCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_SET_LASTONEMORETURNCOUNT_OFFSET))(value);
	}

	static ::System::UInt32 get_LastInsertActionTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_GET_LASTINSERTACTIONTURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastInsertActionTurnCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_SET_LASTINSERTACTIONTURNCOUNT_OFFSET))(value);
	}

	static ::System::Int32 get_RandomCounter()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_GET_RANDOMCOUNTER_OFFSET))();
	}

	static ::System::Void set_RandomCounter(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_SET_RANDOMCOUNTER_OFFSET))(value);
	}

	static ::System::UInt32 get_OperationCounter()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_GET_OPERATIONCOUNTER_OFFSET))();
	}

	static ::System::Void set_OperationCounter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_SET_OPERATIONCOUNTER_OFFSET))(value);
	}

	static ::RPG::GameCore::TurnState get_CurrentTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_GET_CURRENTTURNSTATE_OFFSET))();
	}

	static ::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState value)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_SET_CURRENTTURNSTATE_OFFSET))(value);
	}

	static ::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02042FDA59B37DA_METHOD_1_CE81D059476B1F49_OFFSET))();
	}
};
