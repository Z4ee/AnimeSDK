#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorLookupEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_71284996A38F0F43_METHOD_1_0ABF3C8836FA1811_OFFSET UNITYSDK_OFFSET(0x10B8A750)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_71284996A38F0F43__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8A740)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_71284996A38F0F43_TypeDefinitionIndex = 69927;

class Class_1_5C5D1BCD30A891BA_Class_1_71284996A38F0F43 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityColorLookupEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_71284996A38F0F43__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0ABF3C8836FA1811(::MoleMole::Config::ConfigEntityColorLookupEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorLookupEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_71284996A38F0F43_METHOD_1_0ABF3C8836FA1811_OFFSET))(this, a1);
	}
};
