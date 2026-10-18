#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10326785E956FF48.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_2EBEEC62ABE325F1_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x1D2096B0)
#define CLASS_3_2EBEEC62ABE325F1_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x1D2096F0)
#define CLASS_3_2EBEEC62ABE325F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2096E0)

inline static constexpr unsigned int Class_3_2EBEEC62ABE325F1_TypeDefinitionIndex = 21078;

class Class_3_2EBEEC62ABE325F1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
	::Enum_3_10326785E956FF48 KDHPKOFLNFM; // 0x20
	::System::Boolean BBLMMNLCMGM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EBEEC62ABE325F1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2EBEEC62ABE325F1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2EBEEC62ABE325F1*&))((::PBYTE)hIl2Cpp + CLASS_3_2EBEEC62ABE325F1_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2EBEEC62ABE325F1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2EBEEC62ABE325F1*))((::PBYTE)hIl2Cpp + CLASS_3_2EBEEC62ABE325F1_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};
