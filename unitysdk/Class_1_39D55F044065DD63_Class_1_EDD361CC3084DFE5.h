#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace System { class Action; }

#define CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5_METHOD_1_3C688C69C22D7CA5_OFFSET UNITYSDK_OFFSET(0x12A04D50)
#define CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5__CTOR_OFFSET UNITYSDK_OFFSET(0x12A04D40)

inline static constexpr unsigned int Class_1_39D55F044065DD63_Class_1_EDD361CC3084DFE5_TypeDefinitionIndex = 68766;

class Class_1_39D55F044065DD63_Class_1_EDD361CC3084DFE5 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C688C69C22D7CA5(::MoleMole::Config::ConfigGhostEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_EDD361CC3084DFE5_METHOD_1_3C688C69C22D7CA5_OFFSET))(this, a1);
	}
};
