#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion { class BipedLimbOrientations_LimbOrientation; }

#define ROOTMOTION_BIPEDLIMBORIENTATIONS_GET_MAXBIPED_OFFSET UNITYSDK_OFFSET(0x1F130AE0)
#define ROOTMOTION_BIPEDLIMBORIENTATIONS_GET_UMA_OFFSET UNITYSDK_OFFSET(0x1F130870)
#define ROOTMOTION_BIPEDLIMBORIENTATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F130850)

namespace RootMotion
{
	inline static constexpr unsigned int BipedLimbOrientations_TypeDefinitionIndex = 38956;

	class BipedLimbOrientations : public ::System::Object
	{
	public:
		::RootMotion::BipedLimbOrientations_LimbOrientation* leftArm; // 0x10
		::RootMotion::BipedLimbOrientations_LimbOrientation* rightArm; // 0x18
		::RootMotion::BipedLimbOrientations_LimbOrientation* leftLeg; // 0x20
		::RootMotion::BipedLimbOrientations_LimbOrientation* rightLeg; // 0x28

		::System::Void _ctor(::RootMotion::BipedLimbOrientations_LimbOrientation* leftArm, ::RootMotion::BipedLimbOrientations_LimbOrientation* rightArm, ::RootMotion::BipedLimbOrientations_LimbOrientation* leftLeg, ::RootMotion::BipedLimbOrientations_LimbOrientation* rightLeg)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedLimbOrientations_LimbOrientation*, ::RootMotion::BipedLimbOrientations_LimbOrientation*, ::RootMotion::BipedLimbOrientations_LimbOrientation*, ::RootMotion::BipedLimbOrientations_LimbOrientation*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDLIMBORIENTATIONS__CTOR_OFFSET))(this, leftArm, rightArm, leftLeg, rightLeg);
		}

		static ::RootMotion::BipedLimbOrientations* get_UMA()
		{
			return ((::RootMotion::BipedLimbOrientations*(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDLIMBORIENTATIONS_GET_UMA_OFFSET))();
		}

		static ::RootMotion::BipedLimbOrientations* get_MaxBiped()
		{
			return ((::RootMotion::BipedLimbOrientations*(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDLIMBORIENTATIONS_GET_MAXBIPED_OFFSET))();
		}
	};
}
