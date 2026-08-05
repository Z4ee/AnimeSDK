#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_AF9365C42F4F2A0B_METHOD_1_EE67CBBAA3EC7504_OFFSET UNITYSDK_OFFSET(0x1380BF90)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_AF9365C42F4F2A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1380BF80)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_AF9365C42F4F2A0B_TypeDefinitionIndex = 67649;

class Class_1_5C5D1BCD30A891BA_Class_1_AF9365C42F4F2A0B : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityVREffectsEffects*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_AF9365C42F4F2A0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EE67CBBAA3EC7504(::MoleMole::Config::ConfigEntityVREffectsEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityVREffectsEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_AF9365C42F4F2A0B_METHOD_1_EE67CBBAA3EC7504_OFFSET))(this, a1);
	}
};
