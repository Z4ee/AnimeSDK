#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundWave; }
namespace System { class Action; }

#define CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8_METHOD_1_FF2BD9A95E805AD6_1_OFFSET UNITYSDK_OFFSET(0x12F1BE20)
#define CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8_METHOD_1_FF2BD9A95E805AD6_OFFSET UNITYSDK_OFFSET(0x12F1BDF0)
#define CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1BDE0)

inline static constexpr unsigned int Class_1_7EC99A3E7537E218_Class_1_C3452C9FD0A25CA8_TypeDefinitionIndex = 80550;

class Class_1_7EC99A3E7537E218_Class_1_C3452C9FD0A25CA8 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF2BD9A95E805AD6(::MoleMole::Config::ConfigSoundWave* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundWave*))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8_METHOD_1_FF2BD9A95E805AD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF2BD9A95E805AD6_1(::MoleMole::Config::ConfigSoundWave* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundWave*))((::PBYTE)hIl2Cpp + CLASS_1_7EC99A3E7537E218_CLASS_1_C3452C9FD0A25CA8_METHOD_1_FF2BD9A95E805AD6_1_OFFSET))(this, a1);
	}
};
