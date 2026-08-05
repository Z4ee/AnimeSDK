#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_1AFC0A21A6062417_CLASS_1_4A376B2DFE0877FB_METHOD_1_C2943BF71F922824_OFFSET UNITYSDK_OFFSET(0x169C8710)
#define CLASS_1_1AFC0A21A6062417_CLASS_1_4A376B2DFE0877FB__CTOR_OFFSET UNITYSDK_OFFSET(0x169C8700)

inline static constexpr unsigned int Class_1_1AFC0A21A6062417_Class_1_4A376B2DFE0877FB_TypeDefinitionIndex = 84900;

class Class_1_1AFC0A21A6062417_Class_1_4A376B2DFE0877FB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_4A376B2DFE0877FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C2943BF71F922824(::MoleMole::Config::ConfigPlayerAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_4A376B2DFE0877FB_METHOD_1_C2943BF71F922824_OFFSET))(this, a1);
	}
};
