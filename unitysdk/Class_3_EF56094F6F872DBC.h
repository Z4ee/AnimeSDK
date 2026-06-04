#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x18F6DC70)
#define CLASS_3_EF56094F6F872DBC_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x18F6DBF0)
#define CLASS_3_EF56094F6F872DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6DC40)

inline static constexpr unsigned int Class_3_EF56094F6F872DBC_TypeDefinitionIndex = 21185;

class Class_3_EF56094F6F872DBC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::Int32 Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x24
	::System::Boolean Field_3_3; // 0x25
	::System::Boolean Field_3_4; // 0x26
	::System::Int32 Field_3_5; // 0x28
	::System::Int32 Field_3_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*&))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0F51127D996814D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET))(a1, a2);
	}
};
