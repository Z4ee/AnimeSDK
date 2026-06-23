#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_688F44EEB4FF6017.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }

#define STRUCT_2_25F7E31FCD8D52C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6B3780)
#define STRUCT_2_25F7E31FCD8D52C3_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3EA930)
#define STRUCT_2_25F7E31FCD8D52C3_METHOD_2_3105EAD418A897C1_OFFSET UNITYSDK_OFFSET(0x6B38C0)
#define STRUCT_2_25F7E31FCD8D52C3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B37C0)
#define STRUCT_2_25F7E31FCD8D52C3_RESET_OFFSET UNITYSDK_OFFSET(0x6B37D0)
#define STRUCT_2_25F7E31FCD8D52C3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6B3830)
#define STRUCT_2_25F7E31FCD8D52C3__CTOR_OFFSET UNITYSDK_OFFSET(0x6B3750)

inline static constexpr unsigned int Struct_2_25F7E31FCD8D52C3_TypeDefinitionIndex = 52412;

struct alignas(4) Struct_2_25F7E31FCD8D52C3
{
	::Enum_3_688F44EEB4FF6017 Field_2_0; // 0x10
	::MoleMole::HollowChessboard::ChessboardView::LineInfo Field_2_1; // 0x14
	::UnityEngine::Vector3Int Field_2_2; // 0x2C
	::System::Int32 Field_2_3; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3Int a1, ::Enum_3_688F44EEB4FF6017 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Enum_3_688F44EEB4FF6017))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_RESET_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::ChessboardView::LineInfo get_Current()
	{
		return ((::MoleMole::HollowChessboard::ChessboardView::LineInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_2_3105EAD418A897C1(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo))((::PBYTE)hIl2Cpp + STRUCT_2_25F7E31FCD8D52C3_METHOD_2_3105EAD418A897C1_OFFSET))(this, a1);
	}
};
