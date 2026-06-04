#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_82D1CF7388B55201_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1387A8C0)
#define CLASS_1_82D1CF7388B55201_METHOD_1_90E798C7C6C23CB2_OFFSET UNITYSDK_OFFSET(0x1387A7F0)
#define CLASS_1_82D1CF7388B55201__CTOR_OFFSET UNITYSDK_OFFSET(0x1387AAF0)

inline static constexpr unsigned int Class_1_82D1CF7388B55201_TypeDefinitionIndex = 70408;

class Class_1_82D1CF7388B55201 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_2; // 0x20
	::RPG::MVector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82D1CF7388B55201__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90E798C7C6C23CB2(::RPG::Client::AttachPointMapping* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_82D1CF7388B55201_METHOD_1_90E798C7C6C23CB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82D1CF7388B55201_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}
};
