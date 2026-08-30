#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ChatContext; }
namespace MiHoYo::SDK { class ChatMessage; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CHATCONTEXTMANAGER_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0xB1BA990)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0xB1BAF70)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1BAF10)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1BAC50)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0xB1BAD00)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1BA7D0)
#define MIHOYO_SDK_CHATCONTEXTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1BB060)
#define MIHOYO_SDK_CHATCONTEXTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1BAFD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChatContextManager_TypeDefinitionIndex = 47039;

	class ChatContextManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ChatContextManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ChatContextManager**)Il2CppClass::FromTypeDefinitionIndex(ChatContextManager_TypeDefinitionIndex)->GetStaticField(0x42130);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ChatContext*>* _contexts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetContext(::System::String* a1, ::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_SETCONTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddMessage(::System::String* a1, ::MiHoYo::SDK::ChatMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ChatMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_ADDMESSAGE_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ChatContext* GetContext(::System::String* a1)
		{
			return ((::MiHoYo::SDK::ChatContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_GETCONTEXT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ChatMessage* GetMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::ChatMessage*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_GETMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearContext(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARCONTEXT_OFFSET))(this, a1);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARALL_OFFSET))(this);
		}
	};
}
