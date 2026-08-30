#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1CB364C0)
#define CLASS_3_6DC0AFBFF6AC378E_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1CB36510)
#define CLASS_3_6DC0AFBFF6AC378E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB36500)

inline static constexpr unsigned int Class_3_6DC0AFBFF6AC378E_TypeDefinitionIndex = 23063;

class Class_3_6DC0AFBFF6AC378E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* FCGFFNKCLNJ; // 0x18
	::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x20
	::RPG::GameCore::TargetEvaluator* BLEOLOJJFDA; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::System::Boolean BGNCHHNAHEJ; // 0x38
	::RPG::MVector3 HAIBFNMDPKE; // 0x3C
	::RPG::MVector3 MPFLMHPNOOB; // 0x48
	::System::Single MOAPMBBKJAK; // 0x54

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
