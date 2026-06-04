#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_E2E089E5A3E41E2A_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x195A5610)
#define CLASS_4_E2E089E5A3E41E2A_METHOD_4_8A8F5F95C1040BAA_OFFSET UNITYSDK_OFFSET(0x195A51F0)
#define CLASS_4_E2E089E5A3E41E2A_METHOD_4_9CD365AE07B8A27E_OFFSET UNITYSDK_OFFSET(0x195A52F0)
#define CLASS_4_E2E089E5A3E41E2A__CTOR_OFFSET UNITYSDK_OFFSET(0x195A5230)

inline static constexpr unsigned int Class_4_E2E089E5A3E41E2A_TypeDefinitionIndex = 22878;

class Class_4_E2E089E5A3E41E2A : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x18
	::RPG::GameCore::DynamicString* Field_4_1; // 0x20
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_4_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_3; // 0x30
	::System::String* Field_4_4; // 0x38
	::RPG::GameCore::RtModifierPropertyType Field_4_5; // 0x40
	::RPG::GameCore::NumOperationType Field_4_6; // 0x44
	::RPG::GameCore::DynamicValueContextScope Field_4_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2E089E5A3E41E2A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8A8F5F95C1040BAA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E2E089E5A3E41E2A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E2E089E5A3E41E2A*&))((::PBYTE)hIl2Cpp + CLASS_4_E2E089E5A3E41E2A_METHOD_4_8A8F5F95C1040BAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_9CD365AE07B8A27E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E2E089E5A3E41E2A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E2E089E5A3E41E2A*))((::PBYTE)hIl2Cpp + CLASS_4_E2E089E5A3E41E2A_METHOD_4_9CD365AE07B8A27E_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2E089E5A3E41E2A_GETDYNAMICKEY_OFFSET))(this);
	}
};
