#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_43BD383C98B4C0C5_9;
class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1664A320)
#define CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1664A360)
#define CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_INVOKE_OFFSET UNITYSDK_OFFSET(0x166495E0)
#define CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653__CTOR_OFFSET UNITYSDK_OFFSET(0x1664A300)

inline static constexpr unsigned int Class_1_1BA3428D72CC635E_Class_3_8F5B7FD3EC83C653_TypeDefinitionIndex = 28364;

class Class_1_1BA3428D72CC635E_Class_3_8F5B7FD3EC83C653 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_9* Invoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_9*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::Class_1_B1A7D8EBAB39D13D* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::Class_1_B1A7D8EBAB39D13D*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_43BD383C98B4C0C5_9* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_9*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_1BA3428D72CC635E_CLASS_3_8F5B7FD3EC83C653_ENDINVOKE_OFFSET))(this, a1);
	}
};
