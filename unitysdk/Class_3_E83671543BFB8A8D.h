#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_E83671543BFB8A8D_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x1CB39F60)
#define CLASS_3_E83671543BFB8A8D_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CB3A000)
#define CLASS_3_E83671543BFB8A8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB39FC0)

inline static constexpr unsigned int Class_3_E83671543BFB8A8D_TypeDefinitionIndex = 22623;

class Class_3_E83671543BFB8A8D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* LOHDABKNJCO; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::SkillType JBCBONFABOM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E83671543BFB8A8D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E83671543BFB8A8D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E83671543BFB8A8D*&))((::PBYTE)hIl2Cpp + CLASS_3_E83671543BFB8A8D_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E83671543BFB8A8D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E83671543BFB8A8D*))((::PBYTE)hIl2Cpp + CLASS_3_E83671543BFB8A8D_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
