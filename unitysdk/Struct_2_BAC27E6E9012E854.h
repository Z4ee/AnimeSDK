#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/Struct_2_C6C48BB44B10E8A0.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_BAC27E6E9012E854_METHOD_2_697A1F9A2C6384B4_OFFSET UNITYSDK_OFFSET(0x3B65D00)
#define STRUCT_2_BAC27E6E9012E854_METHOD_2_9C62E4C152B20715_OFFSET UNITYSDK_OFFSET(0x3B65E00)
#define STRUCT_2_BAC27E6E9012E854_METHOD_2_9FE4AB7E2BDAE9CB_OFFSET UNITYSDK_OFFSET(0x3B65D80)
#define STRUCT_2_BAC27E6E9012E854_METHOD_2_A76D2F9A9727F703_OFFSET UNITYSDK_OFFSET(0x3B65C90)

inline static constexpr unsigned int Struct_2_BAC27E6E9012E854_TypeDefinitionIndex = 41828;

struct alignas(8) Struct_2_BAC27E6E9012E854
{
	::System::String* LOPPEGGELBJ; // 0x10
	::System::Boolean NOOJOFHAIAA; // 0x18
	::RPG::Client::LittleGame::FiveDim::SpikeTrapState MEPFOEEGBEA; // 0x1C
	::System::Int32 MNMHMECGDAK; // 0x20
	::System::Single LBGDJBJHIEJ; // 0x24
	::System::Boolean INNLLCMIDFK; // 0x28
	::System::Int32 HECLPDOELBK; // 0x2C
	::Il2CppArray<::Struct_2_C6C48BB44B10E8A0>* NHCACHLGEBF; // 0x30

	::RPG::Client::LittleGame::FiveDim::SpikeTrapState Method_2_A76D2F9A9727F703(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::FiveDim::SpikeTrapState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC27E6E9012E854_METHOD_2_A76D2F9A9727F703_OFFSET))(this, a1);
	}

	::System::Void Method_2_697A1F9A2C6384B4(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + STRUCT_2_BAC27E6E9012E854_METHOD_2_697A1F9A2C6384B4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_9FE4AB7E2BDAE9CB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC27E6E9012E854_METHOD_2_9FE4AB7E2BDAE9CB_OFFSET))(this, a1);
	}

	::System::Single Method_2_9C62E4C152B20715(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC27E6E9012E854_METHOD_2_9C62E4C152B20715_OFFSET))(this, a1);
	}
};
