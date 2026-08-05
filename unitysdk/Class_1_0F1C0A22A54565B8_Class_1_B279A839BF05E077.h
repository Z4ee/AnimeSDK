#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace System { class Action; }

#define CLASS_1_0F1C0A22A54565B8_CLASS_1_B279A839BF05E077_METHOD_1_A7C7801D1F1F9417_OFFSET UNITYSDK_OFFSET(0x1493B970)
#define CLASS_1_0F1C0A22A54565B8_CLASS_1_B279A839BF05E077__CTOR_OFFSET UNITYSDK_OFFSET(0x1493B960)

inline static constexpr unsigned int Class_1_0F1C0A22A54565B8_Class_1_B279A839BF05E077_TypeDefinitionIndex = 51734;

class Class_1_0F1C0A22A54565B8_Class_1_B279A839BF05E077 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_B279A839BF05E077__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7C7801D1F1F9417(::MoleMole::Config::EffectPatternInfoConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_B279A839BF05E077_METHOD_1_A7C7801D1F1F9417_OFFSET))(this, a1);
	}
};
