#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1D1EB6BCC0C093D7_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x189852F0)
#define CLASS_3_1D1EB6BCC0C093D7_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18985270)
#define CLASS_3_1D1EB6BCC0C093D7__CTOR_OFFSET UNITYSDK_OFFSET(0x189852C0)

inline static constexpr unsigned int Class_3_1D1EB6BCC0C093D7_TypeDefinitionIndex = 23155;

class Class_3_1D1EB6BCC0C093D7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Field_3_7; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x40
	::RPG::GameCore::RtLifeBindingConfig* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D1EB6BCC0C093D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1D1EB6BCC0C093D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1D1EB6BCC0C093D7*&))((::PBYTE)hIl2Cpp + CLASS_3_1D1EB6BCC0C093D7_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1D1EB6BCC0C093D7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1D1EB6BCC0C093D7*))((::PBYTE)hIl2Cpp + CLASS_3_1D1EB6BCC0C093D7_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
