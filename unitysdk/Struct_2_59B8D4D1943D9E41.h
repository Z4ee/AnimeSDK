#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define STRUCT_2_59B8D4D1943D9E41_METHOD_2_369DD16C5A3A7549_OFFSET UNITYSDK_OFFSET(0x15DFD0A0)

inline static constexpr unsigned int Struct_2_59B8D4D1943D9E41_TypeDefinitionIndex = 44279;

struct alignas(8) Struct_2_59B8D4D1943D9E41
{
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::HollowChessboard::MatPropertyData*>* Field_2_0; // 0x10

	static ::System::Void Method_2_369DD16C5A3A7549(::UnityEngine::Material* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::MatPropertyData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::MoleMole::HollowChessboard::MatPropertyData*))((::PBYTE)hIl2Cpp + STRUCT_2_59B8D4D1943D9E41_METHOD_2_369DD16C5A3A7549_OFFSET))(a1, a2, a3);
	}
};
