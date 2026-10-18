#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRDebugger::Services { class IAssetLoaderService; }
namespace SRDebugger::Services { class IDebugService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityEvent; }

#define SRDEBUG_GETDEFAULTCOPYCONSOLEITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ED362F0)
#define SRDEBUG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ED36220)
#define SRDEBUG_GET_MIHOYOASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1ED36260)
#define SRDEBUG_INIT_OFFSET UNITYSDK_OFFSET(0x1ED362A0)
#define SRDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED363C0)

inline static constexpr unsigned int SRDebug_TypeDefinitionIndex = 37946;

class SRDebug : public ::System::Object
{
public:
	static ::System::Action_1<::SRDebugger::Services::ConsoleEntry*>** StaticGet_CopyConsoleItemCallback()
	{
		return (::System::Action_1<::SRDebugger::Services::ConsoleEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SRDebug_TypeDefinitionIndex)->GetStaticField(0x38DA0);
	}
	static ::UnityEngine::Events::UnityEvent** StaticGet_OnRPGAppRestart()
	{
		return (::UnityEngine::Events::UnityEvent**)Il2CppClass::FromTypeDefinitionIndex(SRDebug_TypeDefinitionIndex)->GetStaticField(0x38DA8);
	}
	// static const ::System::String* Version; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG__CCTOR_OFFSET))();
	}

	static ::SRDebugger::Services::IDebugService* get_Instance()
	{
		return ((::SRDebugger::Services::IDebugService*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GET_INSTANCE_OFFSET))();
	}

	static ::SRDebugger::Services::IAssetLoaderService* get_MihoyoAssetLoader()
	{
		return ((::SRDebugger::Services::IAssetLoaderService*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GET_MIHOYOASSETLOADER_OFFSET))();
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG_INIT_OFFSET))();
	}

	static ::System::Action_1<::SRDebugger::Services::ConsoleEntry*>* GetDefaultCopyConsoleItemCallback()
	{
		return ((::System::Action_1<::SRDebugger::Services::ConsoleEntry*>*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GETDEFAULTCOPYCONSOLEITEMCALLBACK_OFFSET))();
	}
};
