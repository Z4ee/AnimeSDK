#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargetMisc; }
namespace System { class Action; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_615E3F101116C791_METHOD_1_8A9373A828D650E0_OFFSET UNITYSDK_OFFSET(0x1545B770)
#define CLASS_1_887DD3CF562F14DB_CLASS_1_615E3F101116C791__CTOR_OFFSET UNITYSDK_OFFSET(0x1545B760)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_615E3F101116C791_TypeDefinitionIndex = 82445;

class Class_1_887DD3CF562F14DB_Class_1_615E3F101116C791 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_615E3F101116C791__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A9373A828D650E0(::MoleMole::Config::ConfigLockTargetMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargetMisc*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_615E3F101116C791_METHOD_1_8A9373A828D650E0_OFFSET))(this, a1);
	}
};
