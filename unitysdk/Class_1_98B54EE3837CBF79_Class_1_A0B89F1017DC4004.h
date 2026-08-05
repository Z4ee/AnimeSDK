#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class Action; }

#define CLASS_1_98B54EE3837CBF79_CLASS_1_A0B89F1017DC4004_METHOD_1_8EB60D1E4659EC6B_OFFSET UNITYSDK_OFFSET(0x135D6910)
#define CLASS_1_98B54EE3837CBF79_CLASS_1_A0B89F1017DC4004__CTOR_OFFSET UNITYSDK_OFFSET(0x135D6900)

inline static constexpr unsigned int Class_1_98B54EE3837CBF79_Class_1_A0B89F1017DC4004_TypeDefinitionIndex = 77313;

class Class_1_98B54EE3837CBF79_Class_1_A0B89F1017DC4004 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_CLASS_1_A0B89F1017DC4004__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EB60D1E4659EC6B(::MoleMole::Config::ConfigSideScrollingLevel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_CLASS_1_A0B89F1017DC4004_METHOD_1_8EB60D1E4659EC6B_OFFSET))(this, a1);
	}
};
