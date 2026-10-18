#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_81F03932008258EC_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1D1E34C0)
#define CLASS_3_81F03932008258EC_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D1E3560)
#define CLASS_3_81F03932008258EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3520)

inline static constexpr unsigned int Class_3_81F03932008258EC_TypeDefinitionIndex = 23169;

class Class_3_81F03932008258EC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Enum_3_0A3761FE34514D6C_5 GMPGDEINODK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81F03932008258EC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_81F03932008258EC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_81F03932008258EC*&))((::PBYTE)hIl2Cpp + CLASS_3_81F03932008258EC_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_81F03932008258EC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_81F03932008258EC*))((::PBYTE)hIl2Cpp + CLASS_3_81F03932008258EC_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
