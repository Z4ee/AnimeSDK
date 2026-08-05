#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUISTYLECOLORCONFIG_TRGGETCOLOR_OFFSET UNITYSDK_OFFSET(0x11D59920)
#define MOLEMOLE_MONOUISTYLECOLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D59A00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIStyleColorConfig_TypeDefinitionIndex = 77013;

	class MonoUIStyleColorConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Color Default; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* StyleColor; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISTYLECOLORCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color TrgGetColor(::System::Int32 style)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISTYLECOLORCONFIG_TRGGETCOLOR_OFFSET))(this, style);
		}
	};
}
