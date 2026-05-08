#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter_FitMode.h"

#define MOLEMOLE_SCALEDCONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1236AC20)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER_SETSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1236AC80)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1236ACE0)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER___BASE_GETSIZEALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1236AD40)

namespace MoleMole
{
	inline static constexpr unsigned int ScaledContentSizeFitter_TypeDefinitionIndex = 45313;

	class ScaledContentSizeFitter : public ::UnityEngine::UI::ContentSizeFitter
	{
	public:
		::System::Single ScaleFactor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER__CTOR_OFFSET))(this);
		}

		::System::Single GetSizeAlongAxis(::System::Int32 a1, ::UnityEngine::UI::ContentSizeFitter_FitMode a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void SetScaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER_SETSCALEFACTOR_OFFSET))(this, a1);
		}

		::System::Single __base_GetSizeAlongAxis(::System::Int32 a1, ::UnityEngine::UI::ContentSizeFitter_FitMode a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER___BASE_GETSIZEALONGAXIS_OFFSET))(this, a1, a2);
		}
	};
}
