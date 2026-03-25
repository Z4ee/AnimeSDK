#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelRewardPageShow; }
namespace System { class Object; }

#define CLASS_3_E90180C06C741E77_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD199DE0)
#define CLASS_3_E90180C06C741E77_METHOD_3_F5D0DE62B372C4C0_OFFSET UNITYSDK_OFFSET(0xD199E50)
#define CLASS_3_E90180C06C741E77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD199D60)
#define CLASS_3_E90180C06C741E77__CTOR_OFFSET UNITYSDK_OFFSET(0xD199D30)
#define CLASS_3_E90180C06C741E77___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD199F70)

inline static constexpr unsigned int Class_3_E90180C06C741E77_TypeDefinitionIndex = 47570;

class Class_3_E90180C06C741E77 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WaitLevelRewardPageShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLevelRewardPageShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLevelRewardPageShow*))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_F5D0DE62B372C4C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77_METHOD_3_F5D0DE62B372C4C0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
