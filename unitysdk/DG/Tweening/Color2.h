#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define DG_TWEENING_COLOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1FBE5780)
#define DG_TWEENING_COLOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FBE57E0)
#define DG_TWEENING_COLOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1FBE57B0)
#define DG_TWEENING_COLOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x37FFE0)

namespace DG::Tweening
{
	inline static constexpr unsigned int Color2_TypeDefinitionIndex = 28435;

	struct alignas(4) Color2
	{
		::UnityEngine::Color ca; // 0x10
		::UnityEngine::Color cb; // 0x20

		::System::Void _ctor(::UnityEngine::Color ca, ::UnityEngine::Color cb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_COLOR2__CTOR_OFFSET))(this, ca, cb);
		}

		static ::DG::Tweening::Color2 op_Addition(::DG::Tweening::Color2 c1, ::DG::Tweening::Color2 c2)
		{
			return ((::DG::Tweening::Color2(*)(::DG::Tweening::Color2, ::DG::Tweening::Color2))((::PBYTE)hIl2Cpp + DG_TWEENING_COLOR2_OP_ADDITION_OFFSET))(c1, c2);
		}

		static ::DG::Tweening::Color2 op_Subtraction(::DG::Tweening::Color2 c1, ::DG::Tweening::Color2 c2)
		{
			return ((::DG::Tweening::Color2(*)(::DG::Tweening::Color2, ::DG::Tweening::Color2))((::PBYTE)hIl2Cpp + DG_TWEENING_COLOR2_OP_SUBTRACTION_OFFSET))(c1, c2);
		}

		static ::DG::Tweening::Color2 op_Multiply(::DG::Tweening::Color2 c1, ::System::Single f)
		{
			return ((::DG::Tweening::Color2(*)(::DG::Tweening::Color2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_COLOR2_OP_MULTIPLY_OFFSET))(c1, f);
		}
	};
}
