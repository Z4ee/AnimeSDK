#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_23B39347C60B73DC_CLASS_1_E66E0ACF3E317DB1_METHOD_1_31AD41FF984562CF_OFFSET UNITYSDK_OFFSET(0x13A1AAF0)
#define CLASS_1_23B39347C60B73DC_CLASS_1_E66E0ACF3E317DB1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1AAE0)

inline static constexpr unsigned int Class_1_23B39347C60B73DC_Class_1_E66E0ACF3E317DB1_TypeDefinitionIndex = 50670;

class Class_1_23B39347C60B73DC_Class_1_E66E0ACF3E317DB1 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigRealtimeQTE*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_CLASS_1_E66E0ACF3E317DB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31AD41FF984562CF(::MoleMole::Config::ConfigRealtimeQTE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_CLASS_1_E66E0ACF3E317DB1_METHOD_1_31AD41FF984562CF_OFFSET))(this, a1);
	}
};
