#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_7340287BD5632236_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1A3F3E80)
#define CLASS_3_7340287BD5632236_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1A3F3EC0)
#define CLASS_3_7340287BD5632236__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F3EB0)

inline static constexpr unsigned int Class_3_7340287BD5632236_TypeDefinitionIndex = 22908;

class Class_3_7340287BD5632236 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7340287BD5632236__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7340287BD5632236*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7340287BD5632236*&))((::PBYTE)hIl2Cpp + CLASS_3_7340287BD5632236_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7340287BD5632236* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7340287BD5632236*))((::PBYTE)hIl2Cpp + CLASS_3_7340287BD5632236_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
