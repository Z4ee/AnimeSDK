#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPartialBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_809925CE51F26E0B_METHOD_1_9A8FDEF5BBF3070A_OFFSET UNITYSDK_OFFSET(0x11D66850)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_809925CE51F26E0B__CTOR_OFFSET UNITYSDK_OFFSET(0x11D66840)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_809925CE51F26E0B_TypeDefinitionIndex = 77441;

class Class_1_5C5D1BCD30A891BA_Class_1_809925CE51F26E0B : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityPartialBlurEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_809925CE51F26E0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A8FDEF5BBF3070A(::MoleMole::Config::ConfigEntityPartialBlurEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityPartialBlurEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_809925CE51F26E0B_METHOD_1_9A8FDEF5BBF3070A_OFFSET))(this, a1);
	}
};
