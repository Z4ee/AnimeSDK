#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_6E02665B2ACE21EF_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x1CC981A0)
#define CLASS_3_6E02665B2ACE21EF_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CC982E0)
#define CLASS_3_6E02665B2ACE21EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC98250)

inline static constexpr unsigned int Class_3_6E02665B2ACE21EF_TypeDefinitionIndex = 22552;

class Class_3_6E02665B2ACE21EF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* OKCDNKKJFOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E02665B2ACE21EF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6E02665B2ACE21EF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6E02665B2ACE21EF*&))((::PBYTE)hIl2Cpp + CLASS_3_6E02665B2ACE21EF_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6E02665B2ACE21EF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6E02665B2ACE21EF*))((::PBYTE)hIl2Cpp + CLASS_3_6E02665B2ACE21EF_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
