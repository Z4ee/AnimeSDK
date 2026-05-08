#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500_METHOD_2_6AAB3D4DBB3B0A06_OFFSET UNITYSDK_OFFSET(0x6E40A0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500_METHOD_2_7DB9846DFCAE1880_OFFSET UNITYSDK_OFFSET(0x100EFF30)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500__CTOR_OFFSET UNITYSDK_OFFSET(0x6E4090)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500_TypeDefinitionIndex = 59164;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500
{
	::Class_2_0114679E2864BD47* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_2; // 0x20
	::Nap::NapECS::ComponentMask Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x68

	::System::Void _ctor(::Class_2_0114679E2864BD47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500 Method_2_7DB9846DFCAE1880(::Class_2_0114679E2864BD47* a1)
	{
		return ((::Class_1_5DF9D0F5061CCF34_Struct_2_0B777F418FB34500(*)(::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500_METHOD_2_7DB9846DFCAE1880_OFFSET))(a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_6AAB3D4DBB3B0A06()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_0B777F418FB34500_METHOD_2_6AAB3D4DBB3B0A06_OFFSET))(this);
	}
};
