#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_4BB55856E9E5F404_OFFSET UNITYSDK_OFFSET(0x803970)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_B73CDCBF771B2B3A_OFFSET UNITYSDK_OFFSET(0x8039D0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_D048B4CDF312FE37_OFFSET UNITYSDK_OFFSET(0x15946BB0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26__CTOR_OFFSET UNITYSDK_OFFSET(0x8037F0)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_B0BD5565DDA86C26_TypeDefinitionIndex = 69761;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_B0BD5565DDA86C26
{
	::Class_2_0114679E2864BD47* Field_2_0; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x28
	::Nap::NapECS::ComponentMask Field_2_4; // 0x30
	::Nap::NapECS::ComponentMask Field_2_5; // 0x70
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_6; // 0xB0
	::System::Boolean Field_2_7; // 0xB8

	::System::Void _ctor(::Class_2_0114679E2864BD47* a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0114679E2864BD47*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_5DF9D0F5061CCF34_Struct_2_B0BD5565DDA86C26 Method_2_D048B4CDF312FE37(::Class_2_0114679E2864BD47* a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::Class_1_5DF9D0F5061CCF34_Struct_2_B0BD5565DDA86C26(*)(::Class_2_0114679E2864BD47*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_D048B4CDF312FE37_OFFSET))(a1, a2);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_4BB55856E9E5F404()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_4BB55856E9E5F404_OFFSET))(this);
	}

	::System::Void Method_2_B73CDCBF771B2B3A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_B0BD5565DDA86C26_METHOD_2_B73CDCBF771B2B3A_OFFSET))(this);
	}
};
