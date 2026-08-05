#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PerObjectShadowCullResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

class IPerObjectShadowEntity;

#define PEROBJECTSHADOWENTITYEXTENSION_SETBAKEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C4CBA90)
#define PEROBJECTSHADOWENTITYEXTENSION_SETCULLRESULT_OFFSET UNITYSDK_OFFSET(0x1C4CB850)

inline static constexpr unsigned int PerObjectShadowEntityExtension_TypeDefinitionIndex = 27049;

class PerObjectShadowEntityExtension : public ::System::Object
{
public:
	static ::System::Void SetCullResult(::IPerObjectShadowEntity* entity, ::PerObjectShadowCullResult cullResult)
	{
		return ((::System::Void(*)(::IPerObjectShadowEntity*, ::PerObjectShadowCullResult))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWENTITYEXTENSION_SETCULLRESULT_OFFSET))(entity, cullResult);
	}

	static ::System::Void SetBakedBounds(::IPerObjectShadowEntity* entity, ::System::Boolean useBakedBounds, ::UnityEngine::Bounds rootSpaceBounds)
	{
		return ((::System::Void(*)(::IPerObjectShadowEntity*, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWENTITYEXTENSION_SETBAKEDBOUNDS_OFFSET))(entity, useBakedBounds, rootSpaceBounds);
	}
};
