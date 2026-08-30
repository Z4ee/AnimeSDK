#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_B354DCBC65484CB3_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1C7FA770)
#define CLASS_3_B354DCBC65484CB3_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1C7FA730)
#define CLASS_3_B354DCBC65484CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7FA760)

inline static constexpr unsigned int Class_3_B354DCBC65484CB3_TypeDefinitionIndex = 22598;

class Class_3_B354DCBC65484CB3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::HitBoxConfig* JHAPBIPNMOA; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean NMMJBGFDNAI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B354DCBC65484CB3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B354DCBC65484CB3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B354DCBC65484CB3*&))((::PBYTE)hIl2Cpp + CLASS_3_B354DCBC65484CB3_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B354DCBC65484CB3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B354DCBC65484CB3*))((::PBYTE)hIl2Cpp + CLASS_3_B354DCBC65484CB3_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
