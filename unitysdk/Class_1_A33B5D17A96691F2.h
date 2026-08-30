#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_A33B5D17A96691F2_METHOD_1_C42D048CAA739CB1_OFFSET UNITYSDK_OFFSET(0x163B3770)
#define CLASS_1_A33B5D17A96691F2__CTOR_OFFSET UNITYSDK_OFFSET(0x163B3800)

inline static constexpr unsigned int Class_1_A33B5D17A96691F2_TypeDefinitionIndex = 71827;

class Class_1_A33B5D17A96691F2 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* DAGCPBPCOFE; // 0x10
	::UnityEngine::UI::Text* KBEPAIAFLHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A33B5D17A96691F2__CTOR_OFFSET))(this);
	}

	static ::Class_1_A33B5D17A96691F2* Method_1_C42D048CAA739CB1(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::Text* a2)
	{
		return ((::Class_1_A33B5D17A96691F2*(*)(::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_A33B5D17A96691F2_METHOD_1_C42D048CAA739CB1_OFFSET))(a1, a2);
	}
};
