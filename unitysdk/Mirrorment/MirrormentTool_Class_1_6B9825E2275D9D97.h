#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET UNITYSDK_OFFSET(0x88BC610)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_6B9825E2275D9D97_TypeDefinitionIndex = 38647;

	class MirrormentTool_Class_1_6B9825E2275D9D97 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPlane Field_1_0; // 0x10
		::UnityEngine::Vector3 Field_1_5; // 0x14
		::UnityEngine::Quaternion Field_1_2; // 0x20
		::System::Single Field_1_3; // 0x30
		::System::Single Field_1_4; // 0x34
		::UnityEngine::Vector3 Field_1_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET))(this);
		}
	};
}
