#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_ISOVERPANEL_OFFSET UNITYSDK_OFFSET(0xAAFEF50)
#define CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_OBJECTDATA_OFFSET UNITYSDK_OFFSET(0xAAFEF40)
#define CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xAAFEF30)
#define CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFEC00)

inline static constexpr unsigned int Class_1_4C0EC4F9444008E3_Class_1_F741B5BD9AD41E6C_TypeDefinitionIndex = 73914;

class Class_1_4C0EC4F9444008E3_Class_1_F741B5BD9AD41E6C : public ::System::Object
{
public:
	::UnityEngine::GameObject* _Source_k__BackingField; // 0x10
	::System::Object* _ObjectData_k__BackingField; // 0x18
	::System::Boolean _IsOverPanel_k__BackingField; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* get_Source()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_SOURCE_OFFSET))(this);
	}

	::System::Object* get_ObjectData()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_OBJECTDATA_OFFSET))(this);
	}

	::System::Boolean get_IsOverPanel()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0EC4F9444008E3_CLASS_1_F741B5BD9AD41E6C_GET_ISOVERPANEL_OFFSET))(this);
	}
};
