#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/QAManager_Message.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace RPG::Client { class UIController; }
namespace RPG::QA { class QAManager_LogInfoSender; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB01EE0)
#define RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET UNITYSDK_OFFSET(0xAB02CB0)
#define RPG_QA_QAMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xAB014E0)
#define RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET UNITYSDK_OFFSET(0xAB01F90)
#define RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET UNITYSDK_OFFSET(0xAB02CA0)
#define RPG_QA_QAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xAB01340)
#define RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET UNITYSDK_OFFSET(0xAB02CE0)
#define RPG_QA_QAMANAGER_LOG_OFFSET UNITYSDK_OFFSET(0xAB02CD0)
#define RPG_QA_QAMANAGER_SENDCRASH_OFFSET UNITYSDK_OFFSET(0xAB02330)
#define RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xAB01E80)
#define RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0xAB02430)
#define RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xAB023D0)
#define RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET UNITYSDK_OFFSET(0xAB022C0)
#define RPG_QA_QAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xAB02CC0)
#define RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0xAB02660)
#define RPG_QA_QAMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB00E90)
#define RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB01DA0)
#define RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET UNITYSDK_OFFSET(0xAB02BF0)
#define RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0xAB01E90)
#define RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET UNITYSDK_OFFSET(0xAB01BE0)
#define RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB01F40)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET UNITYSDK_OFFSET(0xAB016E0)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xAB01680)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xAB019F0)
#define RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET UNITYSDK_OFFSET(0xAB028A0)
#define RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET UNITYSDK_OFFSET(0xAB018E0)
#define RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET UNITYSDK_OFFSET(0xAB01730)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET UNITYSDK_OFFSET(0xAB02C30)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET UNITYSDK_OFFSET(0xAB027E0)
#define RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xAB01D40)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_TypeDefinitionIndex = 41854;

	class QAManager : public ::System::Object
	{
	public:
		static ::RPG::Client::UIController** StaticGet__ErrorDialogController()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E30);
		}
		static ::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>** StaticGet__PendingMessages()
		{
			return (::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E38);
		}
		static ::RPG::QA::QAManager_LogInfoSender** StaticGet__LogInfoSender()
		{
			return (::RPG::QA::QAManager_LogInfoSender**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__LogTypeString()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E48);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__LastErrorMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E50);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__SentMessages()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E70);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__EmptyMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E78);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet__SendLogSwitch()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46E98);
		}
		static ::System::Int32* StaticGet__MessgeReportIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12720);
		}
		static ::System::Boolean* StaticGet_ErrorSaveReplay()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12724);
		}
		static ::System::Boolean* StaticGet_ErrorPause()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12725);
		}
		static ::System::Int64* StaticGet__ReportImportDruation()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12728);
		}
		static ::System::Int64* StaticGet__LastSendTimeTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		// static const ::System::String* LuaExceptionSign; // 0x0
		// static const ::System::String* LuaStackSign; // 0x0
		// static const ::System::String* LuaTracebackSign; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_DESTROY_OFFSET))();
		}

		static ::System::Void _OnLogMessageReceivedThreaded(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET))(message, stackTrace, type);
		}

		static ::System::Collections::IEnumerator* _OnLogMessageReceivedCo(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _RebuildLuaException(::System::String*& message, ::System::String*& stackTrace)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET))(message, stackTrace);
		}

		static ::System::Void _RebuildExceptionStackTrace(::System::String*& message, ::System::String*& stackTrace)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET))(message, stackTrace);
		}

		static ::System::Void _OnLogMessageReceived(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _ShowErrorDialog(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _CloseDialogCallBack(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET))(enable);
		}

		static ::System::Void _IsSendLastErrorMessageSuccess(::System::Boolean IsSuccess)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET))(IsSuccess);
		}

		static ::System::Void AddPacketHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET))();
		}

		static ::System::Void _OnCmdGmTalkScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET))(cmd, rspObject);
		}

		static ::System::Void SetSendLogSwitch(::UnityEngine::LogType type, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET))(type, enable);
		}

		static ::System::Void SendCrash(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDCRASH_OFFSET))(title, detail);
		}

		static ::System::Void SendMessage_(::System::String* type, ::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET))(type, title, detail);
		}

		static ::System::Void SendMessage__1(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET))(message, callback);
		}

		static ::System::Void SendLastErrorMessage(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET))(callback);
		}

		static ::System::Boolean _NeedSendLog(::UnityEngine::LogType type, ::System::String* message, ::System::String* stackTrace)
		{
			return ((::System::Boolean(*)(::UnityEngine::LogType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET))(type, message, stackTrace);
		}

		static ::System::Void _OnSendMessageError(::RPG::QA::QAManager_Message message, ::System::String* error)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET))(message, error);
		}

		static ::System::Boolean _AddMessage(::RPG::QA::QAManager_Message message)
		{
			return ((::System::Boolean(*)(::RPG::QA::QAManager_Message))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET))(message);
		}

		static ::System::String* _GetRPGQAPlatform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET))();
		}

		static ::System::Boolean ExecuteReleaseGM(::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET))(message);
		}

		static ::System::Void _SendMessageToApm(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET))(message, callback);
		}

		static ::System::Collections::IEnumerator* _SendMessageToApmCo(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET))(message, callback);
		}

		static ::System::Void InitRPGShell(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET))(callback);
		}

		static ::System::Void DestroyRPGShell()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET))();
		}

		static ::System::Void tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_TICK_OFFSET))();
		}

		static ::System::Void Log(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_LOG_OFFSET))(content);
		}

		static ::System::Boolean IsRPGShellStarted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET))();
		}
	};
}
