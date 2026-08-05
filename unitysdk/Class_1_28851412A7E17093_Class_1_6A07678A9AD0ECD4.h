#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectScriptConfig; }
namespace System { class Action; }

#define CLASS_1_28851412A7E17093_CLASS_1_6A07678A9AD0ECD4_METHOD_1_442EA482A5118F4C_OFFSET UNITYSDK_OFFSET(0x15544BD0)
#define CLASS_1_28851412A7E17093_CLASS_1_6A07678A9AD0ECD4__CTOR_OFFSET UNITYSDK_OFFSET(0x155449B0)

inline static constexpr unsigned int Class_1_28851412A7E17093_Class_1_6A07678A9AD0ECD4_TypeDefinitionIndex = 44186;

class Class_1_28851412A7E17093_Class_1_6A07678A9AD0ECD4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_6A07678A9AD0ECD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_442EA482A5118F4C(::MoleMole::Config::ItemDropEffectScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ItemDropEffectScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_6A07678A9AD0ECD4_METHOD_1_442EA482A5118F4C_OFFSET))(this, a1);
	}
};
