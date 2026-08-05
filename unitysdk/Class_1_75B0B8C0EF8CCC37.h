#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D840400A176259F3;
namespace UnityEngine { class Transform; }

#define CLASS_1_75B0B8C0EF8CCC37_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x19F8B9A0)
#define CLASS_1_75B0B8C0EF8CCC37_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x19F8B370)
#define CLASS_1_75B0B8C0EF8CCC37_INIT_OFFSET UNITYSDK_OFFSET(0x19F8BDC0)
#define CLASS_1_75B0B8C0EF8CCC37_METHOD_1_B289B0A3665840C4_OFFSET UNITYSDK_OFFSET(0x19F8BE70)
#define CLASS_1_75B0B8C0EF8CCC37_ONSYNC_OFFSET UNITYSDK_OFFSET(0x19F8BC30)
#define CLASS_1_75B0B8C0EF8CCC37_POLISH_OFFSET UNITYSDK_OFFSET(0x19F8BCB0)
#define CLASS_1_75B0B8C0EF8CCC37_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19F8BD10)
#define CLASS_1_75B0B8C0EF8CCC37__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8BE60)

inline static constexpr unsigned int Class_1_75B0B8C0EF8CCC37_TypeDefinitionIndex = 67964;

class Class_1_75B0B8C0EF8CCC37 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_75B0B8C0EF8CCC37* Method_1_B289B0A3665840C4(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::Class_1_75B0B8C0EF8CCC37*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_METHOD_1_B289B0A3665840C4_OFFSET))(a1, a2, a3);
	}
};
