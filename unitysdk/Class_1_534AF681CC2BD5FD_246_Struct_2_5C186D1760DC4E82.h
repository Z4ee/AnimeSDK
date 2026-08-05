#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_246_STRUCT_2_5C186D1760DC4E82_METHOD_2_6DC0C92961AF58FA_OFFSET UNITYSDK_OFFSET(0xFFBA980)
#define CLASS_1_534AF681CC2BD5FD_246_STRUCT_2_5C186D1760DC4E82_METHOD_2_83BC4ABA251FF5B2_OFFSET UNITYSDK_OFFSET(0x698AC0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_246_Struct_2_5C186D1760DC4E82_TypeDefinitionIndex = 76181;

struct alignas(8) Class_1_534AF681CC2BD5FD_246_Struct_2_5C186D1760DC4E82
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_0; // 0x10
	::Class_2_0114679E2864BD47* Field_2_7; // 0x18

	static ::Class_1_534AF681CC2BD5FD_246_Struct_2_5C186D1760DC4E82 Method_2_6DC0C92961AF58FA(::Class_2_0114679E2864BD47* a1)
	{
		return ((::Class_1_534AF681CC2BD5FD_246_Struct_2_5C186D1760DC4E82(*)(::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_246_STRUCT_2_5C186D1760DC4E82_METHOD_2_6DC0C92961AF58FA_OFFSET))(a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_83BC4ABA251FF5B2()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_246_STRUCT_2_5C186D1760DC4E82_METHOD_2_83BC4ABA251FF5B2_OFFSET))(this);
	}
};
