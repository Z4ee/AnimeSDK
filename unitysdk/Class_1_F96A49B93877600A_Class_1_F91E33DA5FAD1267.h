#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }

#define CLASS_1_F96A49B93877600A_CLASS_1_F91E33DA5FAD1267_METHOD_1_F7177A19A8F97E12_OFFSET UNITYSDK_OFFSET(0x12C8C5F0)
#define CLASS_1_F96A49B93877600A_CLASS_1_F91E33DA5FAD1267__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8C5E0)

inline static constexpr unsigned int Class_1_F96A49B93877600A_Class_1_F91E33DA5FAD1267_TypeDefinitionIndex = 49755;

class Class_1_F96A49B93877600A_Class_1_F91E33DA5FAD1267 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_CLASS_1_F91E33DA5FAD1267__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7177A19A8F97E12(::MoleMole::Config::ConfigGroupVideo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGroupVideo*))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_CLASS_1_F91E33DA5FAD1267_METHOD_1_F7177A19A8F97E12_OFFSET))(this, a1);
	}
};
