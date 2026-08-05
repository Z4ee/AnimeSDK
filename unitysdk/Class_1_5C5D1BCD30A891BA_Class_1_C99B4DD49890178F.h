#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C99B4DD49890178F_METHOD_1_1D19CD71312C7DE1_OFFSET UNITYSDK_OFFSET(0x156FC6B0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C99B4DD49890178F__CTOR_OFFSET UNITYSDK_OFFSET(0x156FC6A0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_C99B4DD49890178F_TypeDefinitionIndex = 67665;

class Class_1_5C5D1BCD30A891BA_Class_1_C99B4DD49890178F : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C99B4DD49890178F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1D19CD71312C7DE1(::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C99B4DD49890178F_METHOD_1_1D19CD71312C7DE1_OFFSET))(this, a1);
	}
};
