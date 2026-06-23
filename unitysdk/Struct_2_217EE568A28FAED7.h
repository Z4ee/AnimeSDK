#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_217EE568A28FAED7_METHOD_2_512ABA22325655A1_OFFSET UNITYSDK_OFFSET(0x246290)

inline static constexpr unsigned int Struct_2_217EE568A28FAED7_TypeDefinitionIndex = 81141;

struct alignas(8) Struct_2_217EE568A28FAED7
{
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_2_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_2; // 0x20

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Method_2_512ABA22325655A1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_217EE568A28FAED7_METHOD_2_512ABA22325655A1_OFFSET))(this);
	}
};
