#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4E238268CD1D352A_METHOD_1_632730E57D7E90FB_OFFSET UNITYSDK_OFFSET(0x133434F0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4E238268CD1D352A__CTOR_OFFSET UNITYSDK_OFFSET(0x133434E0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_4E238268CD1D352A_TypeDefinitionIndex = 77462;

class Class_1_5C5D1BCD30A891BA_Class_1_4E238268CD1D352A : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntitySplitToningEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4E238268CD1D352A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_632730E57D7E90FB(::MoleMole::Config::ConfigEntitySplitToningEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySplitToningEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4E238268CD1D352A_METHOD_1_632730E57D7E90FB_OFFSET))(this, a1);
	}
};
