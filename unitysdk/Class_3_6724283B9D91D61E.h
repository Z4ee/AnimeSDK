#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6724283B9D91D61E_METHOD_3_41307200E9DE3ABB_OFFSET UNITYSDK_OFFSET(0x19B6ED20)
#define CLASS_3_6724283B9D91D61E_METHOD_3_BA57C68CB1B6BDFC_OFFSET UNITYSDK_OFFSET(0x19B6EC40)
#define CLASS_3_6724283B9D91D61E__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6EC80)

inline static constexpr unsigned int Class_3_6724283B9D91D61E_TypeDefinitionIndex = 21375;

class Class_3_6724283B9D91D61E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::JsonEnum* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::DynamicString* Field_3_5; // 0x40
	::RPG::GameCore::TargetEvaluator* Field_3_6; // 0x48
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6724283B9D91D61E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BA57C68CB1B6BDFC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6724283B9D91D61E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6724283B9D91D61E*&))((::PBYTE)hIl2Cpp + CLASS_3_6724283B9D91D61E_METHOD_3_BA57C68CB1B6BDFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_41307200E9DE3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6724283B9D91D61E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6724283B9D91D61E*))((::PBYTE)hIl2Cpp + CLASS_3_6724283B9D91D61E_METHOD_3_41307200E9DE3ABB_OFFSET))(a1, a2);
	}
};
