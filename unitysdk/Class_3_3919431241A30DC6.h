#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_3919431241A30DC6_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x192CAF90)
#define CLASS_3_3919431241A30DC6_METHOD_3_A811EDB6C0C4A1C7_OFFSET UNITYSDK_OFFSET(0x192CB100)
#define CLASS_3_3919431241A30DC6__CTOR_OFFSET UNITYSDK_OFFSET(0x192CAFD0)

inline static constexpr unsigned int Class_3_3919431241A30DC6_TypeDefinitionIndex = 22812;

class Class_3_3919431241A30DC6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3919431241A30DC6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3919431241A30DC6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3919431241A30DC6*&))((::PBYTE)hIl2Cpp + CLASS_3_3919431241A30DC6_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A811EDB6C0C4A1C7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3919431241A30DC6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3919431241A30DC6*))((::PBYTE)hIl2Cpp + CLASS_3_3919431241A30DC6_METHOD_3_A811EDB6C0C4A1C7_OFFSET))(a1, a2);
	}
};
