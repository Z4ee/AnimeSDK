#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6396E99C6B13C372;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_AE8EBE1CD14F225E_METHOD_1_1D840C37681CAB4E_OFFSET UNITYSDK_OFFSET(0x18F3B990)
#define CLASS_1_AE8EBE1CD14F225E_METHOD_1_A0560671B0077EDE_OFFSET UNITYSDK_OFFSET(0x18F3B790)
#define CLASS_1_AE8EBE1CD14F225E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3BB00)

inline static constexpr unsigned int Class_1_AE8EBE1CD14F225E_TypeDefinitionIndex = 65769;

class Class_1_AE8EBE1CD14F225E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8EBE1CD14F225E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0560671B0077EDE(::Class_1_6396E99C6B13C372* a1, ::RPG::Client::ComposeItemData* a2, ::RPG::GameCore::ItemConfig* a3, ::System::UInt32 a4, ::System::UInt32& a5, ::RPG::Client::ComposeItemCost*& a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6396E99C6B13C372*, ::RPG::Client::ComposeItemData*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::RPG::Client::ComposeItemCost*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE8EBE1CD14F225E_METHOD_1_A0560671B0077EDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_1D840C37681CAB4E(::Class_1_6396E99C6B13C372* a1, ::RPG::Client::ComposeItemCost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6396E99C6B13C372*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + CLASS_1_AE8EBE1CD14F225E_METHOD_1_1D840C37681CAB4E_OFFSET))(this, a1, a2);
	}
};
