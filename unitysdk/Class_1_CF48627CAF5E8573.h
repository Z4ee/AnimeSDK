#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_55FB143FAD52FF89;
class Class_2_14986121AA61AD99;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }

#define CLASS_1_CF48627CAF5E8573_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x157A4950)
#define CLASS_1_CF48627CAF5E8573__CTOR_OFFSET UNITYSDK_OFFSET(0x157A4940)

inline static constexpr unsigned int Class_1_CF48627CAF5E8573_TypeDefinitionIndex = 56817;

class Class_1_CF48627CAF5E8573 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::MoleMole::Config::ConfigEntityAttackProperty* Field_1_5; // 0x18
	::Class_1_55FB143FAD52FF89* Field_1_6; // 0x20
	::Class_2_14986121AA61AD99* Field_1_7; // 0x28
	::System::UInt32 Field_1_1; // 0x30
	::System::UInt32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF48627CAF5E8573__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF48627CAF5E8573_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
