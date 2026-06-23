#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace System { class Action; }

#define CLASS_1_52E4C685535EF42E_CLASS_1_515B8ABEEF971169_METHOD_1_36B197E35493B4F3_OFFSET UNITYSDK_OFFSET(0x115CE940)
#define CLASS_1_52E4C685535EF42E_CLASS_1_515B8ABEEF971169__CTOR_OFFSET UNITYSDK_OFFSET(0x115CE930)

inline static constexpr unsigned int Class_1_52E4C685535EF42E_Class_1_515B8ABEEF971169_TypeDefinitionIndex = 43031;

class Class_1_52E4C685535EF42E_Class_1_515B8ABEEF971169 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_CLASS_1_515B8ABEEF971169__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36B197E35493B4F3(::MoleMole::Config::ConfigSkinMdb* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinMdb*))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_CLASS_1_515B8ABEEF971169_METHOD_1_36B197E35493B4F3_OFFSET))(this, a1);
	}
};
