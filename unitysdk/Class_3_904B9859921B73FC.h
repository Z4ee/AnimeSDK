#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_904B9859921B73FC_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1D82B160)
#define CLASS_3_904B9859921B73FC_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D82B1A0)
#define CLASS_3_904B9859921B73FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82B190)

inline static constexpr unsigned int Class_3_904B9859921B73FC_TypeDefinitionIndex = 23920;

class Class_3_904B9859921B73FC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::JsonEnum* OOOACLEFDGM; // 0x18
	::RPG::GameCore::TargetEvaluator* BBOFFGLPHCJ; // 0x20
	::RPG::GameCore::TargetEvaluator* CGNJAJMEKOI; // 0x28
	::RPG::GameCore::TargetEvaluator* BCJFPLDEDJE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_904B9859921B73FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_904B9859921B73FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_904B9859921B73FC*&))((::PBYTE)hIl2Cpp + CLASS_3_904B9859921B73FC_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_904B9859921B73FC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_904B9859921B73FC*))((::PBYTE)hIl2Cpp + CLASS_3_904B9859921B73FC_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
