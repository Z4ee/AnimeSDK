#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E69FF9FF9378BEEE_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x12BF2EF0)
#define CLASS_1_E69FF9FF9378BEEE_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x12BF3360)
#define CLASS_1_E69FF9FF9378BEEE_ONDROP_OFFSET UNITYSDK_OFFSET(0x12BF32A0)
#define CLASS_1_E69FF9FF9378BEEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF2EE0)

inline static constexpr unsigned int Class_1_E69FF9FF9378BEEE_TypeDefinitionIndex = 44804;

class Class_1_E69FF9FF9378BEEE : public ::System::Object
{
public:
	::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::Class_3_C3F0E3B5AB5977AE_3*>* Field_1_1; // 0x10
	::Class_3_C3F0E3B5AB5977AE_3* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_C3F0E3B5AB5977AE_3* a1, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::Class_3_C3F0E3B5AB5977AE_3*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_3*, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::Class_3_C3F0E3B5AB5977AE_3*>*))((::PBYTE)hIl2Cpp + CLASS_1_E69FF9FF9378BEEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E69FF9FF9378BEEE_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E69FF9FF9378BEEE_ONDROP_OFFSET))(this, a1, a2);
	}

	::Class_3_C3F0E3B5AB5977AE_3* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_C3F0E3B5AB5977AE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69FF9FF9378BEEE_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}
};
