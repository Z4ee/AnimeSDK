#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }

#define CLASS_1_256175E7E67079F0_CLASS_1_96FF4F407A35C156_METHOD_1_15E1994368B21C42_OFFSET UNITYSDK_OFFSET(0x17F47F50)
#define CLASS_1_256175E7E67079F0_CLASS_1_96FF4F407A35C156__CTOR_OFFSET UNITYSDK_OFFSET(0x17F47F40)

inline static constexpr unsigned int Class_1_256175E7E67079F0_Class_1_96FF4F407A35C156_TypeDefinitionIndex = 60980;

class Class_1_256175E7E67079F0_Class_1_96FF4F407A35C156 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_96FF4F407A35C156__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_15E1994368B21C42(::MoleMole::Config::ConfigViewObjectMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_96FF4F407A35C156_METHOD_1_15E1994368B21C42_OFFSET))(this, a1);
	}
};
