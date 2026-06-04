#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriWareErrorHandler_Callback; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define CRIWARE_CRIWAREERRORHANDLER_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x146DB460)
#define CRIWARE_CRIWAREERRORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x146DB620)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x146DBBF0)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x146DB9C0)
#define CRIWARE_CRIWAREERRORHANDLER_DEQUEUEERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x146DB9D0)
#define CRIWARE_CRIWAREERRORHANDLER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x146DB3F0)
#define CRIWARE_CRIWAREERRORHANDLER_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x146DBD30)
#define CRIWARE_CRIWAREERRORHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x146DBC00)
#define CRIWARE_CRIWAREERRORHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x146DB8B0)
#define CRIWARE_CRIWAREERRORHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x146DB790)
#define CRIWARE_CRIWAREERRORHANDLER_OUTPUTDEFAULTLOG_OFFSET UNITYSDK_OFFSET(0x146DBE80)
#define CRIWARE_CRIWAREERRORHANDLER_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x146DB540)
#define CRIWARE_CRIWAREERRORHANDLER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x146DB420)
#define CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146DC150)
#define CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x146DC100)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_TypeDefinitionIndex = 37183;

	class CriWareErrorHandler : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet_OnCallback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x8160);
		}
		static ::System::String** StaticGet__errorMessage_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x8168);
		}
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet_callback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x8170);
		}
		static ::System::String** StaticGet_logPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x8178);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x3820);
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

		static ::System::Void set_errorMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_SET_ERRORMESSAGE_OFFSET))(a1);
		}

		static ::System::Void add_OnCallback(::CriWare::CriWareErrorHandler_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ADD_ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriWareErrorHandler_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_REMOVE_ONCALLBACK_OFFSET))(a1);
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

		::System::Void HandleMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_HANDLEMESSAGE_OFFSET))(this, a1);
		}

		static ::System::Void OutputDefaultLog(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_OUTPUTDEFAULTLOG_OFFSET))(a1);
		}
	};
}
