#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_9B3E8C45B71122D5;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_02188F0D1DF78350_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1B3A3300)
#define CLASS_3_02188F0D1DF78350_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B3A33A0)
#define CLASS_3_02188F0D1DF78350__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A3360)

inline static constexpr unsigned int Class_3_02188F0D1DF78350_TypeDefinitionIndex = 22374;

class Class_3_02188F0D1DF78350 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_9B3E8C45B71122D5*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02188F0D1DF78350__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_02188F0D1DF78350*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_02188F0D1DF78350*&))((::PBYTE)hIl2Cpp + CLASS_3_02188F0D1DF78350_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_02188F0D1DF78350* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_02188F0D1DF78350*))((::PBYTE)hIl2Cpp + CLASS_3_02188F0D1DF78350_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
