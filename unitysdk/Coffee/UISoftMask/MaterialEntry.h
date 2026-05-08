#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define COFFEE_UISOFTMASK_MATERIALENTRY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C17F700)
#define COFFEE_UISOFTMASK_MATERIALENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17F390)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int MaterialEntry_TypeDefinitionIndex = 84925;

	class MaterialEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* material; // 0x10
		::System::Int32 referenceCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_MATERIALENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_MATERIALENTRY_RELEASE_OFFSET))(this);
		}
	};
}
