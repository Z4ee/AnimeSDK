#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCameraFollowBehavior___O_TypeDefinitionIndex = 70311;

	class VirtualCameraFollowBehavior___O : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera** StaticGet__0___PostUpdateVcCamera()
		{
			return (::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera**)Il2CppClass::FromTypeDefinitionIndex(VirtualCameraFollowBehavior___O_TypeDefinitionIndex)->GetStaticField(0x64B30);
		}
	};
}
