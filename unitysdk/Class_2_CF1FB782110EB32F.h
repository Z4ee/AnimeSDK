#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
namespace UnityEngine { class GameObject; }

#define CLASS_2_CF1FB782110EB32F_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1672F770)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1672F710)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0x1672F600)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x1672F570)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x1672F690)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x1672F520)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x1672F4D0)
#define CLASS_2_CF1FB782110EB32F_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1672F480)
#define CLASS_2_CF1FB782110EB32F_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1672F780)
#define CLASS_2_CF1FB782110EB32F__CTOR_OFFSET UNITYSDK_OFFSET(0x1672F790)

inline static constexpr unsigned int Class_2_CF1FB782110EB32F_TypeDefinitionIndex = 72629;

class Class_2_CF1FB782110EB32F : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6105334A729F22E3_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_6105334A729F22E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_CF1FB782110EB32F_SET_GAMEOBJECT_OFFSET))(this, a1);
	}
};
