#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EA28AF149A7A819C_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x1B9079A0)
#define CLASS_3_EA28AF149A7A819C_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1B907950)
#define CLASS_3_EA28AF149A7A819C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B907990)

inline static constexpr unsigned int Class_3_EA28AF149A7A819C_TypeDefinitionIndex = 23282;

class Class_3_EA28AF149A7A819C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ProjectileData* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::NewProjectileConfig* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x38
	::RPG::GameCore::FixPoint Field_3_5; // 0x40
	::System::Int32 Field_3_6; // 0x48
	::System::Boolean Field_3_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA28AF149A7A819C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA28AF149A7A819C*&))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA28AF149A7A819C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA28AF149A7A819C*))((::PBYTE)hIl2Cpp + CLASS_3_EA28AF149A7A819C_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
