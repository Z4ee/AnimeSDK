#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class UIActivePropsWindowContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_DC4548D26CCF6FCF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A8C74E0)
#define CLASS_3_DC4548D26CCF6FCF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A8C7510)
#define CLASS_3_DC4548D26CCF6FCF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8C6FC0)
#define CLASS_3_DC4548D26CCF6FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C6FA0)

inline static constexpr unsigned int Class_3_DC4548D26CCF6FCF_TypeDefinitionIndex = 72723;

class Class_3_DC4548D26CCF6FCF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_DC4548D26CCF6FCF__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIActivePropsWindowContext* Invoke(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_3_DC4548D26CCF6FCF_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::UIActivePropsWindowContext* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DC4548D26CCF6FCF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIActivePropsWindowContext* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_DC4548D26CCF6FCF_ENDINVOKE_OFFSET))(this, a1);
	}
};
