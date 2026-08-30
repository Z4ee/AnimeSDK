#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_3BB949405A89ECB2_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D83A480)
#define CLASS_3_3BB949405A89ECB2_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1D83A4E0)
#define CLASS_3_3BB949405A89ECB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83A4C0)

inline static constexpr unsigned int Class_3_3BB949405A89ECB2_TypeDefinitionIndex = 23450;

class Class_3_3BB949405A89ECB2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* IKGOAIEHFJD; // 0x20
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x28
	::RPG::GameCore::DynamicFloat* FKGOBKPKAAD; // 0x30
	::RPG::GameCore::PropertyModifyFunction NFCPJINGLGA; // 0x38
	::RPG::GameCore::PropertyModifyFunction OPILAJBILKM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BB949405A89ECB2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3BB949405A89ECB2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3BB949405A89ECB2*&))((::PBYTE)hIl2Cpp + CLASS_3_3BB949405A89ECB2_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3BB949405A89ECB2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3BB949405A89ECB2*))((::PBYTE)hIl2Cpp + CLASS_3_3BB949405A89ECB2_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
