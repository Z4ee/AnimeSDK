#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EA28AF149A7A819C_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x1D7130B0)
#define CLASS_3_EA28AF149A7A819C_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1D713060)
#define CLASS_3_EA28AF149A7A819C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7130A0)

inline static constexpr unsigned int Class_3_EA28AF149A7A819C_TypeDefinitionIndex = 23862;

class Class_3_EA28AF149A7A819C : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x18
	::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x20
	::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x38
	::RPG::GameCore::FixPoint JKDFIMCIKFJ; // 0x40
	::System::Boolean FKJPBMMCHFL; // 0x48
	::System::Int32 HCDEOKNIGKG; // 0x4C

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
