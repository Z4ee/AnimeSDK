#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_A8D9A742F7AB118B_CLASS_1_D8ECF3FE75F8F964_METHOD_1_6DDD54D8D4AA1D14_OFFSET UNITYSDK_OFFSET(0x1231CB10)
#define CLASS_1_A8D9A742F7AB118B_CLASS_1_D8ECF3FE75F8F964__CTOR_OFFSET UNITYSDK_OFFSET(0x1231CB00)

inline static constexpr unsigned int Class_1_A8D9A742F7AB118B_Class_1_D8ECF3FE75F8F964_TypeDefinitionIndex = 45112;

class Class_1_A8D9A742F7AB118B_Class_1_D8ECF3FE75F8F964 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_D8ECF3FE75F8F964__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DDD54D8D4AA1D14(::MoleMole::Config::ConfigAutoBattleAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAutoBattleAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_D8ECF3FE75F8F964_METHOD_1_6DDD54D8D4AA1D14_OFFSET))(this, a1);
	}
};
