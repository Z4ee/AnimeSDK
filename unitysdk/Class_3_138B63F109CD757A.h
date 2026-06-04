#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_138B63F109CD757A_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x19374C30)
#define CLASS_3_138B63F109CD757A_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x19374CD0)
#define CLASS_3_138B63F109CD757A__CTOR_OFFSET UNITYSDK_OFFSET(0x19374C90)

inline static constexpr unsigned int Class_3_138B63F109CD757A_TypeDefinitionIndex = 22318;

class Class_3_138B63F109CD757A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::PropertyModifyFunction Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x3C
	::System::Boolean Field_3_6; // 0x3D
	::RPG::GameCore::PropertyModifyFunction Field_3_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138B63F109CD757A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_138B63F109CD757A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_138B63F109CD757A*&))((::PBYTE)hIl2Cpp + CLASS_3_138B63F109CD757A_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_138B63F109CD757A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_138B63F109CD757A*))((::PBYTE)hIl2Cpp + CLASS_3_138B63F109CD757A_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
