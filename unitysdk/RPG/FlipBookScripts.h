#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define RPG_FLIPBOOKSCRIPTS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB509570)
#define RPG_FLIPBOOKSCRIPTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB509450)
#define RPG_FLIPBOOKSCRIPTS_START_OFFSET UNITYSDK_OFFSET(0xB509380)
#define RPG_FLIPBOOKSCRIPTS_UPDATE_OFFSET UNITYSDK_OFFSET(0xB5094A0)
#define RPG_FLIPBOOKSCRIPTS__CTOR_OFFSET UNITYSDK_OFFSET(0xB5095C0)

namespace RPG
{
	inline static constexpr unsigned int FlipBookScripts_TypeDefinitionIndex = 47778;

	class FlipBookScripts : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* UVMoveMat; // 0x18
		::System::Single FlipNum; // 0x20
		::System::Single MaxNum; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLIPBOOKSCRIPTS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLIPBOOKSCRIPTS_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLIPBOOKSCRIPTS_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLIPBOOKSCRIPTS_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLIPBOOKSCRIPTS_ONDISABLE_OFFSET))(this);
		}
	};
}
