#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_TOOLKIT_CGTOOLKIT_BLACKBARCOMP_ONGUI_OFFSET UNITYSDK_OFFSET(0x144BA210)
#define MIHOYO_TOOLKIT_CGTOOLKIT_BLACKBARCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x144BA250)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int BlackBarComp_TypeDefinitionIndex = 44535;

	class BlackBarComp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single barSize; // 0x18
		::UnityEngine::Color barColor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BLACKBARCOMP__CTOR_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BLACKBARCOMP_ONGUI_OFFSET))(this);
		}
	};
}
