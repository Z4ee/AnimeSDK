#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET UNITYSDK_OFFSET(0xA84DB40)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_6B9825E2275D9D97_TypeDefinitionIndex = 45086;

	class MirrormentTool_Class_1_6B9825E2275D9D97 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Field_1_0; // 0x10
		::RPG::Client::Prop::OpticalIllusionPlane Field_1_1; // 0x1C
		::UnityEngine::Vector3 Field_1_2; // 0x20
		::System::Single Field_1_3; // 0x2C
		::UnityEngine::Quaternion Field_1_4; // 0x30
		::System::Single Field_1_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_6B9825E2275D9D97__CTOR_OFFSET))(this);
		}
	};
}
