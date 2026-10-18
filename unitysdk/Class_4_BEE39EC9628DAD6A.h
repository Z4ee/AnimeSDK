#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointRemoveType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_BEE39EC9628DAD6A_METHOD_4_319BE01CD615CE10_OFFSET UNITYSDK_OFFSET(0x1D06EE50)
#define CLASS_4_BEE39EC9628DAD6A_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1D06F0B0)
#define CLASS_4_BEE39EC9628DAD6A_METHOD_4_73F0031E4983E886_OFFSET UNITYSDK_OFFSET(0x1D06EEB0)
#define CLASS_4_BEE39EC9628DAD6A_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1D06F060)
#define CLASS_4_BEE39EC9628DAD6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06EEA0)

inline static constexpr unsigned int Class_4_BEE39EC9628DAD6A_TypeDefinitionIndex = 22787;

class Class_4_BEE39EC9628DAD6A : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::ElationEchoPointRemoveType GMPGDEINODK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BEE39EC9628DAD6A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_319BE01CD615CE10(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BEE39EC9628DAD6A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BEE39EC9628DAD6A*&))((::PBYTE)hIl2Cpp + CLASS_4_BEE39EC9628DAD6A_METHOD_4_319BE01CD615CE10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73F0031E4983E886(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BEE39EC9628DAD6A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BEE39EC9628DAD6A*))((::PBYTE)hIl2Cpp + CLASS_4_BEE39EC9628DAD6A_METHOD_4_73F0031E4983E886_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_BEE39EC9628DAD6A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BEE39EC9628DAD6A*&))((::PBYTE)hIl2Cpp + CLASS_4_BEE39EC9628DAD6A_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_BEE39EC9628DAD6A* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BEE39EC9628DAD6A*))((::PBYTE)hIl2Cpp + CLASS_4_BEE39EC9628DAD6A_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
