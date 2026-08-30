#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class FreeStyleState; }
namespace System { class String; }

#define CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE6B20)
#define CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3AE6B30)
#define CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE6B00)

inline static constexpr unsigned int Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5_TypeDefinitionIndex = 57437;

struct alignas(8) Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5
{
	::System::Boolean EPAOGCJLFHJ; // 0x10
	::System::Int32 NOIIIOKMIIN; // 0x14
	::Il2CppArray<::System::UInt32>* ADACNDMHECC; // 0x18
	::RPG::GameCore::FreeStyleState* LFHLPEJAMLE; // 0x20

	::System::Void _ctor(::RPG::GameCore::FreeStyleState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleState*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_STRUCT_2_25A926960008E2A5__CTOR_2_OFFSET))(this, a1, a2);
	}
};
