#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F66F40AC82086C2A;
namespace UnityEngine { class Transform; }

#define CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x11986D70)
#define CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8_ONDROP_OFFSET UNITYSDK_OFFSET(0x11986E10)
#define CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8__CTOR_OFFSET UNITYSDK_OFFSET(0x11986D60)

inline static constexpr unsigned int Class_2_F66F40AC82086C2A_Class_1_418F3B2F80E745E8_TypeDefinitionIndex = 78769;

class Class_2_F66F40AC82086C2A_Class_1_418F3B2F80E745E8 : public ::System::Object
{
public:
	::Class_2_F66F40AC82086C2A* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_F66F40AC82086C2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F66F40AC82086C2A*))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_418F3B2F80E745E8_ONDROP_OFFSET))(this, a1, a2);
	}
};
