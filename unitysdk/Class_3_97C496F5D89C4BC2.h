#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_97C496F5D89C4BC2_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x1C8EA540)
#define CLASS_3_97C496F5D89C4BC2_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1C8EA500)
#define CLASS_3_97C496F5D89C4BC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8EA530)

inline static constexpr unsigned int Class_3_97C496F5D89C4BC2_TypeDefinitionIndex = 21857;

class Class_3_97C496F5D89C4BC2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* PFOOEFJNOIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97C496F5D89C4BC2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97C496F5D89C4BC2*&))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97C496F5D89C4BC2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97C496F5D89C4BC2*))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
