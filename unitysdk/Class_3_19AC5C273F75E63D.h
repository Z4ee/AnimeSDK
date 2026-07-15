#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_19AC5C273F75E63D_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1B312970)
#define CLASS_3_19AC5C273F75E63D_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1B312920)
#define CLASS_3_19AC5C273F75E63D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B312960)

inline static constexpr unsigned int Class_3_19AC5C273F75E63D_TypeDefinitionIndex = 21786;

class Class_3_19AC5C273F75E63D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::RPG::GameCore::PropertyModifyFunction Field_3_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19AC5C273F75E63D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_19AC5C273F75E63D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_19AC5C273F75E63D*&))((::PBYTE)hIl2Cpp + CLASS_3_19AC5C273F75E63D_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_19AC5C273F75E63D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_19AC5C273F75E63D*))((::PBYTE)hIl2Cpp + CLASS_3_19AC5C273F75E63D_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
