#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EE85A65D36535F43_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1CFCD880)
#define CLASS_3_EE85A65D36535F43_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1CFCD8C0)
#define CLASS_3_EE85A65D36535F43__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCD8B0)

inline static constexpr unsigned int Class_3_EE85A65D36535F43_TypeDefinitionIndex = 23884;

class Class_3_EE85A65D36535F43 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CABHEAGLNDD; // 0x18
	::RPG::GameCore::RtLifeBindingConfig* ECNHHNDAHKB; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE85A65D36535F43__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EE85A65D36535F43*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EE85A65D36535F43*&))((::PBYTE)hIl2Cpp + CLASS_3_EE85A65D36535F43_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EE85A65D36535F43* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EE85A65D36535F43*))((::PBYTE)hIl2Cpp + CLASS_3_EE85A65D36535F43_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
