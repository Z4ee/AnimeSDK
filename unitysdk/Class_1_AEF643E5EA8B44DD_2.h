#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1632C140)

inline static constexpr unsigned int Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex = 54278;

class Class_1_AEF643E5EA8B44DD_2 : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x1A640);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x1A648);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_IBNGJKBPMOO()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x1A650);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_HGLIFJGHADE()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x1A658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET))();
	}
};
