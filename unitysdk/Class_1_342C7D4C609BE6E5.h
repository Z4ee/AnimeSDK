#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_342C7D4C609BE6E5_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x13CA8260)
#define CLASS_1_342C7D4C609BE6E5_METHOD_1_9A6DA36CCAE7D188_1_OFFSET UNITYSDK_OFFSET(0x13CA8540)
#define CLASS_1_342C7D4C609BE6E5_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x13CA84F0)
#define CLASS_1_342C7D4C609BE6E5_ONDROP_OFFSET UNITYSDK_OFFSET(0x13CA8430)
#define CLASS_1_342C7D4C609BE6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA8240)

inline static constexpr unsigned int Class_1_342C7D4C609BE6E5_TypeDefinitionIndex = 78939;

class Class_1_342C7D4C609BE6E5 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_2<::Class_3_C3F0E3B5AB5977AE*, ::System::Int32>* Field_1_4; // 0x20
	::UnityEngine::GameObject* Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE*, ::System::Int32>* a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE*, ::System::Int32>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_342C7D4C609BE6E5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_342C7D4C609BE6E5_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_342C7D4C609BE6E5_ONDROP_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_342C7D4C609BE6E5_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_342C7D4C609BE6E5_METHOD_1_9A6DA36CCAE7D188_1_OFFSET))(this);
	}
};
