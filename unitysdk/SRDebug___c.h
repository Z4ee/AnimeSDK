#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace System { template <typename T> class Action_1; }

#define SRDEBUG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18430C10)
#define SRDEBUG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18430C40)
#define SRDEBUG___C__GETDEFAULTCOPYCONSOLEITEMCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x18430C50)

inline static constexpr unsigned int SRDebug___c_TypeDefinitionIndex = 29593;

class SRDebug___c : public ::System::Object
{
public:
	static ::System::Action_1<::SRDebugger::Services::ConsoleEntry*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::SRDebugger::Services::ConsoleEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SRDebug___c_TypeDefinitionIndex)->GetStaticField(0x320D0);
	}
	static ::SRDebug___c** StaticGet___9()
	{
		return (::SRDebug___c**)Il2CppClass::FromTypeDefinitionIndex(SRDebug___c_TypeDefinitionIndex)->GetStaticField(0x320D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUG___C__CTOR_OFFSET))(this);
	}

	::System::Void _GetDefaultCopyConsoleItemCallback_b__8_0(::SRDebugger::Services::ConsoleEntry* entry)
	{
		return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUG___C__GETDEFAULTCOPYCONSOLEITEMCALLBACK_B__8_0_OFFSET))(this, entry);
	}
};
