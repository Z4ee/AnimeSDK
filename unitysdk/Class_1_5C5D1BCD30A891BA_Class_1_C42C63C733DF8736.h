#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C42C63C733DF8736_METHOD_1_512EBCD5CBE75DE4_OFFSET UNITYSDK_OFFSET(0x13F847A0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C42C63C733DF8736__CTOR_OFFSET UNITYSDK_OFFSET(0x13F84790)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_C42C63C733DF8736_TypeDefinitionIndex = 69939;

class Class_1_5C5D1BCD30A891BA_Class_1_C42C63C733DF8736 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityChannelMixerEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C42C63C733DF8736__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_512EBCD5CBE75DE4(::MoleMole::Config::ConfigEntityChannelMixerEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityChannelMixerEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C42C63C733DF8736_METHOD_1_512EBCD5CBE75DE4_OFFSET))(this, a1);
	}
};
