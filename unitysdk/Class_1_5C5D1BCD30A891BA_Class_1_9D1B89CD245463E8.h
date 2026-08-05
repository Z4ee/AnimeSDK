#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_9D1B89CD245463E8_METHOD_1_30184ED4A72D2061_OFFSET UNITYSDK_OFFSET(0x190306C0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_9D1B89CD245463E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1902FC20)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_9D1B89CD245463E8_TypeDefinitionIndex = 67667;

class Class_1_5C5D1BCD30A891BA_Class_1_9D1B89CD245463E8 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityFXFogEffects*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_9D1B89CD245463E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30184ED4A72D2061(::MoleMole::Config::ConfigEntityFXFogEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXFogEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_9D1B89CD245463E8_METHOD_1_30184ED4A72D2061_OFFSET))(this, a1);
	}
};
