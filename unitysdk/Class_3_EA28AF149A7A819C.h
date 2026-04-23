#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EA28AF149A7A819C_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x18434150)
#define CLASS_3_EA28AF149A7A819C_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x184340C0)
#define CLASS_3_EA28AF149A7A819C__CTOR_OFFSET UNITYSDK_OFFSET(0x18434120)

inline static constexpr unsigned int Class_3_EA28AF149A7A819C_TypeDefinitionIndex = 23134;

class Class_3_EA28AF149A7A819C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ProjectileData* Field_3_4; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_7; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x30
	::RPG::GameCore::NewProjectileConfig* Field_3_5; // 0x38
	::System::Int32 Field_3_2; // 0x40
	::System::Boolean Field_3_6; // 0x44
	::RPG::GameCore::FixPoint Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA28AF149A7A819C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA28AF149A7A819C*&))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA28AF149A7A819C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA28AF149A7A819C*))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
