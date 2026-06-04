#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_28;
namespace UnityEngine { class GameObject; }

#define CLASS_2_63F12327EBB8F1F1_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA86AA30)
#define CLASS_2_63F12327EBB8F1F1_METHOD_2_07BE6DB386D86761_OFFSET UNITYSDK_OFFSET(0xA86A910)
#define CLASS_2_63F12327EBB8F1F1_METHOD_2_649022FAEA4889B8_OFFSET UNITYSDK_OFFSET(0xA86A6B0)
#define CLASS_2_63F12327EBB8F1F1_METHOD_2_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0xA86AA60)
#define CLASS_2_63F12327EBB8F1F1_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xA86A9C0)
#define CLASS_2_63F12327EBB8F1F1_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA86AA40)
#define CLASS_2_63F12327EBB8F1F1__CTOR_OFFSET UNITYSDK_OFFSET(0xA86AA50)

inline static constexpr unsigned int Class_2_63F12327EBB8F1F1_TypeDefinitionIndex = 70578;

class Class_2_63F12327EBB8F1F1 : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_649022FAEA4889B8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_METHOD_2_649022FAEA4889B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_07BE6DB386D86761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_METHOD_2_07BE6DB386D86761_OFFSET))(this, a1);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_SET_GAMEOBJECT_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_2_63F12327EBB8F1F1_METHOD_2_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}
};
