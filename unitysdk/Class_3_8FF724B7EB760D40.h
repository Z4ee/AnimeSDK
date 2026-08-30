#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_8FF724B7EB760D40_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1D0E37C0)
#define CLASS_3_8FF724B7EB760D40_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1D0E3770)
#define CLASS_3_8FF724B7EB760D40__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E37B0)

inline static constexpr unsigned int Class_3_8FF724B7EB760D40_TypeDefinitionIndex = 22531;

class Class_3_8FF724B7EB760D40 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AHCBJENOJHJ; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean NLIAEJNBEKP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF724B7EB760D40__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FF724B7EB760D40*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FF724B7EB760D40*&))((::PBYTE)hIl2Cpp + CLASS_3_8FF724B7EB760D40_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FF724B7EB760D40* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FF724B7EB760D40*))((::PBYTE)hIl2Cpp + CLASS_3_8FF724B7EB760D40_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
