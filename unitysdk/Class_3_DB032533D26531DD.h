#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_DB032533D26531DD_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1D3442F0)
#define CLASS_3_DB032533D26531DD_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1D344330)
#define CLASS_3_DB032533D26531DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D344320)

inline static constexpr unsigned int Class_3_DB032533D26531DD_TypeDefinitionIndex = 22218;

class Class_3_DB032533D26531DD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x20
	::RPG::GameCore::TargetEvaluator* KBFPDJJLDFA; // 0x28
	::RPG::GameCore::FloatCurve* NPMMJCIGLJP; // 0x30
	::RPG::GameCore::DynamicFloat* BJOCBPFKJDP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB032533D26531DD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB032533D26531DD*&))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB032533D26531DD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB032533D26531DD*))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
