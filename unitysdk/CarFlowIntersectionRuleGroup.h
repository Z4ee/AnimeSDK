#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CarFlowIntersectionRule;
namespace System { class String; }

#define CARFLOWINTERSECTIONRULEGROUP_METHOD_1_2F8759FF1B07A918_OFFSET UNITYSDK_OFFSET(0xC738640)
#define CARFLOWINTERSECTIONRULEGROUP_METHOD_1_C6BD7598FB8E5123_OFFSET UNITYSDK_OFFSET(0xC738AE0)
#define CARFLOWINTERSECTIONRULEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xC738B70)

inline static constexpr unsigned int CarFlowIntersectionRuleGroup_TypeDefinitionIndex = 44421;

class CarFlowIntersectionRuleGroup : public ::System::Object
{
public:
	::System::String* RuleName; // 0x10
	::Il2CppArray<::CarFlowIntersectionRule*>* Rules; // 0x18
	::System::Boolean Active; // 0x20
	::UnityEngine::Vector2 Duration; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F8759FF1B07A918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP_METHOD_1_2F8759FF1B07A918_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6BD7598FB8E5123()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP_METHOD_1_C6BD7598FB8E5123_OFFSET))(this);
	}
};
