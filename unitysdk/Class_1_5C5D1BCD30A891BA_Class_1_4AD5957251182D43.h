#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLightingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4AD5957251182D43_METHOD_1_9A71C365CE36DB54_OFFSET UNITYSDK_OFFSET(0x12DE97B0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4AD5957251182D43__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE97A0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_4AD5957251182D43_TypeDefinitionIndex = 69911;

class Class_1_5C5D1BCD30A891BA_Class_1_4AD5957251182D43 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityLightingEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4AD5957251182D43__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A71C365CE36DB54(::MoleMole::Config::ConfigEntityLightingEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLightingEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4AD5957251182D43_METHOD_1_9A71C365CE36DB54_OFFSET))(this, a1);
	}
};
