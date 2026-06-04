#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_88571254E3AA38DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13568340)
#define CLASS_1_88571254E3AA38DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13568370)
#define CLASS_1_88571254E3AA38DE___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET UNITYSDK_OFFSET(0x13568380)
#define CLASS_1_88571254E3AA38DE___C__PREFERHIGHERRARITY_B__7_0_OFFSET UNITYSDK_OFFSET(0x135683F0)
#define CLASS_1_88571254E3AA38DE___C__PREFERLATERRELEASED_B__6_0_OFFSET UNITYSDK_OFFSET(0x13568390)

inline static constexpr unsigned int Class_1_88571254E3AA38DE___c_TypeDefinitionIndex = 58752;

class Class_1_88571254E3AA38DE___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88571254E3AA38DE___c_TypeDefinitionIndex)->GetStaticField(0x43E10);
	}
	static ::Class_1_88571254E3AA38DE___c** StaticGet___9()
	{
		return (::Class_1_88571254E3AA38DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88571254E3AA38DE___c_TypeDefinitionIndex)->GetStaticField(0x43E18);
	}
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88571254E3AA38DE___c_TypeDefinitionIndex)->GetStaticField(0x43E20);
	}
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88571254E3AA38DE___c_TypeDefinitionIndex)->GetStaticField(0x43E28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _OrderByDamageType_b__5_0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET))(this, a1);
	}

	::System::Int32 _PreferLaterReleased_b__6_0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__PREFERLATERRELEASED_B__6_0_OFFSET))(this, a1);
	}

	::System::Int32 _PreferHigherRarity_b__7_0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__PREFERHIGHERRARITY_B__7_0_OFFSET))(this, a1);
	}
};
