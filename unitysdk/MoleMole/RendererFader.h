#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_RENDERERFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19986F10)
#define MOLEMOLE_RENDERERFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19986F70)

namespace MoleMole
{
	inline static constexpr unsigned int RendererFader_TypeDefinitionIndex = 48607;

	class RendererFader : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Int32 rendererIndex; // 0x18
		::System::Int32 _propertyID; // 0x1C
		::System::Int32 rendererInstanceId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERERFADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERERFADER_DISPOSE_OFFSET))(this);
		}
	};
}
