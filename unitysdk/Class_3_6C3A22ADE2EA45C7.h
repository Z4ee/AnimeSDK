#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCointFormulaTerm.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6C3A22ADE2EA45C7_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1B3B1840)
#define CLASS_3_6C3A22ADE2EA45C7_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x1B3B1880)
#define CLASS_3_6C3A22ADE2EA45C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B1870)

inline static constexpr unsigned int Class_3_6C3A22ADE2EA45C7_TypeDefinitionIndex = 20699;

class Class_3_6C3A22ADE2EA45C7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::ChenLingFesCointFormulaTerm Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x3C
	::System::Boolean Field_3_6; // 0x3D
	::System::Boolean Field_3_7; // 0x3E
	::RPG::GameCore::ChenLingFesCointFormulaTerm Field_3_8; // 0x40
	::System::UInt32 Field_3_9; // 0x44
	::RPG::GameCore::ChenLingFesItemFilterType Field_3_10; // 0x48
	::System::UInt32 Field_3_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C3A22ADE2EA45C7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C3A22ADE2EA45C7*&))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C3A22ADE2EA45C7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C3A22ADE2EA45C7*))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
