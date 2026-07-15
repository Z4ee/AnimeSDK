#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define CLASS_3_AA449FD9DEDB7919_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14FE9700)
#define CLASS_3_AA449FD9DEDB7919_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14FE9730)
#define CLASS_3_AA449FD9DEDB7919_INVOKE_OFFSET UNITYSDK_OFFSET(0x14FE96F0)
#define CLASS_3_AA449FD9DEDB7919__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE9600)

inline static constexpr unsigned int Class_3_AA449FD9DEDB7919_TypeDefinitionIndex = 70675;

class Class_3_AA449FD9DEDB7919 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_AA449FD9DEDB7919__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* Invoke(::UnityEngine::Component* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_3_AA449FD9DEDB7919_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Component* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Component*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AA449FD9DEDB7919_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_AA449FD9DEDB7919_ENDINVOKE_OFFSET))(this, a1);
	}
};
