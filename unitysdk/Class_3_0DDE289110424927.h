#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_0DDE289110424927_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1D845960)
#define CLASS_3_0DDE289110424927_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1D845920)
#define CLASS_3_0DDE289110424927__CTOR_OFFSET UNITYSDK_OFFSET(0x1D845950)

inline static constexpr unsigned int Class_3_0DDE289110424927_TypeDefinitionIndex = 22904;

class Class_3_0DDE289110424927 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x18
	::RPG::GameCore::SilverWolf999UltraPropType GMPGDEINODK; // 0x20
	::RPG::GameCore::SilverWolf999UltraPropState MEPFOEEGBEA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DDE289110424927__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0DDE289110424927*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0DDE289110424927*&))((::PBYTE)hIl2Cpp + CLASS_3_0DDE289110424927_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0DDE289110424927* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0DDE289110424927*))((::PBYTE)hIl2Cpp + CLASS_3_0DDE289110424927_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
