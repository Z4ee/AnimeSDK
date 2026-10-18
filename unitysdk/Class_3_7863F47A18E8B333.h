#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_7863F47A18E8B333_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CDDE830)
#define CLASS_3_7863F47A18E8B333_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CDDE880)
#define CLASS_3_7863F47A18E8B333__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDE870)

inline static constexpr unsigned int Class_3_7863F47A18E8B333_TypeDefinitionIndex = 23606;

class Class_3_7863F47A18E8B333 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* ALDLOOKHHGI; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7863F47A18E8B333__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7863F47A18E8B333*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7863F47A18E8B333*&))((::PBYTE)hIl2Cpp + CLASS_3_7863F47A18E8B333_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7863F47A18E8B333* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7863F47A18E8B333*))((::PBYTE)hIl2Cpp + CLASS_3_7863F47A18E8B333_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
