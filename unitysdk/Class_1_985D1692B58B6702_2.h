#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define CLASS_1_985D1692B58B6702_2_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0x121E1530)
#define CLASS_1_985D1692B58B6702_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x121E1420)
#define CLASS_1_985D1692B58B6702_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x121E14C0)
#define CLASS_1_985D1692B58B6702_2__CTOR_OFFSET UNITYSDK_OFFSET(0x121E1410)

inline static constexpr unsigned int Class_1_985D1692B58B6702_2_TypeDefinitionIndex = 66994;

class Class_1_985D1692B58B6702_2 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_2_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_2_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* get_Formula()
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_2_GET_FORMULA_OFFSET))(this);
	}
};
