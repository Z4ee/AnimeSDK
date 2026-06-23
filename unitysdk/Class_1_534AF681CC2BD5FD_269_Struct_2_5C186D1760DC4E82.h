#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_269_STRUCT_2_5C186D1760DC4E82_METHOD_2_6DC0C92961AF58FA_OFFSET UNITYSDK_OFFSET(0x179C9670)
#define CLASS_1_534AF681CC2BD5FD_269_STRUCT_2_5C186D1760DC4E82_METHOD_2_D9D4677018E3D92B_OFFSET UNITYSDK_OFFSET(0x831A60)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_269_Struct_2_5C186D1760DC4E82_TypeDefinitionIndex = 48054;

struct alignas(8) Class_1_534AF681CC2BD5FD_269_Struct_2_5C186D1760DC4E82
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_0; // 0x10
	::Class_2_0114679E2864BD47* Field_2_1; // 0x18

	::MoleMole::HollowChessboard::HollowEntity* Method_2_D9D4677018E3D92B()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_STRUCT_2_5C186D1760DC4E82_METHOD_2_D9D4677018E3D92B_OFFSET))(this);
	}

	static ::Class_1_534AF681CC2BD5FD_269_Struct_2_5C186D1760DC4E82 Method_2_6DC0C92961AF58FA(::Class_2_0114679E2864BD47* a1)
	{
		return ((::Class_1_534AF681CC2BD5FD_269_Struct_2_5C186D1760DC4E82(*)(::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_STRUCT_2_5C186D1760DC4E82_METHOD_2_6DC0C92961AF58FA_OFFSET))(a1);
	}
};
