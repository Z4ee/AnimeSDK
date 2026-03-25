#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Google::Protobuf { class ByteString; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9492EC0)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9492F20)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x947D3B0)
#define RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9492EA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int OnGeneralNotifyDelegate_TypeDefinitionIndex = 61971;

	class OnGeneralNotifyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_INVOKE_OFFSET))(this, msgId, msg);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_BEGININVOKE_OFFSET))(this, msgId, msg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_ONGENERALNOTIFYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
