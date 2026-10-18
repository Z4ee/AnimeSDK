#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB212AD0)

inline static constexpr unsigned int Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex = 54064;

class Class_1_AEF643E5EA8B44DD_2 : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonEnum** StaticGet_IBNGJKBPMOO()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x166A0);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x166A8);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x166B0);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_HGLIFJGHADE()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x166B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET))();
	}
};
