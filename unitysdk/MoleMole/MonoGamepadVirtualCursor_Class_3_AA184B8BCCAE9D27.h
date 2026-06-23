#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17E94E90)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17E94F00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E94B50)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27__CTOR_OFFSET UNITYSDK_OFFSET(0x17E94B30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_AA184B8BCCAE9D27_TypeDefinitionIndex = 51354;

	class MonoGamepadVirtualCursor_Class_3_AA184B8BCCAE9D27 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_AA184B8BCCAE9D27_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
