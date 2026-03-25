#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C6711C376B6B8DAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A213D0)
#define CLASS_3_C6711C376B6B8DAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A21410)
#define CLASS_3_C6711C376B6B8DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x8A213A0)
#define CLASS_3_C6711C376B6B8DAB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A21640)

inline static constexpr unsigned int Class_3_C6711C376B6B8DAB_TypeDefinitionIndex = 45207;

class Class_3_C6711C376B6B8DAB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessTriggerAnimState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessTriggerAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessTriggerAnimState*))((::PBYTE)hIl2Cpp + CLASS_3_C6711C376B6B8DAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6711C376B6B8DAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6711C376B6B8DAB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6711C376B6B8DAB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
