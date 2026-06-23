#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_E0F04F68C95F8D9D_METHOD_1_F7A05E9A482EAE64_OFFSET UNITYSDK_OFFSET(0x1605E7B0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_E0F04F68C95F8D9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1605E7A0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_E0F04F68C95F8D9D_TypeDefinitionIndex = 77472;

class Class_1_5C5D1BCD30A891BA_Class_1_E0F04F68C95F8D9D : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityTonemappingEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_E0F04F68C95F8D9D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7A05E9A482EAE64(::MoleMole::Config::ConfigEntityTonemappingEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTonemappingEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_E0F04F68C95F8D9D_METHOD_1_F7A05E9A482EAE64_OFFSET))(this, a1);
	}
};
