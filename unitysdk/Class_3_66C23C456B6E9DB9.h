#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_66C23C456B6E9DB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13709110)
#define CLASS_3_66C23C456B6E9DB9_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x13709100)
#define CLASS_3_66C23C456B6E9DB9_METHOD_3_4642B883ED6F0ADB_OFFSET UNITYSDK_OFFSET(0x137091B0)
#define CLASS_3_66C23C456B6E9DB9_ONSKIP_OFFSET UNITYSDK_OFFSET(0x13709150)
#define CLASS_3_66C23C456B6E9DB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13709330)
#define CLASS_3_66C23C456B6E9DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x137090D0)
#define CLASS_3_66C23C456B6E9DB9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13709380)

inline static constexpr unsigned int Class_3_66C23C456B6E9DB9_TypeDefinitionIndex = 49525;

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

	::System::Void Method_3_4642B883ED6F0ADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_METHOD_3_4642B883ED6F0ADB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
