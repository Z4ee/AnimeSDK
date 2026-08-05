#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_STAGEANCHORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD7620)

namespace MoleMole
{
	inline static constexpr unsigned int StageAnchorData_TypeDefinitionIndex = 76908;

	class StageAnchorData : public ::System::Object
	{
	public:
		::System::String* anchorName; // 0x10
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Quaternion rotation; // 0x24
		::UnityEngine::Vector3 scale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STAGEANCHORDATA__CTOR_OFFSET))(this);
		}
	};
}
