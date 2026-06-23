#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D840400A176259F3;
namespace UnityEngine { class Transform; }

#define CLASS_1_121D23B824B1C10B_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1173EAB0)
#define CLASS_1_121D23B824B1C10B_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1173E500)
#define CLASS_1_121D23B824B1C10B_INIT_OFFSET UNITYSDK_OFFSET(0x1173EDD0)
#define CLASS_1_121D23B824B1C10B_METHOD_1_E1005455DB785023_OFFSET UNITYSDK_OFFSET(0x1173EE80)
#define CLASS_1_121D23B824B1C10B_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1173EC50)
#define CLASS_1_121D23B824B1C10B_POLISH_OFFSET UNITYSDK_OFFSET(0x1173ECD0)
#define CLASS_1_121D23B824B1C10B_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1173ED30)
#define CLASS_1_121D23B824B1C10B__CTOR_OFFSET UNITYSDK_OFFSET(0x1173EE70)

inline static constexpr unsigned int Class_1_121D23B824B1C10B_TypeDefinitionIndex = 68867;

class Class_1_121D23B824B1C10B : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_121D23B824B1C10B* Method_1_E1005455DB785023(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_121D23B824B1C10B*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_121D23B824B1C10B_METHOD_1_E1005455DB785023_OFFSET))(a1, a2);
	}
};
