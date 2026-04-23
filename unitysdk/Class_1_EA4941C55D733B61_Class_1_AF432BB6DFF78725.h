#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define CLASS_1_EA4941C55D733B61_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET UNITYSDK_OFFSET(0x9620650)

inline static constexpr unsigned int Class_1_EA4941C55D733B61_Class_1_AF432BB6DFF78725_TypeDefinitionIndex = 70524;

class Class_1_EA4941C55D733B61_Class_1_AF432BB6DFF78725 : public ::System::Object
{
public:
	::RPG::Client::TriggerEffectParams* Field_1_4; // 0x10
	::RPG::Client::MonoEffect* Field_1_5; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_1; // 0x28
	::UnityEngine::Vector3 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4941C55D733B61_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET))(this);
	}
};
