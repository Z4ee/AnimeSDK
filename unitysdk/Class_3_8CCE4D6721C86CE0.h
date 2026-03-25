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

#define CLASS_3_8CCE4D6721C86CE0_METHOD_3_1FEC466530D44C17_OFFSET UNITYSDK_OFFSET(0x16BFF330)
#define CLASS_3_8CCE4D6721C86CE0_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x16BFF410)
#define CLASS_3_8CCE4D6721C86CE0__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFF370)

inline static constexpr unsigned int Class_3_8CCE4D6721C86CE0_TypeDefinitionIndex = 20792;

class Class_3_8CCE4D6721C86CE0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_6; // 0x18
	::System::String* Field_3_2; // 0x20
	::RPG::GameCore::DynamicString* Field_3_7; // 0x28
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_5; // 0x30
	::RPG::GameCore::JsonEnum* Field_3_1; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x40
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x48
	::System::String* Field_3_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CCE4D6721C86CE0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1FEC466530D44C17(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8CCE4D6721C86CE0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8CCE4D6721C86CE0*&))((::PBYTE)hIl2Cpp + CLASS_3_8CCE4D6721C86CE0_METHOD_3_1FEC466530D44C17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8CCE4D6721C86CE0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8CCE4D6721C86CE0*))((::PBYTE)hIl2Cpp + CLASS_3_8CCE4D6721C86CE0_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
