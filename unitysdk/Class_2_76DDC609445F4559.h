#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_76DDC609445F4559_METHOD_2_D2ABE97028F8BA80_OFFSET UNITYSDK_OFFSET(0x1936DDD0)
#define CLASS_2_76DDC609445F4559__CTOR_OFFSET UNITYSDK_OFFSET(0x1936E1A0)

inline static constexpr unsigned int Class_2_76DDC609445F4559_TypeDefinitionIndex = 18996;

class Class_2_76DDC609445F4559 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::System::String*>* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Single Field_2_5; // 0x24
	::System::Single Field_2_6; // 0x28
	::System::Single Field_2_7; // 0x2C
	::System::Single Field_2_8; // 0x30
	::System::Single Field_2_9; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76DDC609445F4559__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_D2ABE97028F8BA80(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_76DDC609445F4559*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_76DDC609445F4559*&))((::PBYTE)hIl2Cpp + CLASS_2_76DDC609445F4559_METHOD_2_D2ABE97028F8BA80_OFFSET))(a1, a2);
	}
};
