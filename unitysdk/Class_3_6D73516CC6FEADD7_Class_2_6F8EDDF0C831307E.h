#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/GameObjectGetter.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_6D73516CC6FEADD7_CLASS_2_6F8EDDF0C831307E_GET_OFFSET UNITYSDK_OFFSET(0x168ECBD0)
#define CLASS_3_6D73516CC6FEADD7_CLASS_2_6F8EDDF0C831307E__CTOR_OFFSET UNITYSDK_OFFSET(0x168ECC10)

inline static constexpr unsigned int Class_3_6D73516CC6FEADD7_Class_2_6F8EDDF0C831307E_TypeDefinitionIndex = 46822;

class Class_3_6D73516CC6FEADD7_Class_2_6F8EDDF0C831307E : public ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_CLASS_2_6F8EDDF0C831307E__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Get()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_CLASS_2_6F8EDDF0C831307E_GET_OFFSET))(this);
	}
};
