#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace System { class Action; }

#define CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5_METHOD_1_3C688C69C22D7CA5_OFFSET UNITYSDK_OFFSET(0xF618CC0)
#define CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5__CTOR_OFFSET UNITYSDK_OFFSET(0xF618CB0)

inline static constexpr unsigned int Class_1_39D55F044065DD63_Class_1_EDD361CC3084DFE5_TypeDefinitionIndex = 50212;

class Class_1_39D55F044065DD63_Class_1_EDD361CC3084DFE5 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C688C69C22D7CA5(::MoleMole::Config::ConfigGhostEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5_METHOD_1_3C688C69C22D7CA5_OFFSET))(this, a1);
	}
};
