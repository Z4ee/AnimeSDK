#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriWareErrorHandler_Callback; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define CRIWARE_CRIWAREERRORHANDLER_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x11A539D0)
#define CRIWARE_CRIWAREERRORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A53B90)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11A540E0)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x11A53EA0)
#define CRIWARE_CRIWAREERRORHANDLER_DEQUEUEERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x11A53EB0)
#define CRIWARE_CRIWAREERRORHANDLER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x11A53960)
#define CRIWARE_CRIWAREERRORHANDLER_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x11A54720)
#define CRIWARE_CRIWAREERRORHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A540F0)
#define CRIWARE_CRIWAREERRORHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A53DC0)
#define CRIWARE_CRIWAREERRORHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A53CD0)
#define CRIWARE_CRIWAREERRORHANDLER_OUTPUTDEFAULTLOG_OFFSET UNITYSDK_OFFSET(0x11A548A0)
#define CRIWARE_CRIWAREERRORHANDLER_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x11A53AB0)
#define CRIWARE_CRIWAREERRORHANDLER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x11A53990)
#define CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A54B70)
#define CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A54B20)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_TypeDefinitionIndex = 31163;

	class CriWareErrorHandler : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet_callback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x35470);
		}
		static ::System::String** StaticGet_logPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x35478);
		}
		static ::System::String** StaticGet__errorMessage_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x35480);
		}
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet_OnCallback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x35488);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x10AE0);
		}
		::System::Boolean enableDebugPrintOnTerminal; // 0x28
		::System::Boolean enableForceCrashOnError; // 0x29
		::System::Boolean dontDestroyOnLoad; // 0x2A
		::System::UInt32 messageBufferCounts; // 0x2C
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>* unThreadSafeMessages; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET))();
		}

		static ::System::String* get_errorMessage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_GET_ERRORMESSAGE_OFFSET))();
		}

		static ::System::Void set_errorMessage(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_SET_ERRORMESSAGE_OFFSET))(value);
		}

		static ::System::Void add_OnCallback(::CriWare::CriWareErrorHandler_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ADD_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriWareErrorHandler_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_REMOVE_ONCALLBACK_OFFSET))(value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DequeueErrorMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_DEQUEUEERRORMESSAGES_OFFSET))(this);
		}

		::System::Void HandleMessage(::System::String* errmsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_HANDLEMESSAGE_OFFSET))(this, errmsg);
		}

		static ::System::Void OutputDefaultLog(::System::String* errmsg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_OUTPUTDEFAULTLOG_OFFSET))(errmsg);
		}
	};
}
