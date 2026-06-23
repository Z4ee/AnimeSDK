#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCaches; }
namespace System { class Action; }

#define CLASS_1_7A6E8680968BC407_CLASS_1_E0F730402BF0720A_METHOD_1_9AB2B88E37CD090B_OFFSET UNITYSDK_OFFSET(0xF5BD090)
#define CLASS_1_7A6E8680968BC407_CLASS_1_E0F730402BF0720A__CTOR_OFFSET UNITYSDK_OFFSET(0xF5BD080)

inline static constexpr unsigned int Class_1_7A6E8680968BC407_Class_1_E0F730402BF0720A_TypeDefinitionIndex = 74500;

class Class_1_7A6E8680968BC407_Class_1_E0F730402BF0720A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_E0F730402BF0720A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9AB2B88E37CD090B(::MoleMole::Config::ConfigTriggerCaches* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_E0F730402BF0720A_METHOD_1_9AB2B88E37CD090B_OFFSET))(this, a1);
	}
};
