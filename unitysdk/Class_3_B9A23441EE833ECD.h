#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCointFormulaTerm.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_B9A23441EE833ECD_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x1934D3C0)
#define CLASS_3_B9A23441EE833ECD_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x1934D440)
#define CLASS_3_B9A23441EE833ECD__CTOR_OFFSET UNITYSDK_OFFSET(0x1934D410)

inline static constexpr unsigned int Class_3_B9A23441EE833ECD_TypeDefinitionIndex = 20305;

class Class_3_B9A23441EE833ECD : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x39
	::System::Boolean Field_3_6; // 0x3A
	::System::UInt32 Field_3_7; // 0x3C
	::System::UInt32 Field_3_8; // 0x40
	::RPG::GameCore::ChenLingFesCointFormulaTerm Field_3_9; // 0x44
	::RPG::GameCore::ChenLingFesCointFormulaTerm Field_3_10; // 0x48
	::RPG::GameCore::ChenLingFesItemFilterType Field_3_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9A23441EE833ECD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B9A23441EE833ECD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B9A23441EE833ECD*&))((::PBYTE)hIl2Cpp + CLASS_3_B9A23441EE833ECD_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B9A23441EE833ECD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B9A23441EE833ECD*))((::PBYTE)hIl2Cpp + CLASS_3_B9A23441EE833ECD_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
