#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070_METHOD_2_2E15B467B2D31A5E_OFFSET UNITYSDK_OFFSET(0x7522E0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070__CTOR_OFFSET UNITYSDK_OFFSET(0x752280)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070_TypeDefinitionIndex = 59165;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070
{
	::Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500 Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_0114679E2864BD47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_2E15B467B2D31A5E()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070_METHOD_2_2E15B467B2D31A5E_OFFSET))(this);
	}
};
