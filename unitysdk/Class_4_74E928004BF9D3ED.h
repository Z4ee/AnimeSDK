#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_74E928004BF9D3ED_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B3A6DF0)
#define CLASS_4_74E928004BF9D3ED_METHOD_4_7B853BC09F06B583_OFFSET UNITYSDK_OFFSET(0x1B3A6AC0)
#define CLASS_4_74E928004BF9D3ED_METHOD_4_CFBE19BA3CA584C8_OFFSET UNITYSDK_OFFSET(0x1B3A6BC0)
#define CLASS_4_74E928004BF9D3ED_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1B3A6D60)
#define CLASS_4_74E928004BF9D3ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6B50)

inline static constexpr unsigned int Class_4_74E928004BF9D3ED_TypeDefinitionIndex = 22172;

class Class_4_74E928004BF9D3ED : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_74E928004BF9D3ED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_7B853BC09F06B583(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_74E928004BF9D3ED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_74E928004BF9D3ED*&))((::PBYTE)hIl2Cpp + CLASS_4_74E928004BF9D3ED_METHOD_4_7B853BC09F06B583_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_CFBE19BA3CA584C8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_74E928004BF9D3ED* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_74E928004BF9D3ED*))((::PBYTE)hIl2Cpp + CLASS_4_74E928004BF9D3ED_METHOD_4_CFBE19BA3CA584C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_74E928004BF9D3ED*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_74E928004BF9D3ED*&))((::PBYTE)hIl2Cpp + CLASS_4_74E928004BF9D3ED_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_74E928004BF9D3ED* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_74E928004BF9D3ED*))((::PBYTE)hIl2Cpp + CLASS_4_74E928004BF9D3ED_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
