#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_CAMERAROTATESCOPESHADERTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x9C0AFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ModelUI3DModeConstraint_CameraRotateScopeShaderTransition_TypeDefinitionIndex = 55940;

	class ModelUI3DModeConstraint_CameraRotateScopeShaderTransition : public ::System::Object
	{
	public:
		::System::Single StartYaw; // 0x10
		::System::Single EndYaw; // 0x14
		::System::Single AlphaTransition; // 0x18
		::System::Single TransitionDuration; // 0x1C
		::System::String* PointName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_CAMERAROTATESCOPESHADERTRANSITION__CTOR_OFFSET))(this);
		}
	};
}
