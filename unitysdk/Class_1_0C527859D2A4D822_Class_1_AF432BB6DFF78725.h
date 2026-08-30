#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define CLASS_1_0C527859D2A4D822_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET UNITYSDK_OFFSET(0xFA6B9A0)

inline static constexpr unsigned int Class_1_0C527859D2A4D822_Class_1_AF432BB6DFF78725_TypeDefinitionIndex = 76332;

class Class_1_0C527859D2A4D822_Class_1_AF432BB6DFF78725 : public ::System::Object
{
public:
	::RPG::Client::TriggerEffectParams* FAONLIKGAHH; // 0x10
	::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x18
	::System::Single BJACAEGKOLO; // 0x20
	::System::Single DNNGHLHHFKB; // 0x24
	::UnityEngine::Vector3 OAKCBDDKNKL; // 0x28
	::UnityEngine::Vector3 PGJJCGGBCKK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_AF432BB6DFF78725__CTOR_OFFSET))(this);
	}
};
