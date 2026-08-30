#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_70ED0D5D94C4D7FF_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1CF991F0)
#define CLASS_3_70ED0D5D94C4D7FF_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1CF99230)
#define CLASS_3_70ED0D5D94C4D7FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF99220)

inline static constexpr unsigned int Class_3_70ED0D5D94C4D7FF_TypeDefinitionIndex = 19722;

class Class_3_70ED0D5D94C4D7FF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean GNDCCBNILML; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70ED0D5D94C4D7FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_70ED0D5D94C4D7FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_70ED0D5D94C4D7FF*&))((::PBYTE)hIl2Cpp + CLASS_3_70ED0D5D94C4D7FF_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_70ED0D5D94C4D7FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_70ED0D5D94C4D7FF*))((::PBYTE)hIl2Cpp + CLASS_3_70ED0D5D94C4D7FF_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
