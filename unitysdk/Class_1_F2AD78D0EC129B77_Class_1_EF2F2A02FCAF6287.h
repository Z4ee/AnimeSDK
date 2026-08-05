#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }

#define CLASS_1_F2AD78D0EC129B77_CLASS_1_EF2F2A02FCAF6287_METHOD_1_790EBA2DB6F7F364_OFFSET UNITYSDK_OFFSET(0x12A82810)
#define CLASS_1_F2AD78D0EC129B77_CLASS_1_EF2F2A02FCAF6287__CTOR_OFFSET UNITYSDK_OFFSET(0x12A82800)

inline static constexpr unsigned int Class_1_F2AD78D0EC129B77_Class_1_EF2F2A02FCAF6287_TypeDefinitionIndex = 42565;

class Class_1_F2AD78D0EC129B77_Class_1_EF2F2A02FCAF6287 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_EF2F2A02FCAF6287__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_790EBA2DB6F7F364(::MoleMole::ConfigUIFish* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_EF2F2A02FCAF6287_METHOD_1_790EBA2DB6F7F364_OFFSET))(this, a1);
	}
};
