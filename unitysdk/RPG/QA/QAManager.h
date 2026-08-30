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

#define RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE7E33A0)
#define RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET UNITYSDK_OFFSET(0xE7E42F0)
#define RPG_QA_QAMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xE7E1EB0)
#define RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET UNITYSDK_OFFSET(0xE7E3470)
#define RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET UNITYSDK_OFFSET(0xE7E42E0)
#define RPG_QA_QAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xE7E1D10)
#define RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET UNITYSDK_OFFSET(0xE7E4320)
#define RPG_QA_QAMANAGER_LOG_OFFSET UNITYSDK_OFFSET(0xE7E4310)
#define RPG_QA_QAMANAGER_SENDCRASH_OFFSET UNITYSDK_OFFSET(0xE7E3840)
#define RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xE7E3E60)
#define RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0xE7E3960)
#define RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xE7E38E0)
#define RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET UNITYSDK_OFFSET(0xE7E37D0)
#define RPG_QA_QAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xE7E4300)
#define RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE7E3C20)
#define RPG_QA_QAMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7E1850)
#define RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xE7E2630)
#define RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET UNITYSDK_OFFSET(0xE7E4260)
#define RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0xE7E2730)
#define RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET UNITYSDK_OFFSET(0xE7E3E70)
#define RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xE7E3420)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET UNITYSDK_OFFSET(0xE7E20F0)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xE7E2090)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xE7E23F0)
#define RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET UNITYSDK_OFFSET(0xE7E3F10)
#define RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET UNITYSDK_OFFSET(0xE7E22E0)
#define RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET UNITYSDK_OFFSET(0xE7E2130)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET UNITYSDK_OFFSET(0xE7E4270)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET UNITYSDK_OFFSET(0xE7E3DA0)
#define RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xE7E25D0)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_TypeDefinitionIndex = 52108;

	class QAManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet__SendLogSwitch()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x21FC0);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__LastErrorMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x21FC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__LogTypeString()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x21FE8);
		}
		static ::RPG::QA::QAManager_LogInfoSender** StaticGet__LogInfoSender()
		{
			return (::RPG::QA::QAManager_LogInfoSender**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x21FF0);
		}
		static ::RPG::Client::UIController** StaticGet__ErrorDialogController()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x21FF8);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__EmptyMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x22000);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__SentMessages()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x22020);
		}
		static ::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>** StaticGet__PendingMessages()
		{
			return (::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x22028);
		}
		static ::System::Int64* StaticGet__ReportImportDruation()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0xADE0);
		}
		static ::System::Int32* StaticGet__MessgeReportIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0xADE8);
		}
		static ::System::Boolean* StaticGet_ErrorSaveReplay()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0xADEC);
		}
		static ::System::Boolean* StaticGet_ErrorPause()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0xADED);
		}
		static ::System::Int64* StaticGet__LastSendTimeTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0xADF0);
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

		static ::System::Void _OnLogMessageReceivedThreaded(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* _OnLogMessageReceivedCo(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RebuildLuaException(::System::String*& a1, ::System::String*& a2)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void _RebuildExceptionStackTrace(::System::String*& a1, ::System::String*& a2)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET))(a1, a2);
		}

		static ::System::Void _OnLogMessageReceived(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ShowErrorDialog(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _CloseDialogCallBack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET))(a1);
		}

		static ::System::Void _IsSendLastErrorMessageSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET))(a1);
		}

		static ::System::Void AddPacketHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET))();
		}

		static ::System::Void _OnCmdGmTalkScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET))(a1, a2);
		}

		static ::System::Void SetSendLogSwitch(::UnityEngine::LogType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET))(a1, a2);
		}

		static ::System::Void SendCrash(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDCRASH_OFFSET))(a1, a2);
		}

		static ::System::Void SendMessage_(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET))(a1, a2, a3);
		}

		static ::System::Void SendMessage__1(::RPG::QA::QAManager_Message a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET))(a1, a2);
		}

		static ::System::Void SendLastErrorMessage(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET))(a1);
		}

		static ::System::Boolean _NeedSendLog(::UnityEngine::LogType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::LogType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _OnSendMessageError(::RPG::QA::QAManager_Message a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET))(a1, a2);
		}

		static ::System::Boolean _AddMessage(::RPG::QA::QAManager_Message a1)
		{
			return ((::System::Boolean(*)(::RPG::QA::QAManager_Message))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET))(a1);
		}

		static ::System::String* _GetRPGQAPlatform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET))();
		}

		static ::System::Boolean ExecuteReleaseGM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET))(a1);
		}

		static ::System::Void _SendMessageToApm(::RPG::QA::QAManager_Message a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _SendMessageToApmCo(::RPG::QA::QAManager_Message a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET))(a1, a2);
		}

		static ::System::Void InitRPGShell(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET))(a1);
		}

		static ::System::Void DestroyRPGShell()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET))();
		}

		static ::System::Void tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_TICK_OFFSET))();
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_LOG_OFFSET))(a1);
		}

		static ::System::Boolean IsRPGShellStarted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET))();
		}
	};
}
