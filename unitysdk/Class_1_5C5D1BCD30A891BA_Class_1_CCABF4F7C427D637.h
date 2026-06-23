#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDepthOfFieldEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_CCABF4F7C427D637_METHOD_1_4B38D0C2233FA9B0_OFFSET UNITYSDK_OFFSET(0x14E0E190)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_CCABF4F7C427D637__CTOR_OFFSET UNITYSDK_OFFSET(0x14E0E180)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_CCABF4F7C427D637_TypeDefinitionIndex = 77474;

class Class_1_5C5D1BCD30A891BA_Class_1_CCABF4F7C427D637 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigDepthOfFieldEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_CCABF4F7C427D637__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B38D0C2233FA9B0(::MoleMole::Config::ConfigDepthOfFieldEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDepthOfFieldEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_CCABF4F7C427D637_METHOD_1_4B38D0C2233FA9B0_OFFSET))(this, a1);
	}
};
