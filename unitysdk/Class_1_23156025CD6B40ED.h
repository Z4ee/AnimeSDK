#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_23156025CD6B40ED_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x191F3D50)
#define CLASS_1_23156025CD6B40ED__CTOR_OFFSET UNITYSDK_OFFSET(0x191F4150)

inline static constexpr unsigned int Class_1_23156025CD6B40ED_TypeDefinitionIndex = 10800;

class Class_1_23156025CD6B40ED : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::System::String* Field_1_10; // 0x60
	::RPG::GameCore::DiceCombatDiceType Field_1_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23156025CD6B40ED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_23156025CD6B40ED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_23156025CD6B40ED*&))((::PBYTE)hIl2Cpp + CLASS_1_23156025CD6B40ED_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
