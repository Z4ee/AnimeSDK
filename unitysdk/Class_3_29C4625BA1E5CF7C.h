#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_29C4625BA1E5CF7C_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x18BA3DB0)
#define CLASS_3_29C4625BA1E5CF7C_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x18BA3E30)
#define CLASS_3_29C4625BA1E5CF7C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA3E00)

inline static constexpr unsigned int Class_3_29C4625BA1E5CF7C_TypeDefinitionIndex = 22119;

class Class_3_29C4625BA1E5CF7C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::SilverWolf999UltraPropType Field_3_1; // 0x20
	::RPG::GameCore::SilverWolf999UltraPropState Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29C4625BA1E5CF7C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_29C4625BA1E5CF7C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_29C4625BA1E5CF7C*&))((::PBYTE)hIl2Cpp + CLASS_3_29C4625BA1E5CF7C_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_29C4625BA1E5CF7C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_29C4625BA1E5CF7C*))((::PBYTE)hIl2Cpp + CLASS_3_29C4625BA1E5CF7C_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
