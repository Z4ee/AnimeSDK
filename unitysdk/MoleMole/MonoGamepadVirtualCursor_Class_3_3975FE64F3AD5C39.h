#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_401;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13861970)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x138619F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_INVOKE_OFFSET UNITYSDK_OFFSET(0x1385E900)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39__CTOR_OFFSET UNITYSDK_OFFSET(0x13861960)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_3975FE64F3AD5C39_TypeDefinitionIndex = 48267;

	class MonoGamepadVirtualCursor_Class_3_3975FE64F3AD5C39 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_401* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_401* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_401*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_3975FE64F3AD5C39_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
