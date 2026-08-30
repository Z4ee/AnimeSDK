#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNPCPlatformMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDE170313F9643AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CB4D40)
#define CLASS_3_DDE170313F9643AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CB4D90)
#define CLASS_3_DDE170313F9643AE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB4D10)

inline static constexpr unsigned int Class_3_DDE170313F9643AE_TypeDefinitionIndex = 58709;

class Class_3_DDE170313F9643AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNPCPlatformMove*>
{
public:
	::RPG::GameCore::SetNPCPlatformMove* EJJEEJENLDA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNPCPlatformMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNPCPlatformMove*))((::PBYTE)hIl2Cpp + CLASS_3_DDE170313F9643AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE170313F9643AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE170313F9643AE_ONTASKBEGIN_OFFSET))(this);
	}
};
