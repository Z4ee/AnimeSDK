#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_68C34B5C1C40C2FF;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E26064C540C50C92_METHOD_3_1FEC466530D44C17_OFFSET UNITYSDK_OFFSET(0x183DA260)
#define CLASS_3_E26064C540C50C92_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x183DA370)
#define CLASS_3_E26064C540C50C92__CTOR_OFFSET UNITYSDK_OFFSET(0x183DA2A0)

inline static constexpr unsigned int Class_3_E26064C540C50C92_TypeDefinitionIndex = 21496;

class Class_3_E26064C540C50C92 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_8; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x28
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_6; // 0x30
	::RPG::GameCore::TurnInsertActionUIConfig* Field_3_12; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Field_3_5; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_11; // 0x48
	::RPG::GameCore::DynamicString* Field_3_10; // 0x50
	::RPG::GameCore::JsonEnum* Field_3_2; // 0x58
	::System::String* Field_3_3; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_4; // 0x68
	::Class_2_68C34B5C1C40C2FF* Field_3_13; // 0x70
	::System::Boolean Field_3_9; // 0x78
	::System::Boolean Field_3_7; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E26064C540C50C92__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1FEC466530D44C17(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E26064C540C50C92*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E26064C540C50C92*&))((::PBYTE)hIl2Cpp + CLASS_3_E26064C540C50C92_METHOD_3_1FEC466530D44C17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E26064C540C50C92* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E26064C540C50C92*))((::PBYTE)hIl2Cpp + CLASS_3_E26064C540C50C92_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
