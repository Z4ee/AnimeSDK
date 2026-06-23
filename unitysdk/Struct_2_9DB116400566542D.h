#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F39C9440AA049134_Class_1_C8FA2781E175F1FA_Enum_3_430A52B4871F4E24.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5F5D92B486077EA8;
class ZzzUiCurveGraphic_CurveSegment;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define STRUCT_2_9DB116400566542D_METHOD_2_9975E5A98C0865D1_OFFSET UNITYSDK_OFFSET(0x812BC0)
#define STRUCT_2_9DB116400566542D__CTOR_OFFSET UNITYSDK_OFFSET(0x812BB0)

inline static constexpr unsigned int Struct_2_9DB116400566542D_TypeDefinitionIndex = 78754;

struct alignas(8) Struct_2_9DB116400566542D
{
	// static const ::System::Single Field_2_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_1_F39C9440AA049134_Class_1_C8FA2781E175F1FA_Enum_3_430A52B4871F4E24, ::Class_1_5F5D92B486077EA8*>* Field_2_0; // 0x10
	::UnityEngine::RectTransform* Field_2_2; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + STRUCT_2_9DB116400566542D__CTOR_OFFSET))(this, a1);
	}

	/*
	::ZzzUiCurveGraphic_CurveSegment* Method_2_9975E5A98C0865D1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::ZzzUiCurveGraphic_CurveSegment*(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_9DB116400566542D_METHOD_2_9975E5A98C0865D1_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
