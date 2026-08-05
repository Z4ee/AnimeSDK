#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_CHECKUSELAZYLOADING_OFFSET UNITYSDK_OFFSET(0x805860)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x805850)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_ONTEXPATHCHANGE_OFFSET UNITYSDK_OFFSET(0x805900)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_TRYLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x8058F0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_WARMUP_OFFSET UNITYSDK_OFFSET(0x805940)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueTexture_TypeDefinitionIndex = 84699;

	struct alignas(8) MaterialPropertyModifierValueTexture
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::UnityEngine::Texture* _value; // 0x18
		::System::String* texPath; // 0x20
		::System::Boolean tillingEnable; // 0x28
		::UnityEngine::Vector2 tillingValue; // 0x2C
		::System::Boolean offsetEnable; // 0x34
		::UnityEngine::Vector2 offsetValue; // 0x38

		::UnityEngine::Texture* get_value()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean CheckUseLazyLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_CHECKUSELAZYLOADING_OFFSET))(this);
		}

		::System::Void TryLoadTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_TRYLOADTEXTURE_OFFSET))(this);
		}

		::System::Void OnTexPathChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_ONTEXPATHCHANGE_OFFSET))(this);
		}

		::System::Void WarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_WARMUP_OFFSET))(this);
		}
	};
}
