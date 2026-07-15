#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x1ACE88D0)
#define CLASS_3_EF56094F6F872DBC_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1ACE8890)
#define CLASS_3_EF56094F6F872DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE88C0)

inline static constexpr unsigned int Class_3_EF56094F6F872DBC_TypeDefinitionIndex = 21600;

class Class_3_EF56094F6F872DBC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::Int32 Field_3_1; // 0x20
	::System::Int32 Field_3_2; // 0x24
	::System::Int32 Field_3_3; // 0x28
	::System::Boolean Field_3_4; // 0x2C
	::System::Boolean Field_3_5; // 0x2D
	::System::Boolean Field_3_6; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*&))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0F51127D996814D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET))(a1, a2);
	}
};
