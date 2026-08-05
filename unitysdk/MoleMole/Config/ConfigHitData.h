#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/RetreatDecayDistanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigMovementStateControl; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C40BC0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3F890)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C40C20)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3F910)
#define MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C41070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitData_TypeDefinitionIndex = 84130;

	class ConfigHitData : public ::System::Object
	{
	public:
		::System::String* AttackerCenterAttachPoint; // 0x10
		::System::String* CustomCurveKey; // 0x18
		::UnityEngine::AnimationCurve* CurveX; // 0x20
		::System::String* AttackeeCenterAttachPoint; // 0x28
		::UnityEngine::AnimationCurve* CurveZ; // 0x30
		::UnityEngine::AnimationCurve* CurveY; // 0x38
		::MoleMole::Config::ConfigMovementStateControl* MovementControl; // 0x40
		::System::Single Duration; // 0x48
		::MoleMole::Config::DissipationMode DissipationMode; // 0x4C
		::UnityEngine::Vector3 Velocity; // 0x50
		::System::Single ImpactRadius; // 0x5C
		::System::Single DissipationDistance; // 0x60
		::MoleMole::Config::RetreatDecayDistanceType DistanceType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
