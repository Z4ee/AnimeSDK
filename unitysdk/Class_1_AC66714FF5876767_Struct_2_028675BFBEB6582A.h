#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_AC66714FF5876767_STRUCT_2_028675BFBEB6582A__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0A4A60)
#define CLASS_1_AC66714FF5876767_STRUCT_2_028675BFBEB6582A__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB60)

inline static constexpr unsigned int Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A_TypeDefinitionIndex = 54551;

struct alignas(8) Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A
{
	static ::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A* StaticGet_OJPLDOMGBHI()
	{
		return (::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A_TypeDefinitionIndex)->GetStaticField(0x7AB0);
	}
	::RPG::GameCore::FixPoint MNAKIEOGPDK; // 0x10
	::System::Int32 GNPIMBBICED; // 0x18

	::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_STRUCT_2_028675BFBEB6582A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_STRUCT_2_028675BFBEB6582A__CCTOR_OFFSET))();
	}
};
