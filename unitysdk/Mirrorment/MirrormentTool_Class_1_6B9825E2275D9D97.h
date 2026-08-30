#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET UNITYSDK_OFFSET(0x19C94410)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_6B9825E2275D9D97_TypeDefinitionIndex = 48228;

	class MirrormentTool_Class_1_6B9825E2275D9D97 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x10
		::System::Single GCPECCHMLCJ; // 0x1C
		::RPG::Client::Prop::OpticalIllusionPlane AMOEOFBNMCJ; // 0x20
		::System::Single LENCOMGPHJE; // 0x24
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x28
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET))(this);
		}
	};
}
