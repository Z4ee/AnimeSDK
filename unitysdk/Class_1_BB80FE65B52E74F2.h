#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_BB80FE65B52E74F2_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x18FFF240)
#define CLASS_1_BB80FE65B52E74F2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FFF550)

inline static constexpr unsigned int Class_1_BB80FE65B52E74F2_TypeDefinitionIndex = 10815;

class Class_1_BB80FE65B52E74F2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x44
	::RPG::GameCore::DiceCombatAnchorType Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB80FE65B52E74F2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BB80FE65B52E74F2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BB80FE65B52E74F2*&))((::PBYTE)hIl2Cpp + CLASS_1_BB80FE65B52E74F2_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
