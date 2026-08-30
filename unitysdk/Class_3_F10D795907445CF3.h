#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define CLASS_3_F10D795907445CF3_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1C8D0AB0)
#define CLASS_3_F10D795907445CF3_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1C8D0A70)
#define CLASS_3_F10D795907445CF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D0AA0)

inline static constexpr unsigned int Class_3_F10D795907445CF3_TypeDefinitionIndex = 23339;

class Class_3_F10D795907445CF3 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::ControlSkillType>* BFKINNEPCKC; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GEKIGCNCNBH; // 0x20
	::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x28
	::Il2CppArray<::RPG::GameCore::SkillType>* DCMBIGIDAHM; // 0x30
	::RPG::GameCore::PredicateConfig* EKIJFPIPCKF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F10D795907445CF3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F10D795907445CF3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F10D795907445CF3*&))((::PBYTE)hIl2Cpp + CLASS_3_F10D795907445CF3_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F10D795907445CF3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F10D795907445CF3*))((::PBYTE)hIl2Cpp + CLASS_3_F10D795907445CF3_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
