#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_9A6D4F83FEFEE2DE_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1C72CE80)
#define CLASS_3_9A6D4F83FEFEE2DE_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1C72CEC0)
#define CLASS_3_9A6D4F83FEFEE2DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72CEB0)

inline static constexpr unsigned int Class_3_9A6D4F83FEFEE2DE_TypeDefinitionIndex = 22910;

class Class_3_9A6D4F83FEFEE2DE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ElationCharacterUIConfig* OLOKHEMMGOH; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean EKGDOELGLFK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A6D4F83FEFEE2DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A6D4F83FEFEE2DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A6D4F83FEFEE2DE*&))((::PBYTE)hIl2Cpp + CLASS_3_9A6D4F83FEFEE2DE_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A6D4F83FEFEE2DE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A6D4F83FEFEE2DE*))((::PBYTE)hIl2Cpp + CLASS_3_9A6D4F83FEFEE2DE_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
