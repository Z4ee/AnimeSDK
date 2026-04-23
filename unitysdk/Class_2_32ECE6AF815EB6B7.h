#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_2_24193089A4D2255F;

#define CLASS_2_32ECE6AF815EB6B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x905C580)
#define CLASS_2_32ECE6AF815EB6B7_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x905C620)
#define CLASS_2_32ECE6AF815EB6B7_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x905C5D0)
#define CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x905C690)
#define CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x905C670)
#define CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET UNITYSDK_OFFSET(0x905C520)
#define CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x905C6A0)
#define CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x905C680)
#define CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x905C6B0)
#define CLASS_2_32ECE6AF815EB6B7___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x905C6C0)

inline static constexpr unsigned int Class_2_32ECE6AF815EB6B7_TypeDefinitionIndex = 49860;

class Class_2_32ECE6AF815EB6B7 : public ::Class_1_9988289E7F8AA214
{
public:
	::Class_2_24193089A4D2255F* _ModifierInstance_k__BackingField; // 0x18
	::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET))(this);
	}

	::Class_2_32ECE6AF815EB6B7* Method_2_4BAE44F81E432ECB(::Class_2_24193089A4D2255F* a1, ::RPG::GameCore::ModifierDeathSource a2)
	{
		return ((::Class_2_32ECE6AF815EB6B7*(*)(::PVOID, ::Class_2_24193089A4D2255F*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET))(this, a1, a2);
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

	::Class_2_24193089A4D2255F* get_ModifierInstance()
	{
		return ((::Class_2_24193089A4D2255F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET))(this);
	}

	::System::Void set_ModifierInstance(::Class_2_24193089A4D2255F* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::ModifierDeathSource get_DeathSource()
	{
		return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET))(this);
	}

	::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
