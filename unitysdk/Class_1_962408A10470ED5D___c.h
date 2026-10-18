#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_962408A10470ED5D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A2A450)
#define CLASS_1_962408A10470ED5D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A490)
#define CLASS_1_962408A10470ED5D___C__GETSORTEDBUFFLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x13A2A4A0)

inline static constexpr unsigned int Class_1_962408A10470ED5D___c_TypeDefinitionIndex = 68269;

class Class_1_962408A10470ED5D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::VoracityInvasionProgressBuffData*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::RPG::Client::VoracityInvasionProgressBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_962408A10470ED5D___c_TypeDefinitionIndex)->GetStaticField(0x6FFF0);
	}
	static ::Class_1_962408A10470ED5D___c** StaticGet___9()
	{
		return (::Class_1_962408A10470ED5D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_962408A10470ED5D___c_TypeDefinitionIndex)->GetStaticField(0x6FFF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_962408A10470ED5D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962408A10470ED5D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedBuffList_b__2_0(::RPG::Client::VoracityInvasionProgressBuffData* a1, ::RPG::Client::VoracityInvasionProgressBuffData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::VoracityInvasionProgressBuffData*, ::RPG::Client::VoracityInvasionProgressBuffData*))((::PBYTE)hIl2Cpp + CLASS_1_962408A10470ED5D___C__GETSORTEDBUFFLIST_B__2_0_OFFSET))(this, a1, a2);
	}
};
