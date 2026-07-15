#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_7340287BD5632236_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1B5DFA80)
#define CLASS_3_7340287BD5632236_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1B5DFAC0)
#define CLASS_3_7340287BD5632236__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5DFAB0)

inline static constexpr unsigned int Class_3_7340287BD5632236_TypeDefinitionIndex = 22339;

class Class_3_7340287BD5632236 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28

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
