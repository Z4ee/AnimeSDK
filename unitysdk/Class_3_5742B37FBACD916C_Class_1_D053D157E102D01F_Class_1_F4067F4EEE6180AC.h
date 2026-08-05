#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7BF98046FA3EA064;
namespace MoleMole::Config { class InteractEntry; }

#define CLASS_3_5742B37FBACD916C_CLASS_1_D053D157E102D01F_CLASS_1_F4067F4EEE6180AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E66E00)
#define CLASS_3_5742B37FBACD916C_CLASS_1_D053D157E102D01F_CLASS_1_F4067F4EEE6180AC__CTOR_OFFSET UNITYSDK_OFFSET(0x13E66D90)

inline static constexpr unsigned int Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F_Class_1_F4067F4EEE6180AC_TypeDefinitionIndex = 62128;

class Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F_Class_1_F4067F4EEE6180AC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F_Class_1_F4067F4EEE6180AC_TypeDefinitionIndex)->GetStaticField(0xEA60);
	}
	::Class_3_7BF98046FA3EA064* Field_1_4; // 0x10
	::System::Object* Field_1_6; // 0x18
	::MoleMole::Config::InteractEntry* Field_1_5; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Boolean Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_CLASS_1_D053D157E102D01F_CLASS_1_F4067F4EEE6180AC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_CLASS_1_D053D157E102D01F_CLASS_1_F4067F4EEE6180AC__CCTOR_OFFSET))();
	}
};
