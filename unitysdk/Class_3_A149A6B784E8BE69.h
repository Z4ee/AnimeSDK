#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_42C46B3D8BC311E2;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_A149A6B784E8BE69_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x16B07840)
#define CLASS_3_A149A6B784E8BE69_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x16B078C0)
#define CLASS_3_A149A6B784E8BE69__CTOR_OFFSET UNITYSDK_OFFSET(0x16B07890)

inline static constexpr unsigned int Class_3_A149A6B784E8BE69_TypeDefinitionIndex = 21064;

class Class_3_A149A6B784E8BE69 : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_E5D38AB31F1F266B* Field_3_2; // 0x18
	::System::String* Field_3_4; // 0x20
	::System::String* Field_3_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x38
	::Class_2_42C46B3D8BC311E2* Field_3_6; // 0x40
	::System::Boolean Field_3_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A149A6B784E8BE69__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A149A6B784E8BE69*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A149A6B784E8BE69*&))((::PBYTE)hIl2Cpp + CLASS_3_A149A6B784E8BE69_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A149A6B784E8BE69* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A149A6B784E8BE69*))((::PBYTE)hIl2Cpp + CLASS_3_A149A6B784E8BE69_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
