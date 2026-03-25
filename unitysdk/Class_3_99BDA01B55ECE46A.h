#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialStatisticsType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_99BDA01B55ECE46A_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x16B7D730)
#define CLASS_3_99BDA01B55ECE46A_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x16B7D7B0)
#define CLASS_3_99BDA01B55ECE46A__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7D780)

inline static constexpr unsigned int Class_3_99BDA01B55ECE46A_TypeDefinitionIndex = 21468;

class Class_3_99BDA01B55ECE46A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::RPG::GameCore::AvatarSpecialStatisticsType Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99BDA01B55ECE46A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_99BDA01B55ECE46A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_99BDA01B55ECE46A*&))((::PBYTE)hIl2Cpp + CLASS_3_99BDA01B55ECE46A_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_99BDA01B55ECE46A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_99BDA01B55ECE46A*))((::PBYTE)hIl2Cpp + CLASS_3_99BDA01B55ECE46A_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
