#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B674E53474CAF7B0_METHOD_1_92A43999FC3FD92F_OFFSET UNITYSDK_OFFSET(0x16CABC10)
#define CLASS_1_B674E53474CAF7B0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CABEA0)

inline static constexpr unsigned int Class_1_B674E53474CAF7B0_TypeDefinitionIndex = 10536;

class Class_1_B674E53474CAF7B0 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_5; // 0x28
	::RPG::GameCore::DiceCombatAnchorType Field_1_3; // 0x30
	::System::Single Field_1_4; // 0x34
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B674E53474CAF7B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_92A43999FC3FD92F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B674E53474CAF7B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B674E53474CAF7B0*&))((::PBYTE)hIl2Cpp + CLASS_1_B674E53474CAF7B0_METHOD_1_92A43999FC3FD92F_OFFSET))(a1, a2);
	}
};
