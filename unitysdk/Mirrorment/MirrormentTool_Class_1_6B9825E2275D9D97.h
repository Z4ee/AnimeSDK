#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC3060)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_6B9825E2275D9D97_TypeDefinitionIndex = 48228;

	class MirrormentTool_Class_1_6B9825E2275D9D97 : public ::System::Object
	{
	public:
		::System::Single GCPECCHMLCJ; // 0x10
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x14
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x20
		::System::Single LENCOMGPHJE; // 0x2C
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x30
		::RPG::Client::Prop::OpticalIllusionPlane AMOEOFBNMCJ; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET))(this);
		}
	};
}
