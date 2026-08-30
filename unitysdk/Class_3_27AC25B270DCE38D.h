#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Move; }

#define CLASS_3_27AC25B270DCE38D_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1A7BA060)
#define CLASS_3_27AC25B270DCE38D_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A7B9FE0)
#define CLASS_3_27AC25B270DCE38D_METHOD_3_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x1A7BA0E0)
#define CLASS_3_27AC25B270DCE38D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BA4F0)

inline static constexpr unsigned int Class_3_27AC25B270DCE38D_TypeDefinitionIndex = 68660;

class Class_3_27AC25B270DCE38D : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Move*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27AC25B270DCE38D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27AC25B270DCE38D_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27AC25B270DCE38D_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_3_EE2957687AFE92A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27AC25B270DCE38D_METHOD_3_EE2957687AFE92A5_OFFSET))(this, a1);
	}
};
