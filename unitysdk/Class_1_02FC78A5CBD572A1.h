#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_146B801758087363.h"
#include "unitysdk/Struct_2_B850E47831238E71.h"
#include "unitysdk/Struct_2_D8F88283138BF2F0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0A48C0117A1B22E8;
namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define CLASS_1_02FC78A5CBD572A1_METHOD_1_25F93AC3DD23C2B8_OFFSET UNITYSDK_OFFSET(0x138E71D0)
#define CLASS_1_02FC78A5CBD572A1_METHOD_1_96AA53A308507478_OFFSET UNITYSDK_OFFSET(0x138E6760)
#define CLASS_1_02FC78A5CBD572A1_METHOD_1_E149795A86E80464_OFFSET UNITYSDK_OFFSET(0x138E7AD0)
#define CLASS_1_02FC78A5CBD572A1_METHOD_1_ECD9B0EC70186BA1_OFFSET UNITYSDK_OFFSET(0x138E7280)
#define CLASS_1_02FC78A5CBD572A1__CTOR_OFFSET UNITYSDK_OFFSET(0x138E6750)

inline static constexpr unsigned int Class_1_02FC78A5CBD572A1_TypeDefinitionIndex = 57831;

class Class_1_02FC78A5CBD572A1 : public ::System::Object
{
public:
	::Struct_2_146B801758087363 Field_1_2; // 0x10
	::Class_1_0A48C0117A1B22E8* Field_1_0; // 0x48
	::UnityEngine::Transform* Field_1_1; // 0x50
	::Struct_2_B850E47831238E71 Field_1_3; // 0x58
	::Struct_2_D8F88283138BF2F0 Field_1_4; // 0x80
	::UnityEngine::Quaternion Field_1_6; // 0xE8
	::UnityEngine::Vector2 Field_1_5; // 0xF8
	::UnityEngine::Quaternion Field_1_7; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FC78A5CBD572A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96AA53A308507478(::System::Single a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Quaternion& a4, ::UnityEngine::Camera* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_02FC78A5CBD572A1_METHOD_1_96AA53A308507478_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_25F93AC3DD23C2B8(::Class_1_0A48C0117A1B22E8* a1, ::UnityEngine::Light* a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::UnityEngine::Light*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_02FC78A5CBD572A1_METHOD_1_25F93AC3DD23C2B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ECD9B0EC70186BA1(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarLightSetting* a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_02FC78A5CBD572A1_METHOD_1_ECD9B0EC70186BA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E149795A86E80464(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarLightSetting* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_02FC78A5CBD572A1_METHOD_1_E149795A86E80464_OFFSET))(this, a1, a2, a3);
	}
};
