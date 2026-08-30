#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1F8803E8B2D5A333_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x180DF3C0)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x180DF360)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x180DF340)
#define CLASS_1_1F8803E8B2D5A333_GET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x180DF3A0)
#define CLASS_1_1F8803E8B2D5A333_GET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x180DF380)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x180DF2F0)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x180DF3E0)
#define CLASS_1_1F8803E8B2D5A333_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x180DF3D0)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x180DF370)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x180DF350)
#define CLASS_1_1F8803E8B2D5A333_SET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x180DF3B0)
#define CLASS_1_1F8803E8B2D5A333_SET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x180DF390)

inline static constexpr unsigned int Class_1_1F8803E8B2D5A333_TypeDefinitionIndex = 56385;

class Class_1_1F8803E8B2D5A333 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet__LastInsertActionTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA830);
	}
	static ::System::UInt32* StaticGet__LastOneMoreTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA834);
	}
	static ::System::UInt32* StaticGet__OperationCounter_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA838);
	}
	static ::System::UInt32* StaticGet_ONPPBOKMMKL()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA83C);
	}
	static ::RPG::GameCore::TurnState* StaticGet__CurrentTurnState_k__BackingField()
	{
		return (::RPG::GameCore::TurnState*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA840);
	}
	static ::System::Int32* StaticGet__RandomCounter_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0xA844);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::UInt32 get_LastOneMoreTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_LASTONEMORETURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastOneMoreTurnCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_LASTONEMORETURNCOUNT_OFFSET))(a1);
	}

	static ::System::UInt32 get_LastInsertActionTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_LASTINSERTACTIONTURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastInsertActionTurnCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_LASTINSERTACTIONTURNCOUNT_OFFSET))(a1);
	}

	static ::System::Int32 get_RandomCounter()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_RANDOMCOUNTER_OFFSET))();
	}

	static ::System::Void set_RandomCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_RANDOMCOUNTER_OFFSET))(a1);
	}

	static ::System::UInt32 get_OperationCounter()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_OPERATIONCOUNTER_OFFSET))();
	}

	static ::System::Void set_OperationCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_OPERATIONCOUNTER_OFFSET))(a1);
	}

	static ::RPG::GameCore::TurnState get_CurrentTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_CURRENTTURNSTATE_OFFSET))();
	}

	static ::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_CURRENTTURNSTATE_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_METHOD_1_CE81D059476B1F49_OFFSET))();
	}
};
