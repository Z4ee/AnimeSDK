#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }

#define CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_0A31954335B0AC43_METHOD_1_FC2232110EA44F82_OFFSET UNITYSDK_OFFSET(0x171B4F20)
#define CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_0A31954335B0AC43__CTOR_OFFSET UNITYSDK_OFFSET(0x171B4F10)

inline static constexpr unsigned int Class_1_9AE6B2EF53E4E5A6_Class_1_0A31954335B0AC43_TypeDefinitionIndex = 44449;

class Class_1_9AE6B2EF53E4E5A6_Class_1_0A31954335B0AC43 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_0A31954335B0AC43__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC2232110EA44F82(::MoleMole::Config::LevelGlobalCounterstrokeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_0A31954335B0AC43_METHOD_1_FC2232110EA44F82_OFFSET))(this, a1);
	}
};
