#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8D9283070439813F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF2DE140)
#define CLASS_1_8D9283070439813F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DE170)
#define CLASS_1_8D9283070439813F___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET UNITYSDK_OFFSET(0xF2DE180)
#define CLASS_1_8D9283070439813F___C__PREFERHIGHERRARITY_B__7_0_OFFSET UNITYSDK_OFFSET(0xF2DE200)
#define CLASS_1_8D9283070439813F___C__PREFERLATERRELEASED_B__6_0_OFFSET UNITYSDK_OFFSET(0xF2DE190)

inline static constexpr unsigned int Class_1_8D9283070439813F___c_TypeDefinitionIndex = 57859;

class Class_1_8D9283070439813F___c : public ::System::Object
{
public:
	static ::Class_1_8D9283070439813F___c** StaticGet___9()
	{
		return (::Class_1_8D9283070439813F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D9283070439813F___c_TypeDefinitionIndex)->GetStaticField(0x11310);
	}
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D9283070439813F___c_TypeDefinitionIndex)->GetStaticField(0x11318);
	}
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D9283070439813F___c_TypeDefinitionIndex)->GetStaticField(0x11320);
	}
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D9283070439813F___c_TypeDefinitionIndex)->GetStaticField(0x11328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _OrderByDamageType_b__5_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET))(this, avatar);
	}

	::System::Int32 _PreferLaterReleased_b__6_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__PREFERLATERRELEASED_B__6_0_OFFSET))(this, avatar);
	}

	::System::Int32 _PreferHigherRarity_b__7_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__PREFERHIGHERRARITY_B__7_0_OFFSET))(this, avatar);
	}
};
