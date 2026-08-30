#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_MONOLINERENDERERWIDTHSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD843CA0)
#define RPG_CLIENT_MONOLINERENDERERWIDTHSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD843B50)
#define RPG_CLIENT_MONOLINERENDERERWIDTHSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD843D80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLineRendererWidthSetter_TypeDefinitionIndex = 71017;

	class MonoLineRendererWidthSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single startWidth; // 0x18
		::System::Single endWidth; // 0x1C
		::System::Single widthMultiply; // 0x20
		::System::Single outlineMultiply; // 0x24
		::UnityEngine::LineRenderer* AGPKOCFLNMJ; // 0x28
		::UnityEngine::LineRenderer* GLACMPLALMM; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLINERENDERERWIDTHSETTER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLINERENDERERWIDTHSETTER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLINERENDERERWIDTHSETTER_LATEUPDATE_OFFSET))(this);
		}
	};
}
