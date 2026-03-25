#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_BD800F5B29A08E1F_STRUCT_2_028675BFBEB6582A__CCTOR_OFFSET UNITYSDK_OFFSET(0xF36B6D0)
#define CLASS_1_BD800F5B29A08E1F_STRUCT_2_028675BFBEB6582A__CTOR_OFFSET UNITYSDK_OFFSET(0x852E0)

inline static constexpr unsigned int Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A_TypeDefinitionIndex = 43421;

struct alignas(8) Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A
{
	static ::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A* StaticGet_Field_2_2()
	{
		return (::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A_TypeDefinitionIndex)->GetStaticField(0x3FB0);
	}
	::RPG::GameCore::FixPoint Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_STRUCT_2_028675BFBEB6582A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_STRUCT_2_028675BFBEB6582A__CCTOR_OFFSET))();
	}
};
