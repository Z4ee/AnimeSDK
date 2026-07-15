#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D4711C2FABD22E7C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1517B970)
#define CLASS_1_D4711C2FABD22E7C___C__CREATECARDS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1517B9B0)
#define CLASS_1_D4711C2FABD22E7C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1517B9A0)

inline static constexpr unsigned int Class_1_D4711C2FABD22E7C___c_TypeDefinitionIndex = 61003;

class Class_1_D4711C2FABD22E7C___c : public ::System::Object
{
public:
	static ::Class_1_D4711C2FABD22E7C___c** StaticGet___9()
	{
		return (::Class_1_D4711C2FABD22E7C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4711C2FABD22E7C___c_TypeDefinitionIndex)->GetStaticField(0x33660);
	}
	static ::System::Comparison_1<::RPG::Client::EvolveBuildCard*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::EvolveBuildCard*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4711C2FABD22E7C___c_TypeDefinitionIndex)->GetStaticField(0x33668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CreateCards_b__1_0(::RPG::Client::EvolveBuildCard* a1, ::RPG::Client::EvolveBuildCard* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C___C__CREATECARDS_B__1_0_OFFSET))(this, a1, a2);
	}
};
