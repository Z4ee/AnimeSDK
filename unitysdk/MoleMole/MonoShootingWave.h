#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_MONOSHOOTINGWAVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17DD7E00)
#define MOLEMOLE_MONOSHOOTINGWAVE_METHOD_5_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x17DD81D0)
#define MOLEMOLE_MONOSHOOTINGWAVE_METHOD_5_D17B49CABC597E3E_OFFSET UNITYSDK_OFFSET(0x17DD80F0)
#define MOLEMOLE_MONOSHOOTINGWAVE_SETTOTALWAVE_OFFSET UNITYSDK_OFFSET(0x17DD7E70)
#define MOLEMOLE_MONOSHOOTINGWAVE_STARTNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x17DD7F40)
#define MOLEMOLE_MONOSHOOTINGWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD8180)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShootingWave_TypeDefinitionIndex = 62457;

	class MonoShootingWave : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* progressBar; // 0x18
		::UnityEngine::UI::TextItalicAdobeStyle* current; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* total; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::UnityEngine::Coroutine* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetTotalWave(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_SETTOTALWAVE_OFFSET))(this, a1);
		}

		::System::Void StartNextWave(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_STARTNEXTWAVE_OFFSET))(this, a1);
		}

		::System::Void Method_5_4155E433CDAD6311(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_METHOD_5_4155E433CDAD6311_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_D17B49CABC597E3E(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_METHOD_5_D17B49CABC597E3E_OFFSET))(this, a1);
		}
	};
}
