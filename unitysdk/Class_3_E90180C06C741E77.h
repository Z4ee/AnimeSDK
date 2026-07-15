#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelRewardPageShow; }
namespace System { class Object; }

#define CLASS_3_E90180C06C741E77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193603E0)
#define CLASS_3_E90180C06C741E77_METHOD_3_6FCE3C1CA67834FE_OFFSET UNITYSDK_OFFSET(0x193604A0)
#define CLASS_3_E90180C06C741E77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19360330)
#define CLASS_3_E90180C06C741E77__CTOR_OFFSET UNITYSDK_OFFSET(0x19360300)

inline static constexpr unsigned int Class_3_E90180C06C741E77_TypeDefinitionIndex = 56267;

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

	::System::Void Method_3_6FCE3C1CA67834FE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E90180C06C741E77_METHOD_3_6FCE3C1CA67834FE_OFFSET))(this, a1);
	}
};
