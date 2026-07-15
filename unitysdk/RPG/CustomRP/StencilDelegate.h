#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_STENCILDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1351C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int StencilDelegate_TypeDefinitionIndex = 36156;

	class StencilDelegate : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MeshStencilTrans; // 0x10
		::UnityEngine::Mesh* StencilMask; // 0x18
		::System::Int32 SubMeshIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_STENCILDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
