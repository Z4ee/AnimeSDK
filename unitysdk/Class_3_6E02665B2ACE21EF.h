#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_6E02665B2ACE21EF_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x19002170)
#define CLASS_3_6E02665B2ACE21EF_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x19002240)
#define CLASS_3_6E02665B2ACE21EF__CTOR_OFFSET UNITYSDK_OFFSET(0x190021F0)

inline static constexpr unsigned int Class_3_6E02665B2ACE21EF_TypeDefinitionIndex = 21377;

class Class_3_6E02665B2ACE21EF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

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
