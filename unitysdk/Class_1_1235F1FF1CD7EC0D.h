#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1235F1FF1CD7EC0D_METHOD_1_488FF87EC9925136_OFFSET UNITYSDK_OFFSET(0x1544F320)
#define CLASS_1_1235F1FF1CD7EC0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1544F310)

inline static constexpr unsigned int Class_1_1235F1FF1CD7EC0D_TypeDefinitionIndex = 88975;

class Class_1_1235F1FF1CD7EC0D : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_7; // 0x10
	::UnityEngine::RectTransform* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1235F1FF1CD7EC0D__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_488FF87EC9925136(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1235F1FF1CD7EC0D_METHOD_1_488FF87EC9925136_OFFSET))(this, a1, a2);
	}
};
