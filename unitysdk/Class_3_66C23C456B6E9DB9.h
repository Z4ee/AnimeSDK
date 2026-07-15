#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_66C23C456B6E9DB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EE1530)
#define CLASS_3_66C23C456B6E9DB9_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16EE1520)
#define CLASS_3_66C23C456B6E9DB9_METHOD_3_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x16EE15D0)
#define CLASS_3_66C23C456B6E9DB9_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16EE1570)
#define CLASS_3_66C23C456B6E9DB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EE1750)
#define CLASS_3_66C23C456B6E9DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE14F0)

inline static constexpr unsigned int Class_3_66C23C456B6E9DB9_TypeDefinitionIndex = 50579;

class Class_3_66C23C456B6E9DB9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_METHOD_3_2340068C22DFE332_OFFSET))(this);
	}
};
