#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }

#define CLASS_1_F96A49B93877600A_CLASS_1_2D3487E97C58D6F8_METHOD_1_1219859C52413527_OFFSET UNITYSDK_OFFSET(0x14E9AA10)
#define CLASS_1_F96A49B93877600A_CLASS_1_2D3487E97C58D6F8__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9AA00)

inline static constexpr unsigned int Class_1_F96A49B93877600A_Class_1_2D3487E97C58D6F8_TypeDefinitionIndex = 77544;

class Class_1_F96A49B93877600A_Class_1_2D3487E97C58D6F8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_CLASS_1_2D3487E97C58D6F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1219859C52413527(::MoleMole::Config::ConfigGroupVideo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGroupVideo*))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_CLASS_1_2D3487E97C58D6F8_METHOD_1_1219859C52413527_OFFSET))(this, a1);
	}
};
