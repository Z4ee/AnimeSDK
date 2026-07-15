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

#define CLASS_3_83EA74218EFDDF83_METHOD_3_0C897AFF22BC8629_OFFSET UNITYSDK_OFFSET(0x1847A630)
#define CLASS_3_83EA74218EFDDF83_METHOD_3_BA57C68CB1B6BDFC_OFFSET UNITYSDK_OFFSET(0x184A76F0)
#define CLASS_3_83EA74218EFDDF83__CTOR_OFFSET UNITYSDK_OFFSET(0x1847A570)

inline static constexpr unsigned int Class_3_83EA74218EFDDF83_TypeDefinitionIndex = 21794;

class Class_3_83EA74218EFDDF83 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::DynamicString*>* Field_3_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::JsonEnum* Field_3_6; // 0x48
	::RPG::GameCore::TurnInsertActionUIConfig* Field_3_7; // 0x50
	::RPG::GameCore::TargetEvaluator* Field_3_8; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_9; // 0x60
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_10; // 0x68
	::Class_2_68C34B5C1C40C2FF* Field_3_11; // 0x70
	::System::Boolean Field_3_12; // 0x78
	::System::Boolean Field_3_13; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BA57C68CB1B6BDFC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_83EA74218EFDDF83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_83EA74218EFDDF83*&))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83_METHOD_3_BA57C68CB1B6BDFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0C897AFF22BC8629(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_83EA74218EFDDF83* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_83EA74218EFDDF83*))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83_METHOD_3_0C897AFF22BC8629_OFFSET))(a1, a2);
	}
};
