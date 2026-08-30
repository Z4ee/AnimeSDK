#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Google::Protobuf { class ByteString; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B8C4C10)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B8C4C70)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8C4C00)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C4B90)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int OnGeneralNotifyDelegate_TypeDefinitionIndex = 75657;

	class OnGeneralNotifyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
