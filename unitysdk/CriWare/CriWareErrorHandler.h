#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriWareErrorHandler_Callback; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define CRIWARE_CRIWAREERRORHANDLER_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DC53C50)
#define CRIWARE_CRIWAREERRORHANDLER_ADD__ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DC53A90)
#define CRIWARE_CRIWAREERRORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DC54270)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC54860)
#define CRIWARE_CRIWAREERRORHANDLER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC54630)
#define CRIWARE_CRIWAREERRORHANDLER_DEQUEUEERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x1DC54640)
#define CRIWARE_CRIWAREERRORHANDLER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DC53A20)
#define CRIWARE_CRIWAREERRORHANDLER_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DC54AD0)
#define CRIWARE_CRIWAREERRORHANDLER_ISENABLENATIVEPRINTMESSAGEFUNC_OFFSET UNITYSDK_OFFSET(0x1DC53DD0)
#define CRIWARE_CRIWAREERRORHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DC54870)
#define CRIWARE_CRIWAREERRORHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DC54520)
#define CRIWARE_CRIWAREERRORHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DC543E0)
#define CRIWARE_CRIWAREERRORHANDLER_OUTPUTDEFAULTLOG_OFFSET UNITYSDK_OFFSET(0x1DC54C20)
#define CRIWARE_CRIWAREERRORHANDLER_REGISTERERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DC53E70)
#define CRIWARE_CRIWAREERRORHANDLER_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DC54230)
#define CRIWARE_CRIWAREERRORHANDLER_REMOVE__ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DC53B70)
#define CRIWARE_CRIWAREERRORHANDLER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DC53A50)
#define CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC54F60)
#define CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC54F10)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_TypeDefinitionIndex = 38846;

	class CriWareErrorHandler : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet__onCallback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x5E710);
		}
		static ::System::String** StaticGet_logPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x5E718);
		}
		static ::CriWare::CriWareErrorHandler_Callback** StaticGet_callback()
		{
			return (::CriWare::CriWareErrorHandler_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x5E720);
		}
		static ::System::String** StaticGet__errorMessage_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x5E728);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x13110);
		}
		static ::System::Boolean* StaticGet__enableDebugPrintOnTerminal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x13114);
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

		static ::System::Void add__onCallback(::CriWare::CriWareErrorHandler_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ADD__ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove__onCallback(::CriWare::CriWareErrorHandler_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_REMOVE__ONCALLBACK_OFFSET))(a1);
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

		static ::System::Boolean IsEnableNativePrintMessageFunc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_ISENABLENATIVEPRINTMESSAGEFUNC_OFFSET))();
		}

		static ::System::Void RegisterErrorCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_REGISTERERRORCALLBACK_OFFSET))();
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
