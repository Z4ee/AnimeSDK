#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x161D4C40)
#define CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x161D4C80)
#define CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_INVOKE_OFFSET UNITYSDK_OFFSET(0x161D2BC0)
#define CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E__CTOR_OFFSET UNITYSDK_OFFSET(0x161D4C20)

inline static constexpr unsigned int Class_1_621786FDD3002399_Class_3_D92244C9F11FEF7E_TypeDefinitionIndex = 79856;

class Class_1_621786FDD3002399_Class_3_D92244C9F11FEF7E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::MoleMole::UIWindowController*& a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*&, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::UIWindowController*& a1, ::MoleMole::UIControllerContextBase* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::UIWindowController*&, ::MoleMole::UIControllerContextBase*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::MoleMole::UIWindowController*& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_621786FDD3002399_CLASS_3_D92244C9F11FEF7E_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
