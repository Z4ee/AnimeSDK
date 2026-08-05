#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F5FFFEA4E52E4E70_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x1612AA00)
#define CLASS_1_F5FFFEA4E52E4E70__CTOR_OFFSET UNITYSDK_OFFSET(0x1612A9F0)

inline static constexpr unsigned int Class_1_F5FFFEA4E52E4E70_TypeDefinitionIndex = 70890;

class Class_1_F5FFFEA4E52E4E70 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5FFFEA4E52E4E70__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5FFFEA4E52E4E70_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}
};
