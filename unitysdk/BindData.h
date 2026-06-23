#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }

#define BINDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFEE50)

inline static constexpr unsigned int BindData_TypeDefinitionIndex = 26476;

class BindData : public ::System::Object
{
public:
	::UnityEngine::GameObject* trackedObject; // 0x10
	::System::String* propertyName; // 0x18
	::System::String* shaderParameter; // 0x20
	::System::Func_1<::System::Object*>* cachedGetter; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDDATA__CTOR_OFFSET))(this);
	}
};
