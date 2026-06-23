#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinPreview; }
namespace System { class Action; }

#define CLASS_1_514987318BCBE1AA_CLASS_1_4B8D44D8BD21EE5F_METHOD_1_1E956ADC425891BC_OFFSET UNITYSDK_OFFSET(0x13491B40)
#define CLASS_1_514987318BCBE1AA_CLASS_1_4B8D44D8BD21EE5F__CTOR_OFFSET UNITYSDK_OFFSET(0x13491B30)

inline static constexpr unsigned int Class_1_514987318BCBE1AA_Class_1_4B8D44D8BD21EE5F_TypeDefinitionIndex = 74510;

class Class_1_514987318BCBE1AA_Class_1_4B8D44D8BD21EE5F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_514987318BCBE1AA_CLASS_1_4B8D44D8BD21EE5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E956ADC425891BC(::MoleMole::Config::ConfigSkinPreview* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinPreview*))((::PBYTE)hIl2Cpp + CLASS_1_514987318BCBE1AA_CLASS_1_4B8D44D8BD21EE5F_METHOD_1_1E956ADC425891BC_OFFSET))(this, a1);
	}
};
