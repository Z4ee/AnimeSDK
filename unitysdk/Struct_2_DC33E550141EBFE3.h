#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleViewRule.h"
#include "unitysdk/RPG/Client/Sample/SampleViewType.h"
#include "unitysdk/RPG/Client/Sample/SampleViewUnit.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DC33E550141EBFE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x870E0)
#define STRUCT_2_DC33E550141EBFE3__CTOR_OFFSET UNITYSDK_OFFSET(0x870D0)

inline static constexpr unsigned int Struct_2_DC33E550141EBFE3_TypeDefinitionIndex = 69122;

struct alignas(8) Struct_2_DC33E550141EBFE3
{
	::RPG::Client::Sample::SampleViewType Field_2_0; // 0x10
	::RPG::Client::Sample::SampleViewRule Field_2_1; // 0x14
	::RPG::Client::Sample::SampleViewUnit Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20

	::System::Void _ctor(::RPG::Client::Sample::SampleViewType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Sample::SampleViewType, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DC33E550141EBFE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::Sample::SampleViewType a1, ::RPG::Client::Sample::SampleViewRule a2, ::RPG::Client::Sample::SampleViewUnit a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Sample::SampleViewType, ::RPG::Client::Sample::SampleViewRule, ::RPG::Client::Sample::SampleViewUnit, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DC33E550141EBFE3__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
