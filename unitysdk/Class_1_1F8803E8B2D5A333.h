#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1F8803E8B2D5A333_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x16218640)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x162185E0)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x162185C0)
#define CLASS_1_1F8803E8B2D5A333_GET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x16218620)
#define CLASS_1_1F8803E8B2D5A333_GET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x16218600)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16218570)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x16218660)
#define CLASS_1_1F8803E8B2D5A333_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x16218650)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x162185F0)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x162185D0)
#define CLASS_1_1F8803E8B2D5A333_SET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x16218630)
#define CLASS_1_1F8803E8B2D5A333_SET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x16218610)

inline static constexpr unsigned int Class_1_1F8803E8B2D5A333_TypeDefinitionIndex = 53666;

class Class_1_1F8803E8B2D5A333 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__RandomCounter_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x42F0);
	}
	static ::RPG::GameCore::TurnState* StaticGet__CurrentTurnState_k__BackingField()
	{
		return (::RPG::GameCore::TurnState*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x42F4);
	}
	static ::System::UInt32* StaticGet__OperationCounter_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x42F8);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x42FC);
	}
	static ::System::UInt32* StaticGet__LastInsertActionTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x4300);
	}
	static ::System::UInt32* StaticGet__LastOneMoreTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x4304);
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
