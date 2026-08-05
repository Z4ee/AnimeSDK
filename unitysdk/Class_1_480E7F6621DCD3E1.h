#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D840400A176259F3;
namespace UnityEngine { class Transform; }

#define CLASS_1_480E7F6621DCD3E1_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x13C0D180)
#define CLASS_1_480E7F6621DCD3E1_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x13C0C6D0)
#define CLASS_1_480E7F6621DCD3E1_INIT_OFFSET UNITYSDK_OFFSET(0x13C0D5C0)
#define CLASS_1_480E7F6621DCD3E1_METHOD_1_E9B6BA86A572F1B4_OFFSET UNITYSDK_OFFSET(0x13C0D670)
#define CLASS_1_480E7F6621DCD3E1_ONSYNC_OFFSET UNITYSDK_OFFSET(0x13C0D410)
#define CLASS_1_480E7F6621DCD3E1_POLISH_OFFSET UNITYSDK_OFFSET(0x13C0D490)
#define CLASS_1_480E7F6621DCD3E1_RECYCLE_OFFSET UNITYSDK_OFFSET(0x13C0D500)
#define CLASS_1_480E7F6621DCD3E1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0D660)

inline static constexpr unsigned int Class_1_480E7F6621DCD3E1_TypeDefinitionIndex = 46367;

class Class_1_480E7F6621DCD3E1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_7; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_480E7F6621DCD3E1* Method_1_E9B6BA86A572F1B4(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::Class_1_480E7F6621DCD3E1*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_480E7F6621DCD3E1_METHOD_1_E9B6BA86A572F1B4_OFFSET))(a1, a2, a3);
	}
};
