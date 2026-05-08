#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13861920)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13861950)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_INVOKE_OFFSET UNITYSDK_OFFSET(0x138608B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6__CTOR_OFFSET UNITYSDK_OFFSET(0x13861910)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_62D1EA86F94FBFC6_TypeDefinitionIndex = 48263;

	class MonoGamepadVirtualCursor_Class_3_62D1EA86F94FBFC6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_62D1EA86F94FBFC6_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
