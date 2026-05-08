#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1F43E3BB90B4444E_METHOD_1_FF8030161E8337A7_OFFSET UNITYSDK_OFFSET(0xDAE6F80)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1F43E3BB90B4444E__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE6F70)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_1F43E3BB90B4444E_TypeDefinitionIndex = 69923;

class Class_1_5C5D1BCD30A891BA_Class_1_1F43E3BB90B4444E : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityLensDirtEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1F43E3BB90B4444E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF8030161E8337A7(::MoleMole::Config::ConfigEntityLensDirtEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLensDirtEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1F43E3BB90B4444E_METHOD_1_FF8030161E8337A7_OFFSET))(this, a1);
	}
};
