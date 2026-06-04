#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_F56C73C9E3BB51F1_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x1937DC40)
#define CLASS_3_F56C73C9E3BB51F1_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1937DCD0)
#define CLASS_3_F56C73C9E3BB51F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1937DCA0)

inline static constexpr unsigned int Class_3_F56C73C9E3BB51F1_TypeDefinitionIndex = 22803;

class Class_3_F56C73C9E3BB51F1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28
	::RPG::GameCore::DeathSource Field_3_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F56C73C9E3BB51F1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F56C73C9E3BB51F1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F56C73C9E3BB51F1*&))((::PBYTE)hIl2Cpp + CLASS_3_F56C73C9E3BB51F1_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F56C73C9E3BB51F1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F56C73C9E3BB51F1*))((::PBYTE)hIl2Cpp + CLASS_3_F56C73C9E3BB51F1_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
