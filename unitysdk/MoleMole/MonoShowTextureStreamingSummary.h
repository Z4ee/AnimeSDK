#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HUMANREADABLESIZE_OFFSET UNITYSDK_OFFSET(0x1514BC20)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_METHOD_5_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1514BEB0)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_ONGUI_OFFSET UNITYSDK_OFFSET(0x1514BD10)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_START_OFFSET UNITYSDK_OFFSET(0x1514BBD0)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1514BFB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShowTextureStreamingSummary_TypeDefinitionIndex = 66134;

	class MonoShowTextureStreamingSummary : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single X; // 0x18
		::System::Single Y; // 0x1C
		::System::Int32 MemoryBudgetPercentThreshold; // 0x20
		::System::Int32 TextureStreamingPercentThreshold; // 0x24
		::System::UInt64 Field_5_4; // 0x28
		::UnityEngine::Rect Field_5_5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_START_OFFSET))(this);
		}

		::System::String* HumanReadableSize(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HUMANREADABLESIZE_OFFSET))(this, a1);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_ONGUI_OFFSET))(this);
		}

		::System::Void Method_5_EBF44BC910948FDA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_METHOD_5_EBF44BC910948FDA_OFFSET))(this, a1);
		}
	};
}
