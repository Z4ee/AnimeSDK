#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1D0F47C0)
#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1D0F4810)
#define CLASS_3_6DC0AFBFF6AC378E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4800)

inline static constexpr unsigned int Class_3_6DC0AFBFF6AC378E_TypeDefinitionIndex = 23328;

class Class_3_6DC0AFBFF6AC378E : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* FCGFFNKCLNJ; // 0x20
	::RPG::GameCore::TargetEvaluator* BLEOLOJJFDA; // 0x28
	::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x30
	::RPG::MVector3 MPFLMHPNOOB; // 0x38
	::System::Single MOAPMBBKJAK; // 0x44
	::RPG::MVector3 HAIBFNMDPKE; // 0x48
	::System::Boolean BGNCHHNAHEJ; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC0AFBFF6AC378E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC0AFBFF6AC378E*&))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC0AFBFF6AC378E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC0AFBFF6AC378E*))((::PBYTE)hIl2Cpp + CLASS_3_6DC0AFBFF6AC378E_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
