#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }

#define CLASS_1_5D5DF35A4FB26D1E_CLASS_1_C7E7EE5C584E599A_METHOD_1_9946472A39A626A3_OFFSET UNITYSDK_OFFSET(0x10142D20)
#define CLASS_1_5D5DF35A4FB26D1E_CLASS_1_C7E7EE5C584E599A__CTOR_OFFSET UNITYSDK_OFFSET(0x10142D10)

inline static constexpr unsigned int Class_1_5D5DF35A4FB26D1E_Class_1_C7E7EE5C584E599A_TypeDefinitionIndex = 51213;

class Class_1_5D5DF35A4FB26D1E_Class_1_C7E7EE5C584E599A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_CLASS_1_C7E7EE5C584E599A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9946472A39A626A3(::MoleMole::ConfigUILight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILight*))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_CLASS_1_C7E7EE5C584E599A_METHOD_1_9946472A39A626A3_OFFSET))(this, a1);
	}
};
