#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11AFAF60)
#define CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11AFAFC0)
#define CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_INVOKE_OFFSET UNITYSDK_OFFSET(0x11AFA6F0)
#define CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFA6D0)

inline static constexpr unsigned int Class_1_05CEF841CFEE9EE9_Class_3_CB82A2773748C75A_TypeDefinitionIndex = 55440;

class Class_1_05CEF841CFEE9EE9_Class_3_CB82A2773748C75A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_CLASS_3_CB82A2773748C75A_ENDINVOKE_OFFSET))(this, a1);
	}
};
