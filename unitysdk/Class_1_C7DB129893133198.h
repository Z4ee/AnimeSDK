#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_C7DB129893133198_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x113E6850)
#define CLASS_1_C7DB129893133198_METHOD_1_B66E74B71BAC4D56_OFFSET UNITYSDK_OFFSET(0x113E6920)
#define CLASS_1_C7DB129893133198__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6910)

inline static constexpr unsigned int Class_1_C7DB129893133198_TypeDefinitionIndex = 53058;

class Class_1_C7DB129893133198 : public ::System::Object
{
public:
	::System::Text::StringBuilder* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7DB129893133198__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7DB129893133198_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_B66E74B71BAC4D56(::System::String* a1, ::System::String* a2, ::MoleMole::Config::ConfigDynamicValue* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_C7DB129893133198_METHOD_1_B66E74B71BAC4D56_OFFSET))(this, a1, a2, a3);
	}
};
