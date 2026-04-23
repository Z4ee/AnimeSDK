#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_728535E13DFDCE0D_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19120700)
#define CLASS_3_728535E13DFDCE0D_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19120780)
#define CLASS_3_728535E13DFDCE0D__CTOR_OFFSET UNITYSDK_OFFSET(0x19120750)

inline static constexpr unsigned int Class_3_728535E13DFDCE0D_TypeDefinitionIndex = 21689;

class Class_3_728535E13DFDCE0D : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_F3EEA4ED0244C1A6* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x28
	::RPG::GameCore::ElationPointModifyFunction Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_728535E13DFDCE0D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_728535E13DFDCE0D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_728535E13DFDCE0D*&))((::PBYTE)hIl2Cpp + CLASS_3_728535E13DFDCE0D_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_728535E13DFDCE0D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_728535E13DFDCE0D*))((::PBYTE)hIl2Cpp + CLASS_3_728535E13DFDCE0D_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
