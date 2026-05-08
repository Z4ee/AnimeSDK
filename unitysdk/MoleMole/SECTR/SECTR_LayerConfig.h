#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73954AF3A8FEBBA4.h"
#include "unitysdk/MoleMole/SECTR/SECTR_LayerSizeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_SECTR_SECTR_LAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAF440)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_LayerConfig_TypeDefinitionIndex = 76769;

	class SECTR_LayerConfig : public ::System::Object
	{
	public:
		::System::Int32 sortOrder; // 0x10
		::System::String* layerName; // 0x18
		::MoleMole::SECTR::SECTR_LayerSizeType sectorSize; // 0x20
		::MoleMole::SECTR::SECTR_LayerSizeType sectorHeight; // 0x24
		::System::Int32 loadSize; // 0x28
		::System::Int32 loadHeight; // 0x2C
		::Enum_3_73954AF3A8FEBBA4 type; // 0x30
		::System::Single hlodDistance; // 0x34
		::UnityEngine::Vector2 objSize; // 0x38
		::System::Boolean isPersistence; // 0x40
		::System::Boolean collapsed; // 0x41
		::UnityEngine::Color color; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_LAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
