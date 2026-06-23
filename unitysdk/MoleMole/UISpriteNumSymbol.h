#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4D6240DD85F617A.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISPRITENUMSYMBOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x157A4520)
#define MOLEMOLE_UISPRITENUMSYMBOL_SETSYMBOL_OFFSET UNITYSDK_OFFSET(0x157A4720)
#define MOLEMOLE_UISPRITENUMSYMBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x157A4BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISpriteNumSymbol_TypeDefinitionIndex = 78601;

	class UISpriteNumSymbol : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* SymbolRoot; // 0x18
		::UnityEngine::GameObject* SymbolAdd; // 0x20
		::UnityEngine::GameObject* SymbolMul; // 0x28
		::UnityEngine::GameObject* SymbolSub; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_B4D6240DD85F617A, ::UnityEngine::GameObject*>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPRITENUMSYMBOL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPRITENUMSYMBOL_AWAKE_OFFSET))(this);
		}

		::System::Void SetSymbol(::Enum_3_B4D6240DD85F617A a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B4D6240DD85F617A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPRITENUMSYMBOL_SETSYMBOL_OFFSET))(this, a1);
		}
	};
}
