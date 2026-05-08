#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_MAP3DFONTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x181D8CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Map3DFontItem_TypeDefinitionIndex = 47398;

	class Map3DFontItem : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 fontPosition; // 0x10
		::UnityEngine::Vector3 fontEuler; // 0x1C
		::System::String* fontContent; // 0x28
		::System::Single fontScale; // 0x30
		::System::Boolean useEnPrefab; // 0x34
		::UnityEngine::Color fontColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAP3DFONTITEM__CTOR_OFFSET))(this);
		}
	};
}
