#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }

#define CLASS_1_97622A4952ADEE55_CLASS_1_093D0D46DEC13A07_METHOD_1_F2BE09613D928AD2_OFFSET UNITYSDK_OFFSET(0x15FC5D30)
#define CLASS_1_97622A4952ADEE55_CLASS_1_093D0D46DEC13A07__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC5D20)

inline static constexpr unsigned int Class_1_97622A4952ADEE55_Class_1_093D0D46DEC13A07_TypeDefinitionIndex = 62677;

class Class_1_97622A4952ADEE55_Class_1_093D0D46DEC13A07 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_093D0D46DEC13A07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2BE09613D928AD2(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_093D0D46DEC13A07_METHOD_1_F2BE09613D928AD2_OFFSET))(this, a1);
	}
};
