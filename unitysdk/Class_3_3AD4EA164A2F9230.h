#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_3AD4EA164A2F9230_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D0F46F0)
#define CLASS_3_3AD4EA164A2F9230_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1D0F4730)
#define CLASS_3_3AD4EA164A2F9230__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4720)

inline static constexpr unsigned int Class_3_3AD4EA164A2F9230_TypeDefinitionIndex = 22866;

class Class_3_3AD4EA164A2F9230 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* JGNLDDCGADA; // 0x18
	::System::String* ECNKCCNJNPJ; // 0x20
	::RPG::GameCore::DynamicFloat* HHBJNOFIPBF; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::DynamicFloat* ADGJCGAHHJG; // 0x38
	::RPG::GameCore::DynamicFloat* KKHMOJLEPFP; // 0x40
	::RPG::GameCore::DynamicFloat* JNBLBDLALGE; // 0x48
	::RPG::MVector3 OMDDHOJDHKH; // 0x50
	::System::Boolean BIADECNNCJA; // 0x5C
	::System::Boolean FPIJPODLMJH; // 0x5D
	::System::Boolean ENNJNFLANBI; // 0x5E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3AD4EA164A2F9230*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3AD4EA164A2F9230*&))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3AD4EA164A2F9230* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3AD4EA164A2F9230*))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
