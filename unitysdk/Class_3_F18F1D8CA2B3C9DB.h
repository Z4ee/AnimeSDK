#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_F18F1D8CA2B3C9DB_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D67C4B0)
#define CLASS_3_F18F1D8CA2B3C9DB_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1D67C500)
#define CLASS_3_F18F1D8CA2B3C9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D67C4F0)

inline static constexpr unsigned int Class_3_F18F1D8CA2B3C9DB_TypeDefinitionIndex = 23447;

class Class_3_F18F1D8CA2B3C9DB : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* OFLNJBCADMN; // 0x18
	::RPG::GameCore::JsonEnum* HMHJNMGOCLC; // 0x20
	::System::String* HDHCKOKMAGF; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::TargetEvaluator* KBFPDJJLDFA; // 0x38
	::System::Int32 NALMBOOCCIN; // 0x40
	::System::Boolean ICADPILMFPK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F18F1D8CA2B3C9DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F18F1D8CA2B3C9DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F18F1D8CA2B3C9DB*&))((::PBYTE)hIl2Cpp + CLASS_3_F18F1D8CA2B3C9DB_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F18F1D8CA2B3C9DB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F18F1D8CA2B3C9DB*))((::PBYTE)hIl2Cpp + CLASS_3_F18F1D8CA2B3C9DB_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
