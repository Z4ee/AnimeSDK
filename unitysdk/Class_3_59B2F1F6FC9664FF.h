#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_59B2F1F6FC9664FF_METHOD_3_A0348A6F08F88F36_OFFSET UNITYSDK_OFFSET(0x1998CEA0)
#define CLASS_3_59B2F1F6FC9664FF_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1998CE20)
#define CLASS_3_59B2F1F6FC9664FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1998CE70)

inline static constexpr unsigned int Class_3_59B2F1F6FC9664FF_TypeDefinitionIndex = 21904;

class Class_3_59B2F1F6FC9664FF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::SilverWolf999UltraSkillUIState Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59B2F1F6FC9664FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_59B2F1F6FC9664FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_59B2F1F6FC9664FF*&))((::PBYTE)hIl2Cpp + CLASS_3_59B2F1F6FC9664FF_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0348A6F08F88F36(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_59B2F1F6FC9664FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_59B2F1F6FC9664FF*))((::PBYTE)hIl2Cpp + CLASS_3_59B2F1F6FC9664FF_METHOD_3_A0348A6F08F88F36_OFFSET))(a1, a2);
	}
};
