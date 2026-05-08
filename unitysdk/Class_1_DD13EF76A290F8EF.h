#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_3;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DD13EF76A290F8EF_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x1190CF80)
#define CLASS_1_DD13EF76A290F8EF_METHOD_1_8AC96A0EF5F738B8_OFFSET UNITYSDK_OFFSET(0x1190D140)
#define CLASS_1_DD13EF76A290F8EF_METHOD_1_9A6DA36CCAE7D188_1_OFFSET UNITYSDK_OFFSET(0x1190D720)
#define CLASS_1_DD13EF76A290F8EF_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x1190D6D0)
#define CLASS_1_DD13EF76A290F8EF_ONDROP_OFFSET UNITYSDK_OFFSET(0x1190D5E0)
#define CLASS_1_DD13EF76A290F8EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1190CF60)

inline static constexpr unsigned int Class_1_DD13EF76A290F8EF_TypeDefinitionIndex = 64040;

class Class_1_DD13EF76A290F8EF : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Action* Field_1_1; // 0x28

	::System::Void _ctor(::System::Action* a1, ::System::Action* a2, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32>* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF_ONDROP_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF_METHOD_1_9A6DA36CCAE7D188_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8AC96A0EF5F738B8(::Class_3_C3F0E3B5AB5977AE_3* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_DD13EF76A290F8EF_METHOD_1_8AC96A0EF5F738B8_OFFSET))(a1, a2);
	}
};
