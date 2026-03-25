#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F4B7ACF3C275B19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C88BA0)
#define CLASS_3_2F4B7ACF3C275B19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C88C30)
#define CLASS_3_2F4B7ACF3C275B19__CTOR_OFFSET UNITYSDK_OFFSET(0x8C88B70)
#define CLASS_3_2F4B7ACF3C275B19___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C89160)

inline static constexpr unsigned int Class_3_2F4B7ACF3C275B19_TypeDefinitionIndex = 47091;

class Class_3_2F4B7ACF3C275B19 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupTrigger*>
{
public:
	::RPG::GameCore::PropComponent* Field_3_1; // 0x28
	::System::Boolean Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_2F4B7ACF3C275B19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F4B7ACF3C275B19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F4B7ACF3C275B19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F4B7ACF3C275B19___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
