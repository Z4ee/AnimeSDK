#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_89AEF13151A6486C_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x1DAE4690)
#define CLASS_3_89AEF13151A6486C_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1DAE4730)
#define CLASS_3_89AEF13151A6486C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE46F0)

inline static constexpr unsigned int Class_3_89AEF13151A6486C_TypeDefinitionIndex = 22290;

class Class_3_89AEF13151A6486C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* IKGBDDDDADI; // 0x18
	::RPG::GameCore::TargetEvaluator* JFEANHJCLAA; // 0x20
	::RPG::GameCore::DynamicFloat* AOCLMBIAPOB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89AEF13151A6486C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_89AEF13151A6486C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_89AEF13151A6486C*&))((::PBYTE)hIl2Cpp + CLASS_3_89AEF13151A6486C_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_89AEF13151A6486C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_89AEF13151A6486C*))((::PBYTE)hIl2Cpp + CLASS_3_89AEF13151A6486C_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
