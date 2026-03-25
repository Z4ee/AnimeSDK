#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_143072C8E486923E_METHOD_1_C779E333F2875688_OFFSET UNITYSDK_OFFSET(0x16BAE670)
#define CLASS_1_143072C8E486923E__CTOR_OFFSET UNITYSDK_OFFSET(0x16BAE9E0)

inline static constexpr unsigned int Class_1_143072C8E486923E_TypeDefinitionIndex = 10521;

class Class_1_143072C8E486923E : public ::System::Object
{
public:
	::System::String* Field_1_9; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_3; // 0x28
	::Il2CppArray<::System::Single>* Field_1_1; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_8; // 0x40
	::System::String* Field_1_4; // 0x48
	::System::String* Field_1_2; // 0x50
	::RPG::GameCore::DiceCombatDiceType Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_143072C8E486923E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C779E333F2875688(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_143072C8E486923E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_143072C8E486923E*&))((::PBYTE)hIl2Cpp + CLASS_1_143072C8E486923E_METHOD_1_C779E333F2875688_OFFSET))(a1, a2);
	}
};
