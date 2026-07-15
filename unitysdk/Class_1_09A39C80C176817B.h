#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_09A39C80C176817B_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B8D8A0)
#define CLASS_1_09A39C80C176817B_METHOD_1_2B32279AD66917FA_OFFSET UNITYSDK_OFFSET(0x18B8D930)
#define CLASS_1_09A39C80C176817B_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x18B8DAF0)
#define CLASS_1_09A39C80C176817B__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8DC40)

inline static constexpr unsigned int Class_1_09A39C80C176817B_TypeDefinitionIndex = 65788;

class Class_1_09A39C80C176817B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::UnityEngine::Quaternion Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x38
	::UnityEngine::Quaternion Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A39C80C176817B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A39C80C176817B_CLEAR_OFFSET))(this);
	}

	static ::Class_1_09A39C80C176817B* Method_1_2B32279AD66917FA(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_1_09A39C80C176817B*(*)(::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_09A39C80C176817B_METHOD_1_2B32279AD66917FA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09A39C80C176817B_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}
};
