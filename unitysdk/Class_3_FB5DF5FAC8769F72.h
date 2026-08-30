#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_FB5DF5FAC8769F72_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1CA8F9C0)
#define CLASS_3_FB5DF5FAC8769F72_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1CA8FA00)
#define CLASS_3_FB5DF5FAC8769F72__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8F9F0)

inline static constexpr unsigned int Class_3_FB5DF5FAC8769F72_TypeDefinitionIndex = 20003;

class Class_3_FB5DF5FAC8769F72 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* BJOCBPFKJDP; // 0x20
	::RPG::GameCore::DynamicFloat* CONJAMJKHBI; // 0x28
	::System::Boolean EKGDOELGLFK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB5DF5FAC8769F72__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FB5DF5FAC8769F72*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FB5DF5FAC8769F72*&))((::PBYTE)hIl2Cpp + CLASS_3_FB5DF5FAC8769F72_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FB5DF5FAC8769F72* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FB5DF5FAC8769F72*))((::PBYTE)hIl2Cpp + CLASS_3_FB5DF5FAC8769F72_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
