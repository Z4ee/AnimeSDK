#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_DAED1DEA9B26CBB7_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1D8211A0)
#define CLASS_3_DAED1DEA9B26CBB7_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D821240)
#define CLASS_3_DAED1DEA9B26CBB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D821200)

inline static constexpr unsigned int Class_3_DAED1DEA9B26CBB7_TypeDefinitionIndex = 21086;

class Class_3_DAED1DEA9B26CBB7 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean HAOKIGJPEII; // 0x20
	::System::Boolean BDEFACKEMPD; // 0x21
	::System::Single GONACCPIJOO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAED1DEA9B26CBB7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DAED1DEA9B26CBB7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DAED1DEA9B26CBB7*&))((::PBYTE)hIl2Cpp + CLASS_3_DAED1DEA9B26CBB7_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DAED1DEA9B26CBB7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DAED1DEA9B26CBB7*))((::PBYTE)hIl2Cpp + CLASS_3_DAED1DEA9B26CBB7_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
