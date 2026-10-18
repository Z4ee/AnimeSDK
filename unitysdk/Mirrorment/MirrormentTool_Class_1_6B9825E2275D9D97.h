#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4CCC0)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_6B9825E2275D9D97_TypeDefinitionIndex = 47769;

	class MirrormentTool_Class_1_6B9825E2275D9D97 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x1C
		::RPG::Client::Prop::OpticalIllusionPlane AMOEOFBNMCJ; // 0x2C
		::System::Single LENCOMGPHJE; // 0x30
		::System::Single GCPECCHMLCJ; // 0x34
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET))(this);
		}
	};
}
