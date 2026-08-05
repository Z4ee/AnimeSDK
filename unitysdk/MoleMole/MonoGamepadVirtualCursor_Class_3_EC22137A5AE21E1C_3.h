#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_270;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1909AAD0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1909AB00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1909A5B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1909A590)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_3_TypeDefinitionIndex = 42952;

	class MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Class_0_16E4307DCC419505_270* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_270*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_270* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_270*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_EC22137A5AE21E1C_3_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
