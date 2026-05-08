#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCullingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_0220D9487410FD57_METHOD_1_D4DA70DBC2F0544A_OFFSET UNITYSDK_OFFSET(0x12DE9540)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_0220D9487410FD57__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE9530)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_0220D9487410FD57_TypeDefinitionIndex = 69925;

class Class_1_5C5D1BCD30A891BA_Class_1_0220D9487410FD57 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityCullingEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_0220D9487410FD57__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D4DA70DBC2F0544A(::MoleMole::Config::ConfigEntityCullingEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCullingEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_0220D9487410FD57_METHOD_1_D4DA70DBC2F0544A_OFFSET))(this, a1);
	}
};
