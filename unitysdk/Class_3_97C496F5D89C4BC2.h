#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_97C496F5D89C4BC2_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x19EC47D0)
#define CLASS_3_97C496F5D89C4BC2_METHOD_3_2689645F20617A7A_OFFSET UNITYSDK_OFFSET(0x19EC4750)
#define CLASS_3_97C496F5D89C4BC2__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC47A0)

inline static constexpr unsigned int Class_3_97C496F5D89C4BC2_TypeDefinitionIndex = 20882;

class Class_3_97C496F5D89C4BC2 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2689645F20617A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97C496F5D89C4BC2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97C496F5D89C4BC2*&))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2_METHOD_3_2689645F20617A7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97C496F5D89C4BC2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97C496F5D89C4BC2*))((::PBYTE)hIl2Cpp + CLASS_3_97C496F5D89C4BC2_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
