#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D840400A176259F3;
namespace UnityEngine { class Transform; }

#define CLASS_1_31419002D2F185BE_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x18B73260)
#define CLASS_1_31419002D2F185BE_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x18B72940)
#define CLASS_1_31419002D2F185BE_INIT_OFFSET UNITYSDK_OFFSET(0x18B735C0)
#define CLASS_1_31419002D2F185BE_METHOD_1_043AA4D6E3A7D4F3_OFFSET UNITYSDK_OFFSET(0x18B73670)
#define CLASS_1_31419002D2F185BE_ONSYNC_OFFSET UNITYSDK_OFFSET(0x18B73440)
#define CLASS_1_31419002D2F185BE_POLISH_OFFSET UNITYSDK_OFFSET(0x18B734C0)
#define CLASS_1_31419002D2F185BE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x18B73520)
#define CLASS_1_31419002D2F185BE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B73660)

inline static constexpr unsigned int Class_1_31419002D2F185BE_TypeDefinitionIndex = 57710;

class Class_1_31419002D2F185BE : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_31419002D2F185BE* Method_1_043AA4D6E3A7D4F3(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_31419002D2F185BE*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31419002D2F185BE_METHOD_1_043AA4D6E3A7D4F3_OFFSET))(a1, a2);
	}
};
