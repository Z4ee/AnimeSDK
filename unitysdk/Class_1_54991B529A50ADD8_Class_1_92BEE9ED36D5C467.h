#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }

#define CLASS_1_54991B529A50ADD8_CLASS_1_92BEE9ED36D5C467_METHOD_1_C63BA8530EC1177A_OFFSET UNITYSDK_OFFSET(0x141DF440)
#define CLASS_1_54991B529A50ADD8_CLASS_1_92BEE9ED36D5C467__CTOR_OFFSET UNITYSDK_OFFSET(0x141DF430)

inline static constexpr unsigned int Class_1_54991B529A50ADD8_Class_1_92BEE9ED36D5C467_TypeDefinitionIndex = 60872;

class Class_1_54991B529A50ADD8_Class_1_92BEE9ED36D5C467 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_CLASS_1_92BEE9ED36D5C467__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C63BA8530EC1177A(::MoleMole::Config::ConfigSceneSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSceneSound*))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_CLASS_1_92BEE9ED36D5C467_METHOD_1_C63BA8530EC1177A_OFFSET))(this, a1);
	}
};
