#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8ADBBC0)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_D0A7AC5663C34EC7_OFFSET UNITYSDK_OFFSET(0x8ADB490)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8ADC5E0)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7__CTOR_OFFSET UNITYSDK_OFFSET(0x8ADBF80)

inline static constexpr unsigned int Class_2_86A6044601A0FA5A_Class_1_64BE3B8CF3C8A3A7_TypeDefinitionIndex = 57148;

class Class_2_86A6044601A0FA5A_Class_1_64BE3B8CF3C8A3A7 : public ::System::Object
{
public:
	::UnityEngine::LineRenderer* Field_1_0; // 0x10
	::UnityEngine::Material* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::UnityEngine::Material* Field_1_4; // 0x28
	::UnityEngine::Transform* Field_1_1; // 0x30
	::RPG::Client::CharacterEffect* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3, ::UnityEngine::Transform* a4, ::RPG::Client::CharacterEffect* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*, ::UnityEngine::Transform*, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D0A7AC5663C34EC7(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_D0A7AC5663C34EC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_64BE3B8CF3C8A3A7_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
