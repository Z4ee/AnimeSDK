#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNPCPlatformMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDE170313F9643AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194D760)
#define CLASS_3_DDE170313F9643AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1194D7B0)
#define CLASS_3_DDE170313F9643AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1194D730)
#define CLASS_3_DDE170313F9643AE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194D9F0)

inline static constexpr unsigned int Class_3_DDE170313F9643AE_TypeDefinitionIndex = 47255;

class Class_3_DDE170313F9643AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNPCPlatformMove*>
{
public:
	::RPG::GameCore::SetNPCPlatformMove* Field_3_0; // 0x28

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE170313F9643AE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
