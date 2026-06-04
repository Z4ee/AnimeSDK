#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E0D26BEB1B9C290C_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x19343970)
#define CLASS_4_E0D26BEB1B9C290C_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x19343C90)
#define CLASS_4_E0D26BEB1B9C290C_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x19343D60)
#define CLASS_4_E0D26BEB1B9C290C_METHOD_4_CFBE19BA3CA584C8_OFFSET UNITYSDK_OFFSET(0x19343AF0)
#define CLASS_4_E0D26BEB1B9C290C__CTOR_OFFSET UNITYSDK_OFFSET(0x19343A40)

inline static constexpr unsigned int Class_4_E0D26BEB1B9C290C_TypeDefinitionIndex = 21746;

class Class_4_E0D26BEB1B9C290C : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0D26BEB1B9C290C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E0D26BEB1B9C290C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E0D26BEB1B9C290C*&))((::PBYTE)hIl2Cpp + CLASS_4_E0D26BEB1B9C290C_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_CFBE19BA3CA584C8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E0D26BEB1B9C290C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E0D26BEB1B9C290C*))((::PBYTE)hIl2Cpp + CLASS_4_E0D26BEB1B9C290C_METHOD_4_CFBE19BA3CA584C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_E0D26BEB1B9C290C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E0D26BEB1B9C290C*&))((::PBYTE)hIl2Cpp + CLASS_4_E0D26BEB1B9C290C_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_E0D26BEB1B9C290C* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E0D26BEB1B9C290C*))((::PBYTE)hIl2Cpp + CLASS_4_E0D26BEB1B9C290C_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
