#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_4;
namespace System { class String; }

#define CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x190F63A0)
#define CLASS_1_B553C21756B27967__CTOR_OFFSET UNITYSDK_OFFSET(0x190F68B0)

inline static constexpr unsigned int Class_1_B553C21756B27967_TypeDefinitionIndex = 10861;

class Class_1_B553C21756B27967 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* Field_1_2; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x38
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::System::UInt32 Field_1_9; // 0x50
	::RPG::GameCore::DiceCombatStageFirstType Field_1_10; // 0x54
	::System::UInt32 Field_1_11; // 0x58
	::System::UInt32 Field_1_12; // 0x5C
	::System::UInt32 Field_1_13; // 0x60
	::System::UInt32 Field_1_14; // 0x64
	::System::UInt32 Field_1_15; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B553C21756B27967*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B553C21756B27967*&))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
