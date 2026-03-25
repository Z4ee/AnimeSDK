#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_9C05E9EEA86F0292___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8751F00)
#define CLASS_1_9C05E9EEA86F0292___C__CREATECARDS_B__1_0_OFFSET UNITYSDK_OFFSET(0x8751F40)
#define CLASS_1_9C05E9EEA86F0292___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8751F30)

inline static constexpr unsigned int Class_1_9C05E9EEA86F0292___c_TypeDefinitionIndex = 51840;

class Class_1_9C05E9EEA86F0292___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::EvolveBuildCard*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::EvolveBuildCard*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C05E9EEA86F0292___c_TypeDefinitionIndex)->GetStaticField(0x1EAA0);
	}
	static ::Class_1_9C05E9EEA86F0292___c** StaticGet___9()
	{
		return (::Class_1_9C05E9EEA86F0292___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C05E9EEA86F0292___c_TypeDefinitionIndex)->GetStaticField(0x1EAA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CreateCards_b__1_0(::RPG::Client::EvolveBuildCard* a, ::RPG::Client::EvolveBuildCard* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292___C__CREATECARDS_B__1_0_OFFSET))(this, a, b);
	}
};
