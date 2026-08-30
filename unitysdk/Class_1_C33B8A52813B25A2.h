#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace System { class String; }

#define CLASS_1_C33B8A52813B25A2_METHOD_1_37641CB56E59A096_OFFSET UNITYSDK_OFFSET(0xC524220)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_63BD5138385D050A_OFFSET UNITYSDK_OFFSET(0xC5244A0)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_6B678B5F79F26AE5_OFFSET UNITYSDK_OFFSET(0xC524040)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0xC524310)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_D6FE9B7A89C02015_OFFSET UNITYSDK_OFFSET(0xC523F80)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_E357916AB249F999_OFFSET UNITYSDK_OFFSET(0xC524130)
#define CLASS_1_C33B8A52813B25A2_METHOD_1_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0xC5243E0)
#define CLASS_1_C33B8A52813B25A2__CTOR_OFFSET UNITYSDK_OFFSET(0xC523F70)

inline static constexpr unsigned int Class_1_C33B8A52813B25A2_TypeDefinitionIndex = 55972;

class Class_1_C33B8A52813B25A2 : public ::System::Object
{
public:
	::RPG::GameCore::UniversalHotFixTaskConfig* OFKGLJOAMLD; // 0x10

	::System::Void _ctor(::RPG::GameCore::UniversalHotFixTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UniversalHotFixTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* Method_1_D6FE9B7A89C02015(::System::String* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_D6FE9B7A89C02015_OFFSET))(this, a1);
	}

	::RPG::GameCore::DynamicFloat* Method_1_6B678B5F79F26AE5(::System::String* a1)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_6B678B5F79F26AE5_OFFSET))(this, a1);
	}

	::RPG::GameCore::DynamicString* Method_1_E357916AB249F999(::System::String* a1)
	{
		return ((::RPG::GameCore::DynamicString*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_E357916AB249F999_OFFSET))(this, a1);
	}

	::System::String* Method_1_37641CB56E59A096(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_37641CB56E59A096_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_63BD5138385D050A(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33B8A52813B25A2_METHOD_1_63BD5138385D050A_OFFSET))(this, a1);
	}
};
