#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_29;
namespace UnityEngine { class GameObject; }

#define CLASS_2_3D271FE06BBA962A_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11E897B0)
#define CLASS_2_3D271FE06BBA962A_METHOD_2_07BE6DB386D86761_OFFSET UNITYSDK_OFFSET(0x11E89690)
#define CLASS_2_3D271FE06BBA962A_METHOD_2_649022FAEA4889B8_OFFSET UNITYSDK_OFFSET(0x11E89430)
#define CLASS_2_3D271FE06BBA962A_METHOD_2_852D605DD5017E2C_OFFSET UNITYSDK_OFFSET(0x11E897E0)
#define CLASS_2_3D271FE06BBA962A_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x11E89740)
#define CLASS_2_3D271FE06BBA962A_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11E897C0)
#define CLASS_2_3D271FE06BBA962A__CTOR_OFFSET UNITYSDK_OFFSET(0x11E897D0)

inline static constexpr unsigned int Class_2_3D271FE06BBA962A_TypeDefinitionIndex = 69766;

class Class_2_3D271FE06BBA962A : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_649022FAEA4889B8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_METHOD_2_649022FAEA4889B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_07BE6DB386D86761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_METHOD_2_07BE6DB386D86761_OFFSET))(this, a1);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_SET_GAMEOBJECT_OFFSET))(this, value);
	}

	::System::Void Method_2_852D605DD5017E2C(::Class_0_16E4307DCC419505_29* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_3D271FE06BBA962A_METHOD_2_852D605DD5017E2C_OFFSET))(this, P0);
	}
};
