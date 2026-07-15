#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_2_291F7DA21A504FC4;

#define CLASS_2_32ECE6AF815EB6B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F89B10)
#define CLASS_2_32ECE6AF815EB6B7_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15F89BB0)
#define CLASS_2_32ECE6AF815EB6B7_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15F89B60)
#define CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x15F89C20)
#define CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x15F89C00)
#define CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET UNITYSDK_OFFSET(0x15F89AB0)
#define CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x15F89C30)
#define CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x15F89C10)
#define CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x15F89C40)

inline static constexpr unsigned int Class_2_32ECE6AF815EB6B7_TypeDefinitionIndex = 51609;

class Class_2_32ECE6AF815EB6B7 : public ::Class_1_BF7A075734D15E98
{
public:
	::Class_2_291F7DA21A504FC4* _ModifierInstance_k__BackingField; // 0x18
	::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET))(this);
	}

	::Class_2_32ECE6AF815EB6B7* Method_2_4BAE44F81E432ECB(::Class_2_291F7DA21A504FC4* a1, ::RPG::GameCore::ModifierDeathSource a2)
	{
		return ((::Class_2_32ECE6AF815EB6B7*(*)(::PVOID, ::Class_2_291F7DA21A504FC4*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GETEVENTTYPE_OFFSET))(this);
	}

	::Class_2_291F7DA21A504FC4* get_ModifierInstance()
	{
		return ((::Class_2_291F7DA21A504FC4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET))(this);
	}

	::System::Void set_ModifierInstance(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ModifierDeathSource get_DeathSource()
	{
		return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET))(this);
	}

	::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET))(this, a1);
	}
};
