#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define CLASS_1_985D1692B58B6702_1_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0x180CD3B0)
#define CLASS_1_985D1692B58B6702_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180CD150)
#define CLASS_1_985D1692B58B6702_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x180CD1F0)
#define CLASS_1_985D1692B58B6702_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180CD140)

inline static constexpr unsigned int Class_1_985D1692B58B6702_1_TypeDefinitionIndex = 66992;

class Class_1_985D1692B58B6702_1 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_1_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* get_Formula()
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_985D1692B58B6702_1_GET_FORMULA_OFFSET))(this);
	}
};
