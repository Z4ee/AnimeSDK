#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_8EB752E7100D62B4_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1CD06760)
#define CLASS_3_8EB752E7100D62B4_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1CD06710)
#define CLASS_3_8EB752E7100D62B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD06750)

inline static constexpr unsigned int Class_3_8EB752E7100D62B4_TypeDefinitionIndex = 22292;

class Class_3_8EB752E7100D62B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::JsonEnum* LAONHAPDGGO; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x28
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EB752E7100D62B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8EB752E7100D62B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8EB752E7100D62B4*&))((::PBYTE)hIl2Cpp + CLASS_3_8EB752E7100D62B4_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8EB752E7100D62B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8EB752E7100D62B4*))((::PBYTE)hIl2Cpp + CLASS_3_8EB752E7100D62B4_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
