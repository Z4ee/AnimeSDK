#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_0990EC08D39EA68F_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x187ADAE0)
#define CLASS_3_0990EC08D39EA68F_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x187ADB60)
#define CLASS_3_0990EC08D39EA68F__CTOR_OFFSET UNITYSDK_OFFSET(0x187ADB30)

inline static constexpr unsigned int Class_3_0990EC08D39EA68F_TypeDefinitionIndex = 21693;

class Class_3_0990EC08D39EA68F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0990EC08D39EA68F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0990EC08D39EA68F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0990EC08D39EA68F*&))((::PBYTE)hIl2Cpp + CLASS_3_0990EC08D39EA68F_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0990EC08D39EA68F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0990EC08D39EA68F*))((::PBYTE)hIl2Cpp + CLASS_3_0990EC08D39EA68F_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
