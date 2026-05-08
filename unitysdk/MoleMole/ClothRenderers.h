#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CLOTHRENDERERS__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF34C0)

namespace MoleMole
{
	inline static constexpr unsigned int ClothRenderers_TypeDefinitionIndex = 44184;

	class ClothRenderers : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHRENDERERS__CTOR_OFFSET))(this);
		}
	};
}
