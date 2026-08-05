#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCausticsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_A5F33EDE25FF84FA_METHOD_1_FF5C64B7D8176CB7_OFFSET UNITYSDK_OFFSET(0x11592E70)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_A5F33EDE25FF84FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11592E60)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_A5F33EDE25FF84FA_TypeDefinitionIndex = 67668;

class Class_1_5C5D1BCD30A891BA_Class_1_A5F33EDE25FF84FA : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityCausticsEffects*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_A5F33EDE25FF84FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF5C64B7D8176CB7(::MoleMole::Config::ConfigEntityCausticsEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCausticsEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_A5F33EDE25FF84FA_METHOD_1_FF5C64B7D8176CB7_OFFSET))(this, a1);
	}
};
