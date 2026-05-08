#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9A7910)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE_OFFSET_OFFSET UNITYSDK_OFFSET(0x9A79E0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A550)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_AimLocalCoordinate_TypeDefinitionIndex = 36686;

	struct alignas(4) AimController_AimLocalCoordinate
	{
		static ::RootMotion::FinalIK::AimController_AimLocalCoordinate* StaticGet_Identity()
		{
			return (::RootMotion::FinalIK::AimController_AimLocalCoordinate*)Il2CppClass::FromTypeDefinitionIndex(AimController_AimLocalCoordinate_TypeDefinitionIndex)->GetStaticField(0x8900);
		}
		::UnityEngine::Vector3 Origin; // 0x10
		::UnityEngine::Vector3 Up; // 0x1C
		::UnityEngine::Vector3 Forward; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 Offset(::UnityEngine::Vector3& offset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_AIMLOCALCOORDINATE_OFFSET_OFFSET))(this, offset);
		}
	};
}
