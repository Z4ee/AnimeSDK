#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define CLASS_1_DB1CA1392BE6F152_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET UNITYSDK_OFFSET(0x10B93F70)

inline static constexpr unsigned int Class_1_DB1CA1392BE6F152_Class_1_AF432BB6DFF78725_TypeDefinitionIndex = 62513;

class Class_1_DB1CA1392BE6F152_Class_1_AF432BB6DFF78725 : public ::System::Object
{
public:
	::RPG::Client::TriggerEffectParams* Field_1_4; // 0x10
	::RPG::Client::MonoEffect* Field_1_5; // 0x18
	::System::Single Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x24
	::UnityEngine::Vector3 Field_1_0; // 0x30
	::System::Single Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET))(this);
	}
};
